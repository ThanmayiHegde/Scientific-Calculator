#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define pi 3.14
void addition();
void subtraction();
void multiplication();
void division();
void sine();
void cosine();
void tangent();
void power();
void exponent();
void log_base10();
void log_base_e();
void factorial();
void isine();
void icosine();
void itangent();
void permutation();
void combination();
int fact(int n);
void sin_hyper();
void cos_hyper();
void tan_hyper();
void sin_inv_hyper();
void cos_inv_hyper();
void tan_inv_hyper();
void quad();


int main()
{
	int choice;
	while(1)
	{
		
		printf(" Please select your operation \n");
		printf(" Press 0 to quit\n");
		printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
		printf("5.sin\n6.cos\n7.tan\n8.power\n");
		printf("9.exponent\n10.log10\n11.log\n12.factorial\n13.sin inverse\n14.cosine inverse\n");
		printf("15.tan inverse\n16.Permutation\n17.Combination\n");
		printf("18.sin_hyper\n19.cos_hyper\n20.tan_hyper\n21.sin_inv_hyper\n22.cos_inv_hyper\n23.tan_inv_hyper\n24.Quadratic_Solution\n");
		scanf("%d",&choice);
		if(choice==0)
		{
			printf("*******EXIT********* THANK YOU!!!*************");
			exit(0);
		}
		else
		{
			switch(choice)
			{
				case 1:addition();
			        		break;
				case 2:subtraction();
			                        break;
				case 3:multiplication();
			            	        break;
				case 4:division();
			                        break;
				case 5:sine();
			                        break;
				case 6:cosine();
			                        break;
				case 7:tangent();
			                        break;
				case 8:power();
			                        break;
				case 9:exponent();
			                        break;
				case 10:log_base10();
			                        break;
				case 11:log_base_e();
			           	        break;
				case 12:factorial();
			                        break;
				case 13:isine();
				                break;
				case 14:icosine();
				                break;
				case 15:itangent();
				                break;
				case 16:permutation();
				                break;
				case 17:combination();
				                break;
				case 18:sin_hyper();
						break;
				case 19:cos_hyper();
						break;
				case 20:tan_hyper();
						break;
				case 21:sin_inv_hyper();
						break;
				case 22:cos_inv_hyper();
						break;
				case 23:tan_inv_hyper();
						break;
				case 24:quad();
						break;
				default:printf(" Invalid choice ");
			             	        break;
			}
		}
		
	}
	return 0;
}
void addition()
{
	int n,i,sum,num;
	i=0;
	sum=0;
	printf(" Enter the number of elements you want to add : ");
	scanf("%d",&n);
	printf(" Please enter %d elements one by one : ",n);
	while(i<n)
	{
		scanf("%d",&num);
		sum+=num;
		i++;
	}
	printf(" Sum = %d\n\n",sum);
}
void subtraction()
{
	int a,b;
	int c;
	printf(" Enter the first number : ");
	scanf("%d",&a);
	printf(" Enter the second number : ");
	scanf("%d",&b);
	c=a-b;
	printf(" %d - %d = %d\n\n",a,b,c);
}
void multiplication()
{
	int i,n,num;
	int prod=1;
	i=0;
	printf(" Enter the number of elements you want to multiply : ");
	scanf("%d",&n);
	printf(" Please enter %d elements one by one :\n",n);
	while(i<n)
	{	
		scanf("%d",&num);
		prod=prod*num;
		i++;
	}
	printf(" Product of %d elements is %d\n\n",n,prod);
}
void division()
{
	int a,b;
	int c;
	printf(" Enter the first number : ");
	scanf("%d",&a);
	printf(" Enter the second number : ");
	scanf("%d",&b);
	if(b==0)
	{
		printf("ERROR\n\n");
	}
	else
	{
		c=a/b;
		printf(" %d / %d = %d\n\n",a,b,c);
	}
}
void sine()
{
	float x,res;
	printf(" Enter the angle in degrees : ");
	scanf("%f",&x);
	res=sin(x*pi/180);
	printf(" sin(%.2f) =%.2f\n\n",x,res);
}
void cosine()
{
	float x,res;
	printf(" Enter the angle in degrees : ");
	scanf("%f",&x);
	res=cos(x*pi/180);
	printf(" cos(%.2f) =%.2f\n\n",x,res);
}
void tangent()
{
	float x,res;
	printf(" Enter the angle in degrees : ");
	scanf("%f",&x);
	res=tan(x*pi/180);
	printf(" tan(%.2f) =%.2f\n\n",x,res);
}
void power()
{
	float x,y,res;
	printf(" Enter the base value : ");
	scanf("%f",&x);
	printf(" Enter the power value : ");
	scanf("%f",&y);
	res=pow(x,y);
	printf(" %.2f to the power %.2f is %.2f\n\n",x,y,res);
}
void exponent()
{
	float x,res;
	printf(" Enter the power value : ");
	scanf("%f",&x);
	res=exp(x);
	printf(" e^(%.2f) = %.2f\n\n",x,res);
	
}	
void log_base10()
{
	float x,res;
	printf(" Enter the number : ");
	scanf("%f",&x);
	if(x<=0)
	printf("ERROR\n\n");
	else
	{
	res=log10(x);
	printf(" log10(%.2f)= %.2f\n\n",x,res);
	}
}
void log_base_e()
{
	float x,res;
	printf(" Enter the number : ");
	scanf("%f",&x);
	if(x<=0)
	printf("ERROR\n\n");
	else
	{
	res=log(x);
	printf(" log(%.2f) = %.2f\n\n",x,res);
	}
}
void factorial()
{	
	int n,i,fact;
	i=1;
	printf(" Enter the number : ");
	scanf("%d",&n);
	if(n<0)
	{
		printf("ERROR\n\n");
	}
	else if(n==0)
	{
		printf(" 0! = 1 \n\n");
	}
	else
	{
		fact=1;
		for(i=1;i<=n;i++)
		{
			fact*=i;
		}
		printf(" %d! = %d\n\n",n,fact);
	}
}
void isine()
{
	double i;
	float b;
	printf("Enter the number :");
	scanf("%lf",&i);
	if(i>1 || i<-1)
	{
	printf("ERROR\n\n");
	}
	else
	{
	b=(asin(i)*180/pi);
	printf("The value of SINE INVERSE(%lf) in degrees:%f\n\n",i,b);
	}
}
void icosine()
{
	double i;
	float b;
	printf("Enter the number :");
	scanf("%lf",&i);
	if(i>1 || i<-1)
	{
	printf("ERROR\n\n");
	}
	else
	{
	b=(acos(i)*180/pi);
	printf("The value of COSINE INVERSE(%lf) in degrees:%f\n\n",i,b);
	}
}
void itangent()
{
	double i;
	float b;
	printf("Enter the number :");
	scanf("%lf",&i);
	b=(atan(i)*180/pi);
	printf("The value of TAN(%lf) in degrees:%f\n\n",i,b);
}		
void permutation()
{
	int n,r;
	printf("Enter the value of n and r:");
	scanf("%d %d",&n,&r);
	if((n<0) || (r<0) || (n<r))
	{
	printf("ERROR\n\n");
	}
	else
	{
	int p;
	p=(fact(n)/fact(n-r));
	printf("%dP%d = %d\n\n",n,r,p);
	}
	
}
void combination()
{
	int n,r;
	printf("Enter the value of n and r:");
	scanf("%d %d",&n,&r);
	if((n<0) || (r<0) || (n<r))
	{
	printf("ERROR\n\n");
	}
	else
	{
	int c;
	c=(fact(n)/(fact(n-r)*fact(r)));
	printf("%dC%d=%d\n\n",n,r,c);
	}
	
}
int fact(int n)
{
	if(n==0)
		return 1;
	else
		return (n*fact(n-1));
}
void sin_hyper()
{
	double x;
	printf("Enter the number:");
	scanf("%lf",&x);
	printf("The hyperbolic sine of %lf is %lf degrees\n", x, sinh(x));
}		
void cos_hyper()
{
	double x;
	printf("Enter the number:");
	scanf("%lf",&x);
	printf("The hyperbolic sine of %lf is %lf degrees\n", x, cosh(x));
}
void tan_hyper()
{
	double x;
	printf("Enter the number:");
	scanf("%lf",&x);
	printf("The hyperbolic sine of %lf is %lf degrees\n", x, tanh(x));
}
		
