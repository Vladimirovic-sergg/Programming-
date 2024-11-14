#include <stdio.h>

int main() {
    int n;

    // Input the number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Number\tCube\n");
    printf("--------------\n");

    // Calculate and display the cube of each number
    for (int i = 1; i <= n; i++) {
        int cube = i * i * i;  // Calculate the cube
        printf("%d\t%d\n", i, cube);
    }

    return 0;
