//program to find volume and surface area of a cylinder
#include <stdio.h>
int main () {
    float radius,height,volume,surface_area;
    float pi = 22/7;
    //prompt the user to enter the radius and height
    printf("Enter the radius of the cylinder: ");
    scanf("%f",&radius);
    
    printf("Enter the height of the cylinder: ");
    scanf("%f",&height);
    
    //calculate the volume of the cylinder
    volume = 22/7*radius*radius*height;
    printf("The volume of cylinder is: %.2f \n",volume);
    //calculate surface area of the cylinder
    surface_area = (2*pi*radius*radius)+(2*pi*radius*height);
    printf("The surface area of cylinder is: %f \n,surface area");
    
    return 0;
}
