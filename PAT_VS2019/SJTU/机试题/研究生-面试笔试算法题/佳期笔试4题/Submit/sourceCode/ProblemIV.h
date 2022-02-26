//
// Created by swh on 2022/2/19.
//

#ifndef FOREXAM_PROBLEMIV_H
#define FOREXAM_PROBLEMIV_H

#include "tool.h"
#include <pthread.h>

template <typename T>
class JqChannel
{
public:
	explicit JqChannel(uint32_t capacity) : capacity_(capacity) {
		idleConsumerNumber=idleProducerNumber=0;
		pthread_mutex_init(&mutex, NULL);
		pthread_cond_init(&cond_consumer, NULL);
		pthread_cond_init(&cond_producer, NULL);
	}
	JqChannel(const JqChannel &) = delete;
	JqChannel &operator=(const JqChannel &) = delete;

	void send(const T &t);
	void send(T &&t);
	T receive();


private:
	uint32_t capacity_;
	pthread_mutex_t mutex;
	pthread_cond_t cond_consumer,cond_producer;
	int idleConsumerNumber;
	int idleProducerNumber;
	std::queue<T> q_;
};

template <typename T>
void JqChannel<T>::send(const T &t)
{
	pthread_mutex_lock(&mutex);
	if(capacity_==q_.size()){
		if(capacity_==0)
			return;
		idleProducerNumber++;
		pthread_cond_wait(&cond_producer, &mutex);
	}
	else{
		q_.push(t);
	}
	if(idleConsumerNumber){
		pthread_cond_signal(&cond_consumer);
	}
	pthread_mutex_unlock(&mutex);
}

template <typename T>
void JqChannel<T>::send(T &&t)
{
	pthread_mutex_lock(&mutex);
	if(capacity_==q_.size()){
		if(capacity_==0)
			return;
		pthread_cond_wait(&cond_producer, &mutex);
	}
	else{
		q_.push(std::move(t));
	}
	if(idleConsumerNumber){
		pthread_cond_signal(&cond_consumer);
	}
	pthread_mutex_unlock(&mutex);
}

template <typename T>
T JqChannel<T>::receive()
{
	pthread_mutex_lock(&mutex);
	if(q_.size()>0){
		T t= q_.front();
		q_.pop();
		if(idleProducerNumber){
			pthread_cond_signal(&cond_producer);
		}
		pthread_mutex_unlock(&mutex);
		return t;
	} else{
		if(capacity_==0)
			return T();
		idleConsumerNumber++;
		pthread_cond_wait(&cond_consumer, &mutex);
	}
}

#endif //FOREXAM_PROBLEMIV_H
