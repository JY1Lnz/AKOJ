//
#include<bits/stdc++.h>
using namespace std;

int main()
{
    const int N = 6;
    string s1[N] = {"buffoon","for","heavy","can","for","thinkers"};
    set<string> A(s1,s1+N);
    ostream_iterator<string,char> out(cout," ");
    copy(A.begin(),A.end(),out);
    cout<<endl;

    return 0;
}
