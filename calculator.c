#include <stdio.h>
int main()
{
	int choice,r;
	float a,b,c,s,m,d,p,sqr,sn,cn,tn;
	printf("A Calculator using switch case");
	printf("\n1)Addition\n2)Substraction\n3)Multiplication\n4)Division\n5)Power\n6)Square root\n7)Sin\n8)Cos\n9)Tan\n10)Exit");
	printf("\nEnter your choice:");
	scanf("%d",&choice);
	switch (choice)
	{
		case 1:
		printf("\nEnter the first number:");
		scanf("%f",&a);
		printf("\nEnter  the second number:");
		scanf("%f",&b);
		c=a+b;
		printf("\nAddition is:%f",c);
		break;
		case 2:
		printf("\nEnter the first number:");
		scanf("%f",&a);
		printf("\nEnter the Second number:");
		scanf("%f",&b);
		s=a-b;
		printf("\nSubstraction is:%f",s);
		break;
		case 3:
		printf("\nEnter the first number:");
		scanf("%f",&a);
		printf("\nEnter the second number:");
		scanf("%f",&b);
		m=a*b;
		printf("\nMultiplication is:%f",m);
		break;
		case 4:
		printf("\nEnter the first number:");
		scanf("%f",&a);
		printf("\nEnter the second number:");
		scanf("%f",&b);
		d=a/b;
		printf("\nDivision is:%f",d);
		break;
		case 5:
		printf("\nEnter the base:");
		scanf("%f",&a);
		printf("\nEnter the exponent:");
		scanf("%f",&b);
		p=pow(a,b);
		printf("\nPower is:%f",p);
		break;
		case 6:
		printf("\nEnter the number:");
		scanf("%f",&a);
		if(a>=1)
		{
			sqr=sqrt(a);
			printf("\nSquare root of the given number is:%f",sqr);
		}
		else
		{
			printf("\nError:Square root of negative number is not real, please enter a valid number .");
		}
		break;
		case 7:
		printf("\nEnter the angle in radian:");
		scanf("%f",&a);
		sn=sin(a);
		printf("\nResult is:%f",sn);
		break;
		case 8:
		printf("\nEnter the angle in radian:");
		scanf("%f",&a);
		cn=cos(a);
		printf("\nResult is:%f",cn);
		break;
		case 9:
		printf("\nEnter the angle in radian:");
		scanf("%f",&a);
		tn=tan(a);
		printf("\nResult is:%f",tn);
		break;
		case 10:
		printf("Exit.....\n");
		break;
		}
	return 7800;
}