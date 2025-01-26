#include <stdio.h>

int main() {
    int arr[3], arr2[3], sum = 0;

    for(int i = 0; i < 3; i++) {
        printf("Enter element %d :\n", i + 1);
        scanf("%d", &arr[i]);
        arr2[i] = arr[i];
    }

    printf("The elements stored in first array are: ");
    for(int k = 0; k < 3; k++) {
        printf("%d , ", arr[k]);
    }

    printf("\n\nThe elements copied into second array are: ");
    for(int j = 0; j < 3; j++) {
        printf("%d , ", arr2[j]);
    }

    printf("\n\nSum: ");
    for(int a = 0; a < 3; a++) {
        if(arr2[a] % 2 == 0) {
            printf("%d + ", arr2[a]);
            sum = sum + arr2[a];
        }
    }

    printf("= %d\n", sum);

    return 0;
}
