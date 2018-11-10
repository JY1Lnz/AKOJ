//递归实现全排列
#include<bits/stdc++.h>
using namespace std;

void FullPermutation(int data[],int left,int right)
{
    if (left == right)
    {
        for (int j = 0;j<=right;j++)
            cout<<data[j];
        cout<<endl;
    }
    else
    {
        for (int i = left;i<=right;i++)
        {
            swap(data[i],data[left]);
            FullPermutation(data,left+1,right);
            swap(data[i],data[left]);
        }
    }
}

int main()
{
    int data[4] = {1,2,3,4};
    FullPermutation(data,0,3);

    return 0;
}
