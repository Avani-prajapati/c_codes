#include <stdio.h>
#include<conio.h>
void star(int n)
{
    int i,j,k;
    for(i=1;i<=n;i++)
    { 
        for(k=1;k<=n-i;k++)
        printf(" ");
        for(j=1;j<=i;j++)
        printf("* ");
        for(k=1;k<=2*n-2*i;k++)
        printf(" ");
        for(j=1;j<=i;j++)
        printf("* ");
       
    printf("\n");
    }
 
}
void triangle(int a)
{ int i,j,k;
  for(i=0;i<a-1;i++)
  { 
    if(a%2==0){
    for(k=0;k<=i;k++)
    printf(" ");}
    else{
      for(k=1;k<=i;k++)
    printf(" ");}
    for(j=1;j<a-i;j++)
    printf("* ");
   


        printf("\n");
  }

}


int main()
{
    int n;
    printf("enter a value of n at greater then 3 and less then 48:");
    scanf("%d",&n);
     printf("\n");
    if(n<4||n>47)
   { printf("input is not in the given range \n");

    goto lable;}
   
    star(n/2);
    triangle(n);
    
    lable:
    printf("\n");
    getch();
    return 0;
}
