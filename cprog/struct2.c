#include<stdio.h>
struct point
{
    int x,y,z;
};
int main()
{
    struct point p1={.x=1,.y=5,.z=3};
    struct point p2={.x=5};
    printf("%d %d %d %d", p1.x,p1.y,p1.z,p2.x);
    return 0;
}