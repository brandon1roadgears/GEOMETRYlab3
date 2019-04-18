#include "geometry.h"
void printfunction(
        int x1,
        int y1,
        int x2,
        int y2,
        float r1,
        float r2,
        float perim1,
        float perim2,
        float S1,
        float S2,
        int flag)
{
    cout << "1" << endl;
    printf("circle(%d %d , %.1f)\n", x1, y1, r1);
    printf("perimetr = %.3f\n", perim1);
    printf("area = %.3f\n", S1);
    if (flag == 1) {
        printf("intersects: \n circle \n ");
    }
    cout << "2" << endl;
    printf("circle(%d %d , %.1f)\n", x2, y2, r2);
    printf("perimetr = %.3f\n", perim2);
    printf("area = %.3f\n", S2);
    if (flag == 1) {
        printf("intersects: \n circle \n ");
    }
    system("PAUSE");
    return;
}

