#include <stdio.h>
#include <math.h>

int main()
{
float i;
float x;
for (i=0;i<=M_PI;i+=(M_PI/10))
{
	x=cos(i);
	printf("%f\n",x);
}

}
