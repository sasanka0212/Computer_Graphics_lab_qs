#include <stdio.h>
#include <conio.h>
#include <graphics.h>

int main()
{
    int xc, yc, r, p, x, y;
    int gd, gm;
    detectgraph(&gd, &gm);
    initgraph(&gd, &gm, "C:\\TurboC3\\BGI");
    printf("\nEnter the co-ordinates of center : ");
    scanf("%d %d", &xc, &yc);
    printf("\nEnter the radius: ");
    scanf("%d", &r);

    x = 0;
    y = r;
    p = 3 - (2 * r);

    for (x = 0; x <= y; x++)
    {
        if (p < 0)
        {
            p = p + (4 * x) + 6;
        }
        else
        {
            y = y - 1;
            p = p + 4 * (x - y) + 10;
        }

        putpixel(xc + x, yc - y, WHITE);
        putpixel(xc - x, yc - y, WHITE);
        putpixel(xc + x, yc + y, WHITE);
        putpixel(xc - x, yc + y, WHITE);
        putpixel(xc + y, yc - x, WHITE);
        putpixel(xc - y, yc - x, WHITE);
        putpixel(xc + y, yc + x, WHITE);
        putpixel(xc - y, yc + x, WHITE);
    }

    getch();
    closegraph();
}
