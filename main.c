#include <stdio.h>

int main() {
    int d, m, y, max = 0;
    scanf("%d%d%d", &d, &m, &y);

    if (y <= 0 || m < 1 || m > 12 || d < 1) {
        printf("INVALID");
    }
    else if (m == 2) {
        if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0))
            max = 29;
        else
            max = 28;

        if (d <= max)
            printf("VALID");
        else
            printf("INVALID");
    }
    else if (m == 4 || m == 6 || m == 9 || m == 11) {
        if (d <= 30)
            printf("VALID");
        else
            printf("INVALID");
    }
    else {
        if (d <= 31)
            printf("VALID");
        else
            printf("INVALID");
    }

    return 0;
}