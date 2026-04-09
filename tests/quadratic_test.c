#include <assert.h>
#include <stdio.h>
#include "quadratic.h"

int main() {
	double roots[2];

	int count = solve_quadratic(1, 0, -1, roots);

	assert(count == 2);
	assert(roots[0] == -1);
	assert(roots[1] == 1);

	printf("Task 4 OK\n");
	return 0;
}
