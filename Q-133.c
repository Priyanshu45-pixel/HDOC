//Create an enum for months and print how many days each month has.
#include <stdio.h>
enum Month {
    JAN = 1, FEB, MAR, APR, MAY, JUN,
    JUL, AUG, SEP, OCT, NOV, DEC
};

int main() {
    enum Month m;
    for (m = JAN; m <= DEC; m++) {
        int days;
        switch(m) {
            case JAN: case MAR: case MAY: case JUL:
            case AUG: case OCT: case DEC:
                days = 31;
                break;
            case APR: case JUN: case SEP: case NOV:
                days = 30;
                break;
            case FEB:
                days = 28; 
                break;
        }
        printf("Month %d has %d days\n", m, days);
    }

    return 0;
}
