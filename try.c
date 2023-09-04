#include<stdio.h>
int main()
{
    char x[100],f;
    printf("enter string :");
    scanf("%[^\n]%*c",&x);
    printf("enter ch\n");
    scanf("%c",&f);
    printf("%s\n",x);
    printf("%c",f);
  
    return 0;
}
