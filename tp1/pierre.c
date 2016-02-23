#include<stdio.h>
#include<math.h>

int isBissextile(int);

main()
{
	int a;
	scanf("%d",&a);
	if (isBissextile(a))
		printf("%d est Bissextile",a);
	else
		printf("%d n'est pas Bissextile",a);
}
