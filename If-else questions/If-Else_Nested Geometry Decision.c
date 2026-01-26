#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n == 0) {
        printf("Circle");
    }

    else if (n == 3) {
        int a, b, c, A, B, C;
        scanf("%d %d %d %d %d %d", &a, &b, &c, &A, &B, &C);

        if (a > 0 && b > 0 && c > 0 && A > 0 && B > 0 && C > 0 &&
            A + B + C == 180 && a+b>=c && a+c>=b && b+c>=a) {

            if (a == b && b == c && A == 60 && B == 60 && C == 60) {
                printf("Equilateral Triangle");
            }
            else if ((a == b && A == B && a!=c && A!=C) ||
                     (b == c && B == C && a!=b && A!=B ) ||
                     (a == c && A == C && b!=c && B!=C)) {
                printf("Isosceles Triangle");
            }
            else if (a != b && b != c && a != c &&
                     A != B && B != C && A != C) {
                printf("Scalene Triangle");
            }
            else {
                printf("Invalid Figure");
                return 0;
            }
        }
        else {
            printf("Invalid Figure");
            return 0;
        }
    }

    else if (n == 4) {
        int a, b, c, d, A, B, C, D;
        scanf("%d %d %d %d %d %d %d %d",
              &a, &b, &c, &d, &A, &B, &C, &D);
          
        if (a > 0 && b > 0 && c > 0 && d > 0 &&
            A > 0 && B > 0 && C > 0 && D > 0 &&
            A + B + C + D == 360) {

            if (a == b && b == c && c == d &&
                A == 90 && B == 90 && C == 90 && D == 90) {
                printf("Square");
            }
            else if (a == c && b == d &&
                     A == 90 && B == 90 && C == 90 && D == 90) {
                printf("Rectangle");
            }
            else if (a == b && b == c && c == d &&
                     A == C && B == D && A != 90) {
                printf("Rhombus");
            }
            else if (a == c && b == d &&
                     A == C && B == D) {
                printf("Parallelogram");
            }
            else {
                printf("Invalid Figure");
                return 0;
            }
        }
        else {
            printf("Invalid Figure");
            return 0;
        }
    }

    else {
        printf("Invalid Figure");
        return 0;
    }

    return 0;
}