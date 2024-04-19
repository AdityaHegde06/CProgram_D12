#include<stdio.h>
#include<stdlib.h>

int main()
 //using for infinite loopPrime\n
{
 int choice,num,i,fact;

 while(1)
 {
 //LISTING THE MENU
 printf("1 .Factorial\n");
 printf("2.Prime\n");
 printf("3.Odd/Even\n");
 printf("4,Exit\n");
 printf("your choice?");
 scanf("%d",&choice);
 switch(choice)
  {
      case 1:
  printf("\nEnter number:");
  scanf("%d\n",&num);
  fact=1;
  for(i=1;i<=num;i++)
  fact=fact*i;
  printf("Factorial Value is %d\n",fact);
  break;

  case 2:
  printf("\nEnter number");
  scanf("%d\n,&num");
  for(i=2;i<num;i++)
  {
  if(num%i==0)
  {
  printf("Not a prime number\n");
  break;
  }
  }
  if(i==num)
  printf("prime number");
  break;

  case 3:
  printf("\nEnter number:");
  scanf("%d/n",&num);
  if(num%2==0)
  {
printf("Even number\n");
  }
else
{
printf("Odd number\n");
}
break;
case 4:
exit(0);
default:
printf("Wrong choice!\a\n");
  }

 }
return 0;
}
