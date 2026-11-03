#include <stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("newtext.txt","w");
    fclose(fp);

    return 0;
}