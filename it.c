#include<stdio.h>
#include<string.h>
#include<conio.h>
struct student
{
    char name[50];
    int roll;
    float marks;
};


int main()
{ struct student it[5];
int i;
  for ( i = 0; i < 5; i++)
  {
    printf("enter name :");
    scanf("%[^\n]",it[i].name);
     printf("enter roll number :");
    scanf("%d",&it[i].roll);
     printf("enter marks:");
    scanf("%f",&it[i].marks);
    fflush(stdin);
  }
  for( i = 0; i <= 5; i++)
  
  {
    for ( int j= 0; j < 5-i-1; j++)
    {
        if(it[j+1].roll<it[j].roll)
        {  int t;
        char m[50];
        float n;
            t=it[j+1].roll;
            it[j+1].roll=it[j].roll;
            it[j].roll=t;

              strcpy(m,it[j+1].name);
                strcpy(it[j+1].name,it[j].name);
               strcpy(it[j].name,m);
          
            n=it[j+1].marks;
            it[j+1].marks=it[j].marks;
            it[j].marks=n;
           }
    }
    
  }
  
  printf("\tRollno\t\tname\t\t\tCpi\n");
  for ( i = 0; i < 5; i++)
  {
    printf("\t%d\t%s\t\t%f\n",it[i].roll,it[i].name,it[i].marks);
  
  
  }  
   getch();
    return 0;
}
