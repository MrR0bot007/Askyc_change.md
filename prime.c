#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b;
  printf("Enter The Number:: ");
  scanf("%d",&a);
  for(int i=2;i<=a-1;i++)
  {
    if(a%i==0)
      flag=1
    else
      flag=0
  }
  
  if(flag=0)
    printf("Number Is Not Prime");
  else
    printf("Number Is Prime");
}
