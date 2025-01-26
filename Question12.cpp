#include <stdio.h>

int main() {
    int numbers[] = {38, 44, 63, -51, -35, 19, 84, -69, 4, -46};
    int arrayLength = sizeof(numbers) / sizeof(numbers[0]);
    int closestSum = 99999;
    int num1 = 0, num2 = 0;

    for (int i = 0; i < arrayLength - 1; i++) {
        for (int j = i + 1; j < arrayLength; j++) {
            int currentSum = numbers[i] + numbers[j];
            if (currentSum < 0 && -currentSum < -closestSum) {
                closestSum = currentSum;
                num1 = numbers[i];
                num2 = numbers[j];
            } else if (currentSum >= 0 && currentSum < closestSum) {
                closestSum = currentSum;
                num1 = numbers[i];
                num2 = numbers[j];
            }
        }
    }

    printf("The numbers in the array are: ");
    for (int i = 0; i < arrayLength; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    printf("The pair of numbers whose sum is closest to zero are: [%d, %d]\n", num1, num2);

    return 0;
}

