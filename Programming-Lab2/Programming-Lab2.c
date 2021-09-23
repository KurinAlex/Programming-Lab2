#include <stdio.h>

#define _USE_MATH_DEFINES
#include <math.h>

#define a 4
#define LEFT_RANGE_BOUND -2
#define RIGHT_RANGE_BOUND 2
#define STEP 0.4
#define SWITCH_NUMBER 1.2

int main()
{
	double y;
	for (double x = LEFT_RANGE_BOUND; x <= RIGHT_RANGE_BOUND; x += STEP)
	{
		if (x < SWITCH_NUMBER)
		{
			y = exp(x * x / 2) + log(a);
		}
		else if (x == SWITCH_NUMBER)
		{
			y = a * pow(cos(M_PI * x / 2.7), 3);
		}
		else
		{
			y = x * x + a * x + 5;
		}
		printf("y(%.1f)=%f\n", x, y);
	}

	getchar();
}