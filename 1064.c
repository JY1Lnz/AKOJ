#include<stdio.h>

int main()
{
    float n;
    while(scanf("%f",&n) != EOF)
    {
        float tiji;
        float a = 4.0/3;
        tiji = a*3.141*n*n*n;
        printf("%.3f\n",tiji);
    }

    return 0;
}
