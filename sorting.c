#include<stdio.h>
#include<conio.h>
int main()
{
    int n;

    printf("enyter how many element u want to enter :");
    scanf("%d",&n);
    int b[n];
      printf("befor sorting : ");
     for(int i=0;i<n;i++)
     scanf("%d",&b[i]);
     
     for(int i=0;i<n-1;i++)
     {   for(int j=0;j<n-i-1;j++)
     {       
          if(b[j]>b[j+1])
          {  int t;
            t=b[j];
            b[j]=b[j+1];
            b[j+1]=t;
          }
     }
     }
      printf("after sorting (by selection sort) : ");
     for(int i=0;i<n;i++)
     printf("%d ",b[i]);

     for(int i=0;i<n-1;i++)
     {   for(int j=i+1;j<n;j++)
     {       
          if(b[i]>b[j])
          {  int t;
            t=b[i];
            b[i]=b[j];
            b[j]=t;
          }
     }
     }
     printf("\nafter sorting (by buble sort)     : ");
     for(int i=0;i<n;i++)
     printf("%d ",b[i]);

     for(int i=1;i<n;i++)
     {  int temp=b[i];
     int j=i-1;
         while(j>=0&&b[j]>b[i])
         {   b[j+1]=b[j];
         j--;
         }
         b[j+1]=temp;
     }

     printf("\nafter soeting (by insert sort)    : ");
     for(int i=0;i<n;i++)
     printf("%d ",b[i]);
   getch();
   return 0;
}
