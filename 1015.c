#include <stdio.h>

int main()
{
    char c;
    while ((c = getchar()) != EOF)
    {
        if ((c >= 'A') && (c <= 'Z'))
            c += 32;
        printf("%c",c);
    }

    return 0;
}
