#include<bits/stdc++.h>
using namespace std;

int main()
{
    char c[1000];
    while(scanf("%s",&c) != EOF)
    {
        int length = strlen(c);
        char data[length][length];
        int leng = length;
        int wei = 0;
        int weizhi = 0;
        for (int i = 0;i < length;i++)
        {
            weizhi = wei++;
            for (int j = 0;j < leng;j++)
                {
                    data[i][j] = c[weizhi];
                    weizhi++;
                }
            leng--;

        }
        //×Ö·û´®¸³Öµ½áÊø
        leng = length;


    }


    return 0;
}
