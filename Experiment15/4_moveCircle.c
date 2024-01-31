// 4. Write C program to move circle one location to another on pressing enter key.

// #include <graphics.h>
#include <conio.h>

void drawCircle(int x, int y, int radius)
{
    circle(x, y, radius);
}

int main()
{
    // int gd = DETECT, gm;
    // initgraph(&gd, &gm, "");

    int x = 320, y = 240; // Initial position of the circle
    int radius = 50;

    while (1)
    {
        // Draw the circle at current position
        drawCircle(x, y, radius);

        // Wait for Enter key to be pressed
        if (kbhit())
        {
            if (getch() == 13)
            { // ASCII value of Enter key
                // Clear previous circle
                // setcolor(BLACK);
                drawCircle(x, y, radius);

                // Move to a new position
                x = rand() % getmaxx();
                y = rand() % getmaxy();

                // Draw the circle at the new position
                // setcolor(WHITE);
                drawCircle(x, y, radius);
            }
        }
    }

    getch();
    closegraph();
    return 0;
}
