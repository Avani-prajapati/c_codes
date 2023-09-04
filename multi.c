#include<stdio.h>
void enter(int a[][3],int n,int m);
void mul(int a[][3],int n,int m,int b[][3],int c[][3]);
int print(int a[][3],int n);
int main()
{ int a[3][3],b[3][3],c[3][3]={0,0,0};
   printf("enter first array element:\n");
   enter(a,3,3);
   printf("enter second array element:\n");
   enter(b,3,3);
   mul(a,3,3,b,c);
   print(a,3);
   print(b,3);
   print(c,3);
    
    return 0;
}

void enter(int a[][3],int n,int m)
{ int i,j;
  for(i=0;i<n;i++)
  {for(j=0;j<m;j++)
  { printf("enter emelemnt [%d][%d]:",i+1,j+1);
  scanf("%d",&a[i][j]);
  }
  }
}
void mul(int a[][3],int n,int m,int b[][3],int c[][3])
{  int i,j,k;
    for(i=0;i<n;i++)
    { for(j=0;j<m;j++)
       for(k=0;k<m;k++)
       { c[i][j]+=a[i][k]*b[k][j];
       }
    }
}
int print(int a[][3],int n)
{ for(int i=0;i<n;i++)
  {for(int j=0;j<n;j++)
    printf("%d ",a[i][j]);
    printf("\n");
  }
}
