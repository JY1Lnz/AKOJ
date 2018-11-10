#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int> data;
	data.push_back(1);
	data.push_back(2);
	data.push_back(3);
	for (auto x:data)
        cout<<x<<' ';
    reverse(data.begin(),data.end());
    cout<<endl;
    for (auto x:data)
        cout<<x<<' ';

	return 0;
}
