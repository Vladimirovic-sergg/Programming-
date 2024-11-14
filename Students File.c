// C program students marks file
#include <stdio.h>//scanf(),printf(),fprintf(),fscanf()
#include<stdlib.h>//exit()

int main() {
    FILE *file;//declare pointer
    char name[50];
    int marks;
    int w;
    //open the file
    file=fopen("C;\\users\\chris\\Desktop\\c programs\\students.txt","w");
    if(file==NULL){
        printf("Error opening the file");
        exit(1);
    }
    //read name and marks of 5 students
    for(w=0;w<5;w++){
        printf("Enter the name of the students %d\n: ",w+1);
        scanf("%c",name);
        printf("Enter the marks of the students %d\n",w+1);
        scanf("%d",marks);
        //write name and marks to the file
        fprintf(file,"Name: %c,Marks: %d\n",name,marks);
    }
//close the file
fclose(file);
printf("Data successfully written to students.txt \n");
    return 0;
}
