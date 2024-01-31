// 3. Write C program to draw rectangle.

// #include <graphics.h>

int main()
{
    // int gd = DETECT, gm;
    // initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    // Coordinates for the rectangle
    int left = 100;
    int top = 100;
    int right = 300;
    int bottom = 200;

    rectangle(left, top, right, bottom);

    getch();
    closegraph();
    return 0;
}
