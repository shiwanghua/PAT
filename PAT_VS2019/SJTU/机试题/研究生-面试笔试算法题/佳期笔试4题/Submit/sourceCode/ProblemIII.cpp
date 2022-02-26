//
// Created by swh on 2022/2/19.
//

#include "ProblemIII.h"

ProblemIII::ProblemIII() {

}

long ProblemIII::getDpIJ(int k, int i, int j) {
	if (0 <= i && i < 41 && 0 <= j && j < 41)
		return dp[k][i][j];
	else return 0;
}

void ProblemIII::randomWalk(int n) {
	direction = {{-1, -1},
				 {-1, 0},
				 {-1, 1},
				 {0,  -1},
				 {0,  1},
				 {1,  -1},
				 {1,  0},
				 {1,  1}};
	dp = vector<vector<vector<long>>>(21, vector<vector<long>>(41, vector<long>(41, 0)));
	dp[0][20][20] = 1;

	for (int k = 1; k <= 20; k++) {
		for (int i = 0; i < 41; i++) {
			for (int j = 0; j < 41; j++) {
				for (auto d: direction)
					dp[k][i][j] += getDpIJ(k - 1, i + d[0], j + d[1]);
			}
		}
	}
}

double ProblemIII::calExpectationDistance(int n) {
	double waysSum = 0;
	double distanceSum = 0;
	for (int i = 0; i < 41; ++i) {
		for (int j = 0; j < 41; ++j) {
			distanceSum += dp[n][i][j] * sqrt(pow(i - 20, 2) + pow(j - 20, 2));
			waysSum += dp[n][i][j];
		}
	}
	return distanceSum / waysSum;
}

void ProblemIII::Question1() {
	Timer timer;
	randomWalk(20);
	FILE *fp = NULL;
	fp = fopen("./answer_3A.txt", "w");
	for (int i = 1; i <= 20; i++) {
		double ans = calExpectationDistance(i);
		fprintf(fp, "n= %d, distance expectation: %.3f\n", i, ans);
	}
	fclose(fp);
	printf("\n\nProblemIII runTime: %fms\n\n",timer.elapsed_nano()/1000000.0);
}