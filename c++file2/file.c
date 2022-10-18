#include<stdio.h>
int main()
{
    FILE *fp;
    
    fp = fopen("C:\\Users\\kumargou\\Documents\\cprog\\file.txt","w+");
    fprintf(fp, "this is testing for fprintf ggggg...\n",fp);
    fputs("This is testing for fputsgggg....\n", fp);
    fclose(fp);
    return 0;
}