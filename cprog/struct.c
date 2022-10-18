#include<stdio.h>
struct point
{
    int x,y;

};

int main()
{
    struct point p1 ={1, 2};

    struct point *p2 =&p1;
    printf("%d %d", p2->x, p2->y);
    return 0;
      
}