#include <stdio.h>
int main() {
    double gpa, min;
    int abs;
    if (scanf("%d %lf %lf", &abs, &gpa, &min) != 3) {
        return 0;
    }
    if (abs > 3) {
        printf("FAIL_ATTENDANCE");
        return 0;  
    }
    if (gpa >= 8.0 && min >= 7.0) {
        printf("EXCELLENT");
    } else if (min < 4.0) {
        printf("FAIL_SUBJECT");
    } else if (gpa >= 6.5 && min >= 5.0) {
        printf("GOOD");
    } else if (gpa >= 5.0 && min >= 4.0) {
        printf("PASS");
    } else { gpa < 3)
        printf("FAIL");
    }

    return 0;
}
