// program to implement grading systems for students
#include<stdio.h>
int main() {
    // declare variables for grades
    int Mathematic ,English ,Kiswahili ,average ;
    
    //prompt user for grades
    printf("Enter Mathematic grade,English grade,Kiswahili grade: ");
    scanf("%d%d%d",&mathematic grade&English grade&Kiswahili grade);
    
    //calculate average marks
    average = (mathematics+english+kiswahili) / 3;
    
    //determine grade score on average marks
    if (average >=70) {
        printf("Score: A\n");
    }
    else if (average>=60) {
        printf("Score: B\n");
    }
    else if (average>=50) {
        printf("Score: C\n");
    }
    else {
        printf("Score: E\n");
    }
    return 0;
}
