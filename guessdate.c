#include<stdio.h>
#include<math.h>
const double a = 1;
const double b = -30;
const double c = -815184;
int main(void)
{
	double x1, x2, x3;
	double delta = b * b - 4 * a * c;
	if (delta < 0)
		printf("The equation has no roots.");
	else if (delta == 0)
		{
			x1 = -0.5 * b / a;
			printf("The root is %f.\n", x1);
		}
	else if(delta > 0)
		{
			double sq_rt = sqrt(delta);
			x2 = 0.5 * (-b + sq_rt) / a;
			x3 = 0.5 * (-b - sq_rt) / a;
			printf("The two roots are %f and %f.", x2, x3);
		}	
	return 0;
}