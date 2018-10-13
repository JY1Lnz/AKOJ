#include<stdio.h>

int main()
{
    char c;
    long int data[26]={0};
    while((c = getchar()) != '#')
    {
        if ((c<='z')&&(c>='a'))
            data[c-97]++;
    }
    for (int i = 0;i<26;i++)
        printf("%c %ld\n",i+97,data[i]);

    return 0;
}
