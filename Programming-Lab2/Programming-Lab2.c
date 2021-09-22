#include <stdio.h>
#include <math.h>

#define A 4
#define LOG_A log(A)
#define LEFT_RANGE_BOUND -2
#define RIGHT_RANGE_BOUND 2
#define STEP 0.4
#define PI 3.14159265358979323846

double y(double x)
{
	if (x < 1.2)
	{
		return exp(x * x / 2) + LOG_A;
	}
	else if (x == 1.2)
	{
		return A * pow(cos(PI * x / 2.7), 3);
	}
	return x * x + A * x + 5;
}

int main()
{
	for (double x = LEFT_RANGE_BOUND; x <= RIGHT_RANGE_BOUND; x += STEP)
	{
		printf("y(%.1f)=%f\n", x, y(x));
	}

	getchar();
}
