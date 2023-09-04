#include<stdio.h>
#include<conio.h>
int binary(int n)
{  int i,s=0,k=1;
    for(i=1;n>0;i++,n=n/2)
   { int r=n%2;
     s=s+r*k;
     k*=10;
    }   
 return s;
}

int octa(int n)
{  int i,s=0,k=1;
    for(i=1;n>0;i++,n=n/8)
   { int r=n%8;
     s=s+r*k;
     k*=10;
    }   
 return s;
}

void hexa(int n)
{  int i;
  char a[100];
    for(i=0;n>0;i++,n=n/16)
   { int r=n%16;
   if(r<10)
   a[i]='0'+r;
   else
   a[i]='A'+(r-10);  
   }
  i--;
  
   for(;i>=0;i--)
   printf("%c",a[i]);
}
int main()
{int n;
printf("enter a decimal number :");
scanf("%d",&n);

printf("\nbinary = %d \noctal = %d\nhexa = ",binary(n),octa(n));
hexa(n);
printf("\n\n");
getch();    
    return 0;
}
