#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    char c = 'A';
    c = (c-'A'+21)%26+'A';
    cout<<c<<endl;

   return 0;
}

