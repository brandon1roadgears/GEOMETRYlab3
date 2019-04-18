#include "geometry.h"
int main()
{
    const float p = 3.141592653589;
    int x1, y1, x2, y2;
    float r1, r2, d, flag = 0, S1, S2, perim1, perim2;
    printf("input x1, y1, r1:\n");
    scanf("%d%d%f", &x1, &y1, &r1);
    printf("\n");
    perim1 = 2 * p * r1;
    S1 = p * r1 * r1;
    printf("input x2, y2, r2:\n");
    scanf("%d%d%f", &x2, &y2, &r2);
    perim2 = 2 * p * r2;
    S2 = p * r2 * r2;
    printf("\n");
    d = r1 + r2;
    if ((r1 < r2 || r2 < r1) && x1 == x2 && y1 == y2) {
        flag = 0;
    } else if (r1 == r2 && x1 == x2 && y1 == y2) {
        flag = 1;
    }
    if (d + r1 < r2) {
        flag = 0;
    } else if (((d + r1) == r2) || d + r1 > r2) {
        flag = 1;
    }
    if (d > r1 + r2) {
        flag = 1;
    } else if ((d == r1 + r2) || d < (r1 + r2)) {
        flag = 1;
    }
    printfunction(x1, y1, x2, y2, r1, r2, perim1, perim2, S1, S2, flag);
    return 0;
}

