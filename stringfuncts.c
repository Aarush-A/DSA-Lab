#include <stdio.h>
#include <string.h>

int main()
{
    char a[50]="Monkey Squad";
    char b[50]=" On Top";
    int x=strlen(a);
    printf("Length of a is: %d\n", x);
    printf("%s\n", strcat(a,b));
    char c[50]="get beamed by monkey squad";
    strcpy(c,a);
    printf("%s\n", c);
    int cmp=strcmp(a,c);
    printf("%d", cmp);
}
