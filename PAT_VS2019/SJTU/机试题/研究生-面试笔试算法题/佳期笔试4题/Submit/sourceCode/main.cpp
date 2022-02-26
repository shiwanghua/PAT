#include <iostream>
#include "ProblemI.h"
#include "ProblemII.h"
#include "ProblemIII.h"
#include "ProblemIV.h"

int main() {
	ProblemI p1;
	p1.partA();
	p1.partB();

	ProblemII p2;
	std::cout << "Problem2: " << p2.getMinimumMoney({1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, 4) <<"\n";

	ProblemIII p3;
	p3.Question1();

	JqChannel<int> channel(0);

	return 0;
}
