#include<stdio.h>
int sum(int *a,int *b)
{ int c;
c=*a+*b;
return c;
}

int main()
{  int a,b,c;
  printf("enter the value of a & b:");
  scanf("%d %d",&a,&b);
 c = sum(&a,&b);
   printf("sum is = %d",c); 
    return 0;
}
