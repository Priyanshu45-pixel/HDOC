//A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.
#include <stdio.h>

int main() {
    FILE *f = fopen("numbers.txt", "r");
    int n, sum = 0, count = 0;
    while (fscanf(f, "%d", &n) == 1) {
        sum += n;
        count++;
    }
    printf("Sum = %d\nAverage = %.2f\n", sum, (float)sum / count);
    fclose(f);
    return 0;
}
