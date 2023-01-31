
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	 float num, sq,lg, lg10, ex;
	 clrscr();
	 printf("Enter number: ");
	 scanf("%f", &num);
	 sq = sqrt(num);
	 lg = log(num);
	 lg10 = log10(num);
	 ex = exp(num);
	 printf("Square root of %0.2f is: %0.2f\n", num, sq);
	 printf("Natural log of %0.2f is: %0.2f\n", num, lg);
	 printf("Log base 10 of %0.2f is: %0.2f\n", num, lg10);
	 printf("Exponential value of %0.2f is: %0.2f\n", num, ex);
	 getch();
	 return(0);
}
