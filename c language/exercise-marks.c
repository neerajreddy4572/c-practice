#include<stdio.h>
int main(){
    int gift;
    printf("enter the subjects you passed\n");
    printf("press-1 only maths\n");
    printf("press-2 only science\n");
    printf("press-3 for both maths and science\n");
    
    scanf("%d", &gift);
    printf("you have entered %d\n", gift);
    if(gift=1) 
    {
        printf("congrads you won 15 rs\n");
        
    }
    else if(gift=2){
        printf("congrads you won 15 rs\n");  
    }
     else if(gift=3)
    {
        printf("congrads you won 45 rs\n");
    }
    else
    {
        printf("you entered wrong number\n");
        printf("try again");

    }
    
    
    return 0;
}