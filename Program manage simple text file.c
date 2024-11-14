#include <stdio.h>
#include <stdlib.h>

void appendSentenceToFile() {
    char sentence[101];  // Array to hold the sentence (100 chars + null terminator)
    FILE *file;

    // Prompt the user to enter a sentence
    printf("Enter a sentence (up to 100 characters): ");
    if (fgets(sentence, sizeof(sentence), stdin) == NULL) {
        fprintf(stderr, "Error reading input.\n");
        return;
    }

    // Open the file in append mode
    file = fopen("data.txt", "a");
    if (file == NULL) {
        perror("Error opening file for appending");
        return;
    }

    // Append the sentence to the file
    if (fputs(sentence, file) == EOF) {
        fprintf(stderr, "Error writing to file.\n");
        fclose(file);
        return;
    }

    // Close the file and check for errors
    if (fclose(file) != 0) {
        perror("Error closing the file after appending");
        return;
    }

    printf("Sentence successfully appended to data.txt\n");
}

void readSentenceFromFile() {
    char sentence[101];
    FILE *file;

    // Open the file in read mode
    file = fopen("data.txt", "r");
    if (file == NULL) {
        perror("Error opening file for reading");
        return;
    }

    // Display the content of the file line by line
    printf("Content of data.txt:\n");
    while (fgets(sentence, sizeof(sentence), file) != NULL) {
        printf("%s", sentence);
    }

    // Check for read errors
    if (ferror(file)) {
        fprintf(stderr, "Error reading from file.\n");
    }

    // Close the file and check for errors
    if (fclose(file) != 0) {
        perror("Error closing the file after reading");
    }
}

int main() {
    appendSentenceToFile();
    readSentenceFromFile();
    return 0;
}
