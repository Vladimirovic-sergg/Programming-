#include <stdio.h>

int main() {
    int i;
    int marks[6] = {40, 50, 60, 70, 80, 90};

    for (i = 0; i < 6; i++) {
        printf("%d\n", marks[i]); // Print the value, not the address
    }

    return 0;
}
