//
// Created by swh on 2022/2/19.
//

#ifndef FOREXAM_PROBLEMI_H
#define FOREXAM_PROBLEMI_H

#include "tool.h"
#include <thread>

void updateCounter(int* counter, int position);

class ProblemI {
	int *counter;
public:
	ProblemI() {}

	~ProblemI() {}

	void partA();

	void partB();
};


#endif //FOREXAM_PROBLEMI_H
