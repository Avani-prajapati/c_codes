#include<stdio.h>
int stack[100],choise=0,n,top=-1;
int main()
{ while(choise<=4)
{  printf("1.push\n2.pop\n3.display\n4.exit");
    switch(choise)
    {  case 1:printf("enter element:");
              scanf("%d",&n);
              push();
    }
}
    
    return 0;
}
