#include<stdio.h>
#include<conio.h>

int Fibo(int n)
{
  if(n==0)
  {
    return 0;
  }
  else if(n==1)
  {
    return 1;
  }
  else
  {
    return (Fibo(n-1)+Fibo(n-2));
  }
}
void main()
{
int i,n;
clrscr();
printf("Enter the no. of terms :");
scanf("%d",&n);
printf("Fibonacci Series \n");
for(i=1;i<n;i++)
{
  printf("%d \n",Fibo(i));
}
getch();
}

