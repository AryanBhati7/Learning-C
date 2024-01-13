#include <stdio.h>
#include <ctype.h>

#define MAX_SIZE 100

void highestFrequencyChar(char inputString[]) {
    int charFrequency[26] = {0};  // Assuming only English alphabets, initialize frequency array to zero

    // Count the frequency of each character in the string
    for (int i = 0; inputString[i] != '\0'; i++) {
        char ch = tolower(inputString[i]);  // Convert to lowercase to treat 'A' and 'a' as the same character
        if (isalpha(ch)) {
            charFrequency[ch - 'a']++;
        }
    }

    // Find the character with the highest frequency
    int maxIndex = 0;
    for (int i = 1; i < 26; i++) {
        if (charFrequency[i] > charFrequency[maxIndex]) {
            maxIndex = i;
        }
    }

    char maxChar = maxIndex + 'a';

    printf("The character with the highest frequency is: %c\n", maxChar);
    printf("It occurs %d times.\n", charFrequency[maxIndex]);
}

int main() {
    char inputString[MAX_SIZE];

    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    highestFrequencyChar(inputString);

    return 0;
}
