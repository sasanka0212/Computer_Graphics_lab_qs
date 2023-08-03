#include <stdio.h>
#include <graphics.h>
#include <conio.h>
int main()
{
    int gd = DETECT, gm;
    int x, y, x1, y1, x2, y2, x3, y3, shear_f, ch;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
    printf("\n please enter first coordinate = ");
    scanf("%d %d", &x, &y);
    printf("\n please enter second coordinate = ");
    scanf("%d %d", &x1, &y1);
    printf("\n please enter third coordinate = ");
    scanf("%d %d", &x2, &y2);
    printf("\n please enter last coordinate = ");
    scanf("%d %d", &x3, &y3);
    printf("\n enter 1 to shear according to x-axis:\n enter 2 to shear according to y-axis:");
    scanf("%d", &ch);
    cleardevice();
    line(x, y, x1, y1);
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x, y);

    switch (ch)
    {
    case 1:
        printf("\n please enter shearing factor x = ");
        scanf("%d", &shear_f);
        setcolor(RED);
        x = x + y * shear_f;
        x1 = x1 + y1 * shear_f;
        x2 = x2 + y2 * shear_f;
        x3 = x3 + y3 * shear_f;
        break;
    case 2:
        printf("\n please enter shearing factor y = ");
        scanf("%d", &shear_f);
        setcolor(RED);
        y = y + x * shear_f;
        y1 = y1 + x1 * shear_f;
        y2 = y2 + x2 * shear_f;
        y3 = y3 + x3 * shear_f;
        break;
    default:
        printf("wrong choice!!");
    }

    line(x, y, x1, y1);
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x, y);
    getch();
    closegraph();
}
