#include<stdio.h>
int main()
{
float P , R , T , SI ;
printF("enter the principal, rate amd time:");
scanf("%d,%f,%f", &P ,&R ,&T);
SI = (P*R*T)/100;
printf("\n\n Simple Interest is : %f", SI);
return (0);
}
