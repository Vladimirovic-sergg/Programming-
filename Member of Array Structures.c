#include <stdio.h>
#include <stdlib.h>

// Define the structure for student information
struct Student {
    char name[50];
    int marks;
};

int main() {
    struct Student students[5];
    struct Student read_students[5];
    int i;
    FILE *file;

    // Collect data for 5 students
    printf("Enter information for 5 students:\n");
    for (i = 0; i < 5; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter marks of student %d: ", i + 1);
        scanf("%d", &students[i].marks);
    }

    // Open the file in binary write mode
    file = fopen("students.bin", "wb");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Write the array of structures to the file
    fwrite(students, sizeof(struct Student), 5, file);
    fclose(file);
    printf("Data successfully written to students.bin\n");

    // Open the file in binary read mode
    file = fopen("students.bin", "rb");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Read the array of structures from the file
    fread(read_students, sizeof(struct Student), 5, file);
    fclose(file);

    // Display the data read from the file
    printf("\nInformation read from file:\n");
    for (i = 0; i < 5; i++) {
        printf("Student %d: Name: %s, Marks: %d\n", i + 1, read_students[i].name, read_students[i].marks);
    }

    return 0;
}
