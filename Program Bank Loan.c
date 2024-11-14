// Bank loan
#include<stdio.h>

int main () {
    int age,income;
    printf("Enter your age and income: ");
    scanf("%d%d",&age,&income);
    
    if (age>=21 &&income>21000){
        printf("Congratulations you qualify for a loan");
    }
    else{
        printf("You dont qualify");
    }
    return 0;
