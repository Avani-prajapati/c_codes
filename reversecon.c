#include<stdio.h>
#include<conio.h>
int b2d(int n)
{
   int i,y=1,s=0;
   while(n>0)
   { int r=n%10;
       s=s+r*y;
       y=y*2;
       n=n/10;
   }
   return s;
}
int d2b(int n)
{  int i,s=0,k=1;
    for(i=1;n>0;i++,n=n/2)
   { int r=n%2;
     s=s+r*k;
     k*=10;
    }   
 return s;
}
int o2d(int n)
{
   int i,y=1,s=0;
   while(n>0)
   { int r=n%10;
       s=s+r*y;
       y=y*8;
       n=n/10;
   }
   return s;
}
int d2o(int n)
{  int i,s=0,k=1;
    for(i=1;n>0;i++,n=n/8)
   { int r=n%8;
     s=s+r*k;
     k*=10;
    }   
 return s;
}
void d2h(int n)
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
  printf("hexa = ");
   for(;i>=0;i--)
   printf("%c",a[i]);
}
int main()
{int n,choise,o,b,h;
char c;
printf("1.for binary to decimal\n2.for binary to octal\n3.for binary to hexa\n4.octal to decimal\n5.octal to binary\n6.octa to hexa\n");
printf("7.decimal to binary\n8.decimal to octal\n9.decimal to hexa\n");
top :
printf("choose any number from above : ");
scanf("%d",&choise);

switch(choise)
{ case 1:printf("enter binary number:");
         scanf("%d",&n);
         printf("decimal= %d",b2d(n));
         break;
  case 2: printf("enter binary number:");
         scanf("%d",&n);
         o=b2d(n);
         printf("octal = %d",d2o(o));       
         break;
   case 3: printf("enter binary number:");
         scanf("%d",&n);
         h=b2d(n);
         d2h(h);      
         break; 
   case 4: printf("enter octal number:");
         scanf("%d",&n);
         printf("decimal = %d",o2d(n));       
         break;  
   case 5: printf("enter octal number:");
         scanf("%d",&n);
         b=o2d(n);
         printf("binary = %d",d2b(b));       
         break;
   case 6: printf("enter octal number:");
         scanf("%d",&n);
         h=o2d(n);
         d2h(h);      
         break;                   
  case 7: printf("enter decimal number:");
         scanf("%d",&n);
         printf("binary = %d",d2b(n));       
         break;       
  
   case 8: printf("enter decimal number:");
         scanf("%d",&n);
         printf("octal = %d",d2o(n));       
         break; 
    case 9: printf("enter decimal number:");
         scanf("%d",&n);
         d2h(n);      
         break;          
    default:
       printf("enter valid input;");                           
   }  
   printf("\nyou want to try another(y/n) :");
   scanf("%*c%c",&c);
   if(c=='y')
   {goto top;}
   else
   {printf("thanks !");}
   getch();
     return 0;
}
