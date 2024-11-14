// C variables and data types
// the format specifiers are included
#include <stdio.h>

int main () {
    //declaration and initialization
    char C;
    char name[] = {};
    int age;
    float area;
    double salary;
    
    printf("Enter the character: ");
    scanf("%s",&C);
    printf("The character is %c \n",name);
    
    printf("Enter the name: ");
    scanf("%c",&name);
    printf("The string is %s \n",name);
    
    printf("Enter the age: ");
    scanf("%d",&age);
    printf("The integer is %d \n",age);
    
    printf("Enter the area: ");
    scanf("%f",&area);
    printf("The float is %.3f \n",area);
    
    printf("Enter the salary");
    scanf("%lf",&salary);
    printf("The salary is %lf \n",salary);
    
    return 0;
}
