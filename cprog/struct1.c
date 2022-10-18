#include<stdio.h>
struct point
{
    int x,y;

};
int main()
{
   struct point arr[10];
   struct point aa;

   arr[0].x=10;
   arr[0].y=10;
   aa.x=20;
   aa.y=30;
   printf("%d %d %d %d", arr[0].x,arr[0].y,aa.x ,aa.y);
   return 0;

}