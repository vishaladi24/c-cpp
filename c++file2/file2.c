#include<stdio.h>
int main()
{
    FILE *fp;
    char buff[200];
    fp = fopen("file.txt", "r");
    while(fscanf(fp, "%s", buff)!=EOF){
        printf("%s", buff);
    }
    fclose(fp);
    return 0;
    }
