//
// Created by swh on 2022/2/19.
//

#include "ProblemI.h"

void ProblemI::partA() {
	int *a = new int[2];
	int steps = 256 * 1024 * 1024;
	uint64_t begin, end;
// loop A
	begin = tool::GetCPUCycle();
	for (int i = 0; i < steps; i++) {
		a[0]++;
		a[1]++;
	}
	end = tool::GetCPUCycle();
	printf("loop A: %ld\n", end - begin);
	a[0] = a[1] = 0;
// loop B
	begin = tool::GetCPUCycle();
	for (int i = 0; i < steps; i++) {
		a[0]++;
		a[0]++;
	}
	end = tool::GetCPUCycle();
	printf("loop B: %ld\n\n", end - begin);
	delete a;
}

void updateCounter(int* counter, int position)
{
	for (int j = 0; j < 100000000; j++)
	{
		counter[position] = counter[position] + 8;
	}
}

void ProblemI::partB() {
	counter= new int[1024];
	std::thread threads[4];

	Timer timer;
	for(int i=0;i<4;i++)
		threads[i]=thread(updateCounter,counter,i);
	for (auto &thread : threads)
		thread.join();
	int64_t runTime = timer.elapsed_nano();
	printf("Situation1: %ldns\n",runTime);

	timer.reset();
	for(int i=0;i<4;i++)
		threads[i]=thread(updateCounter,counter,(i+1)*16);
	for (auto &thread : threads)
		thread.join();
	runTime = timer.elapsed_nano();
	printf("Situation2: %ldns\n\n\n",runTime);

	delete counter;
}