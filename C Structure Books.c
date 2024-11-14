//C Structures
#include<stdio.h>//scanf(),printf()
#include<string>//strcpy

struct Book{
    char title[30];
    char author[30];
    int publication-year;
    char ISBN[13];
    float price;
}
int main(){
    //initializing variables(operator)
    strcpy(book 1.title"Introduction to C programming");
    strcpy(book 1.author"John Smith");
    strcpy(book 1.ISBN"108-433-124-1);
    book 1.publication-year=2022;
    book 1.price=49.99;
    
    
    printf("Title: %s\n",book 1.Introduction to C programming);
    printf("Author %s\n",book 1.John Smith);
    printf("ISBN %s \n",book 1.108-433-124-1);
    printf("Publication-Year %s\n",book 1.2022);
    printf("Price %s\n",book 1.49.99);
    
    //printf("Enter name");
    //scanf("%s",&Introduction to C programming);
    
    //printf("Enter")
    
    return 0;
