#include <stdio.h>

#define _USE_MATH_DEFINES
#include <math.h>

#define SWITCH_NUMBER 1.2

void EnterDouble(double* num, const char* number_name)
{
	printf("Enter %s:", number_name);
	scanf_s("%lf", num);
}

int main()
{
	double a;
	printf("a must be bigger than 0\n");
	do
	{
		EnterDouble(&a, "a");
	} while (a <= 0.0);

	double left_range_bound;
	EnterDouble(&left_range_bound, "left bound of range");

	double right_range_bound;
	printf("Right bound of range must be bigger than left one\n");
	do
	{
		EnterDouble(&right_range_bound, "right bound of range");
	} while (right_range_bound <= left_range_bound);

	double step;
	printf("Step must bigger than 0\n");
	do
	{
		EnterDouble(&step, "step");
	} while (step <= 0.0);

	double y;
	const double log_a = log(a);
	for (double x = left_range_bound; x <= right_range_bound; x += step)
	{
		if (x < SWITCH_NUMBER)
		{
			y = exp(x * x / 2.0) + log_a;
		}
		else if (x == SWITCH_NUMBER)
		{
			y = a * pow(cos(M_PI * x / 2.7), 3.0);
		}
		else
		{
			y = x * x + a * x + 5.0;
		}
		printf("y(%lf)=%lf\n", x, y);
	}

	getch();
	return 0;
}