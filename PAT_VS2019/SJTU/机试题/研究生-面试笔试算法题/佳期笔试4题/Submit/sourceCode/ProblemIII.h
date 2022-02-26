//
// Created by swh on 2022/2/19.
//

#ifndef FOREXAM_PROBLEMIII_H
#define FOREXAM_PROBLEMIII_H

#include "tool.h"

class ProblemIII {
	vector<vector<vector<long>>> dp;

	vector<vector<int>> direction;

	long getDpIJ(int k, int i,int j);

	void randomWalk(int n);

	double calExpectationDistance(int n);

public:
	ProblemIII();

	void Question1();
};

#endif //FOREXAM_PROBLEMIII_H
