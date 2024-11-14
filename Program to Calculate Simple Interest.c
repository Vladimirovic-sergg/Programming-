// program to calculate simple interest
#include <stdio.h>
int main () {
    int principal ,time,rate,simple_interest;
    printf("Enter the principal",principal);
    scanf("%d",&principal);
    
    printf("Enter the time",time);
    scanf("%d",&time);
    
    printf("Enter the rate",rate);
    scanf("%d",&rate);
    
    simple_interest = (principal*time*rate)/100;
    printf("The simple_interest is:%d",simple_interest);
    return 0;
}
