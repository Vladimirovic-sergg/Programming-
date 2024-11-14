//volume of a cylinder
#include <stdlib.h>
int main(){
    //scanf(),printf()
    int height,radius,volume;

    printf("enter height:");
    scanf("%d",&height);

    printf("enter radius:");
    scanf("%d",&radius);

    volume=3.142*(radius*radius)*height;

    printf("the volume of a cylinder is %d",(3.142*(radius*radius)*height))
    return 0;
