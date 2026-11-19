//Demo of UDF which will calculate sum of two numbers
#include<stdio.h>
#include<conio.h>

int mul(int p,int q);
int sum(int a,int b); //(1) Function prototype OR function declaration
int minus(int p,int q);
float  div(int p,int q);
void main()
{
 int x=2,y=5,z;
 float d;
 clrscr();

 z = sum(x,y); //(2) Function calling statement with arguments
 printf("\n Answer is : %d",z);

 z = minus(x,y);
 printf("\n Answer is : %d",z);

 z = mul(x,y);
 printf("\n Answer is : %d",z);

 d = div(x,y);
 printf("\n Answer is : %.2f",d);



 getch();
}
int sum(int a,int b) //(3) Function Header / Signature with parameters
{
 int c;
 c = a + b; // (4) Function Body / Block
 return(c);
}

int minus(int p,int q)
{
 int r;
 r = p - q;
 return(r);
}

int mul(int p,int q)
{
 int r;
 r = p * q;
 return(r);
}

float div(int p,int q)
{
 float r;
 r =(float) p / q;
 return(r);
}