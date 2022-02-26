//
// Created by swh on 2022/2/19.
//

#include "ProblemII.h"

int ProblemII::getMinimumMoney(std::vector<int> M, int K) {
	int n = M.size();
	std::vector<int> prefixSum(n + 1, 0);
	for (int i = 1; i <= n; i++)
		prefixSum[i] = prefixSum[i - 1] + M[i - 1];

	int minAmount = std::max(M[n - 1], prefixSum[n] / K), maxAmount = prefixSum[n];
	while (minAmount < maxAmount) {
		int midAmount = minAmount + ((maxAmount - minAmount) >> 1);
		int last = 0, to = 0, k = K;
		while (k) {
			while (to <= n && prefixSum[to] - prefixSum[last] <= midAmount)
				to++;
			if (to == n + 1)
				break;
			last = to - 1;
			k--;
		}
		if (to == n + 1)maxAmount = midAmount;
		else minAmount = midAmount + 1;
	}
	return minAmount;
}