#include <stdio.h>

int main() {
    char buffer[50]="Aryan";
    int num = 42;
    double pi = 3.14159;

    sprintf(buffer, "Number: %d, Pi: %f", num, pi);

    printf("Formatted string: %s\n", buffer);

    return 0;
}
