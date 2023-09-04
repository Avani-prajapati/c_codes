#include<stdio.h>


int main()
{ int a[3][3],b[3][3],i,j,c[3][3]={0,0,0};
  printf("enter first matrix element: \n");
    for(i=0;i<3;i++)
    { for(j=0;j<3;j++)
    {  printf("enter element[%d][%d]: ",i+1,j+1);
       scanf("%d",&a[i][j]);
    }
    }
    printf("enter second matrix element: \n");
    for(i=0;i<3;i++)
    { for(j=0;j<3;j++)
    {  printf("enter element[%d][%d]: ",i+1,j+1);
       scanf("%d",&b[i][j]);
    }
    }
  for(i=0;i<3;i++)
  {  for(j=0;j<3;j++)
  {   c[i][j]=a[i][j]+b[i][j];
  }
  
  }
    printf("matrix a is :\n");
    for(i=0;i<3;i++)
    {  for(j=0;j<3;j++)
        printf("%d ",a[i][j]);
        printf("\n");
    }  
    printf("matrix b is :\n");
    for(i=0;i<3;i++)
    {  for(j=0;j<3;j++)
        printf("%d ",b[i][j]);
        printf("\n");
    }  
  printf("addition a+b matrix is :\n");
    for(i=0;i<3;i++)
    {  for(j=0;j<3;j++)
        printf("%d ",c[i][j]);
        printf("\n");
    }  

    return 0;
}

