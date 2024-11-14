// program to add 2 numbers
#include <stdio.h>
int main () {
    int a;
    int b;
    int sum;
    
    printf("Enter the first number");
    scanf("%d",&a);
    
    printf("Enter the second number");
    scanf("%d",&b);
    sum = a+b; //declaration and initialization
    printf("sum of a+b is %d",sum);
    return 0;
}
