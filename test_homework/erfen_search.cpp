#include<bits/stdc++.h>
using namespace std;
int erfen_weizhi(int data[],int f,int r,int m)
{
    int key = (r+f)/2;
    if (f>r)
        return -1;
    if (data[key] == m)
        return key;
    if (data[key] > m)
        return erfen_weizhi(data,f,key-1,m);
    if (data[key] < m)
        return erfen_weizhi(data,key+1,r,m);

}

int bsearch(int array[], int low, int high, int target)
{
    if (low > high) return -1;

    int mid = (low + high)/2;
    if (array[mid]> target)
        return    bsearch(array, low, mid -1, target);
    if (array[mid]< target)
        return    bsearch(array, mid+1, high, target);

    //if (midValue == target)
        return mid;
}

int main()
{
    int data[15] = {1, 3, 5, 7, 9, 10, 13, 15, 16, 17, 20, 21, 22, 23, 24};
    int number;
    cin>>number;
    int weizhi = bsearch(data,0,14,number);
    int weizhi_2 = erfen_weizhi(data,0,14,number);
    if (weizhi == -1)
        cout<<"NO"<<endl;
    else
        cout<<weizhi<<endl;

    cout<<weizhi_2<<endl;

    return 0;
}
