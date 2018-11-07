//基于范围的for循环
//弥补了for_each无法修改容器内容
#include<bits/stdc++.h>
using namespace std;

void Show(int n);//cout n
void Change(int & n);//change all number to 0
int main()
{
    int test_data_1[10] = {1,2,3,4,5,6,7,8,9,10};
    for (int n : test_data_1)
        Show(n);
    cout<<endl;
    for (int & n : test_data_1)
        Change(n);
    for (int n : test_data_1)
        Show(n);
    return 0;
}

void Show(int n)
{
    cout<<n<<' ';
}

void Change(int & n)
{
    n = 0;
}
