#include <stdio.h>
int main(void)
{
FILE *fp;
fp = fopen("Output.txt", "w");
fprintf(fp, "Hello World");
    return 0;
}