void sin_inv_hyper()
{
	double x;
	printf("Enter the number:");
	scanf("%lf",&x);
	printf("The hyperbolic sine of %lf is %lf degrees\n", x, asinh(x));
}		
void cos_inv_hyper()
{
	double x;
	printf("Enter the number:");
	scanf("%lf",&x);
	printf("The hyperbolic sine of %lf is %lf degrees\n", x, acosh(x));
}
void tan_inv_hyper()
{
	double x;
	printf("Enter the number:");
	scanf("%lf",&x);
	printf("The hyperbolic sine of %lf is %lf degrees\n", x, atanh(x));
}	
void quad()
{
	float a,b,c;
	float q1,q2;
	printf("Enter the value of the coefficient of X : ");
	scanf("%f",&a);
	printf("Enter the value of the coefficient of Y : ");
	scanf("%f",&b);
	printf("Enter the value of the constant : ");
	scanf("%f",&c);
	q1=(-b+sqrt(b*b-4*a*c))/2*a;
	q2=(-b-sqrt(b*b-4*a*c))/2*a;
	if((b*b-4*a*c)==0)
	{
		printf("The roots are %f and %f which are equal\n",q1,q2);
	}
	else if((b*b-4*a*c)<0)
	{
		float p1=(-b/2*a);
		float r1=(sqrt((-1)*(b*b-4*a*c)))/2*a;
		float r2=((-1)*sqrt((-1)*(b*b-4*a*c)))/2*a;
		
		printf("Roots are %f + i %f and %f + i %f which are imagenary\n",p1,r1,p1,r2);
	}
	else 
	{
		printf("The roots are %f and %f which are real and distinct\n",q1,q2);
	}
}
	