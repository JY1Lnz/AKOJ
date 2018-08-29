#include<stdio.h>

int main()
{
    int get[4];
    for (int i = 0;i<4;i++)
        scanf("%d",&get[i]);
    for (int i = 0;i<4;i++)
        for (int j = i+1;j<4;j++)
            for (int x = j+1;x<4;x++)
                {
                    int zu[3] = {get[i],get[j],get[x]};
                    for (int i = 0;i<3;i++)
                        for (int j = 0;j<3;j++)
                            for (int x = 0;x<3;x++)
                                if ((zu[i] != zu[j])&&(zu[j] != zu[x])&&(zu[i] != zu[x]))
                                    printf("%d %d %d\n",zu[i],zu[j],zu[x]);
                }

    return 0;
}
//Íê³É
