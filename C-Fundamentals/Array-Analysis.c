#include <stdio.h>

int main() {

    int numbers[] = {45, 12, 89, 7, 34, 66, 21};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    
    int min = numbers[0];
    int max = numbers[0];
    float sum = 0;

    for (int i = 0; i < size; i++) {
        if (numbers[i] < min) {
            min = numbers[i];
        }
        if (numbers[i] > max) {
            max = numbers[i];
        }
        sum += numbers[i];
    }
  
    float average = sum / size;
    printf("--- Array Statistics ---\n");
    printf("Min Value: %d\n", min);
    printf("Max Value: %d\n", max);
    printf("Average:   %.2f\n", average);

    return 0;
}
