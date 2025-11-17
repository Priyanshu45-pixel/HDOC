//Show that enums store integers by printing assigned values.
#include <stdio.h>
enum Numbers {
    ONE = 1,
    TWO = 2,
    THREE = 3
};
int main() {
    printf("Value of ONE = %d\n", ONE);
    printf("Value of TWO = %d\n", TWO);
    printf("Value of THREE = %d\n", THREE);
    return 0;
}
