// 1. Write C program to draw line.

// #include <graphics.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
    // int gd = DETECT, gm;
    int x1, y1, x2, y2;

    printf("Enter the coordinates of the starting point (x1, y1): ");
    scanf("%d %d", &x1, &y1);

    printf("Enter the coordinates of the ending point (x2, y2): ");
    scanf("%d %d", &x2, &y2);

    // initgraph(&gd, &gm, "");

    // Drawing line using Bresenham's line algorithm
    int dx = abs(x2 - x1);
    int dy = abs(y2 - y1);
    int sx = x1 < x2 ? 1 : -1;
    int sy = y1 < y2 ? 1 : -1;
    int err = (dx > dy ? dx : -dy) / 2;
    int e2;

    while (1)
    {
        // putpixel(x1, y1, WHITE);
        if (x1 == x2 && y1 == y2)
            break;
        e2 = err;
        if (e2 > -dx)
        {
            err -= dy;
            x1 += sx;
        }
        if (e2 < dy)
        {
            err += dx;
            y1 += sy;
        }
    }

    delay(5000);
    closegraph();
    return 0;
}
