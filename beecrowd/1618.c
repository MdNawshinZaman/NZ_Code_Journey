#include<stdio.h>

int main(void)
{
    int ax, ay, bx, by, cx, cy, dx, dy, rx, ry, n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        scanf("%d %d %d %d %d %d %d %d %d %d", &ax, &ay, &bx, &by, &cx, &cy, &dx, &dy, &rx, &ry);
        int minX = ax, maxX = ax, minY = ay, maxY = ay;

        minX = (minX > bx) ? ((bx > cx)? ((cx > dx) ? dx : cx) : bx) : ax;
        maxX = (maxX < bx) ? ((bx < cx)? ((cx < dx) ? dx : cx) : bx) : ax;

        minY = (minY > by) ? ((by > cy)? ((cy > dy) ? dy : cy) : by) : ay;
        maxY = (maxY < by) ? ((by < cy)? ((cy < dy) ? dy : cy) : by) : ay;

        printf("X: %d %d\nY: %d %d\n", minX, maxX, minY, maxY);

        // if ((rx >= minX && rx  <= maxX) && (ry >= minY && ry  <= maxY))
        // {
        //     printf("1\n");
        // }
        // else
        // {
        //     printf("0\n");
        // }
    }

    return 0;
}