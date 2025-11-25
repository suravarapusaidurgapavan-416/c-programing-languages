#include<stdio.h>
int main(){
	int units;
	scanf("%d",&units);
	float uc,bill,charge;
	if(units<200)
	{
		uc=1.20;
	}
	else if(units>=200 && units<400)
{
	uc=1.40;
}
else if(units>=400 && units<600)

{
	uc=1.60;
}
else if(units>600 && units<800)
{
	uc=2.00;
}
else if(units>=600 && units<800)
{
	uc=1.80;
}
{
	
}
bill=units*uc;
//printf("%f",bill);
if(bill<400)
{
	printf("%2f",bill+100);
}
else
{
	charge=bill*0.15;
	printf("%2f",bill+charge);
	return 0;
}
}
