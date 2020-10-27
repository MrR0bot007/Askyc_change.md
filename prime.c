#include<stdio.h>
#include<conio.h>
void main()
{
  int A,B;
  printf("Enter The Number:: ");
  scanf("%d",&A);
  for(int i=2;i<=A-1;i++)
  {
    if(A%i==0)
      flag=1;
    else
      flag=0;
  }
  
  if(flag=0)
    printf("Number Is Not Prime");
  else
    printf("Number Is Prime");
}
