int isBissextile(int a)
{
	if(a%100 ==0)
	return 0;
	else if((a%4==0)||(a%400==0))
	return 1;
	else
	return 0;
}

