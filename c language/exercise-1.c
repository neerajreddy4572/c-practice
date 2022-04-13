#include <stdio.h>
int main(){
    int num,i;
    printf("enter the no of the multiplication table you want\n", num);
    scanf("%d",&num);
    for (int i = 1; i <= 10; i++)
    {
        printf("%dx%d=%d\n",num,i,num*i);
    }
    
    return 0;
}