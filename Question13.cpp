#include <stdio.h>

int main() {
    char str[1000];
    int vowels = 0, consonants = 0, upperCase = 0, lowerCase = 0, specialChar = 0, digits = 0, words = 0;
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
                str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
                vowels++;
            } else {
                consonants++;
            }
            if (str[i] >= 'A' && str[i] <= 'Z') {
                upperCase++;
            } else {
                lowerCase++;
            }
        } else if (str[i] >= '0' && str[i] <= '9') {
            digits++;
        } else if ((str[i] >= 33 && str[i] <= 47) || (str[i] >= 58 && str[i] <= 64) || 
                   (str[i] >= 91 && str[i] <= 96) || (str[i] >= 123 && str[i] <= 126)) {
            specialChar++;
        }

        if (i == 0 || str[i-1] == ' ') {
            if (str[i] != ' ' && str[i] != '\n') {
                words++;
            }
        }

        i++;
    }

    printf("Total vowels: %d\n", vowels);
    printf("Total consonants: %d\n", consonants);
    printf("Total uppercase letters: %d\n", upperCase);
    printf("Total lowercase letters: %d\n", lowerCase);
    printf("Total digits: %d\n", digits);
    printf("Total special characters: %d\n", specialChar);
    printf("Total words: %d\n", words);

    return 0;
}

