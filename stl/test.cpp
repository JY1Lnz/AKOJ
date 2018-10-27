#include<bits/stdc++.h>
using namespace std;

bool cmp(int a,int b)
{
    if (a >= b)
        return 1;
    return 0;
}
int main()
{
/*
    vector<int> test_data;
    test_data.push_back(1);
    test_data.push_back(3);
    //cout<<*test_data.begin()<<endl;
    //test_data.insert(test_data.begin()+1,3);
    //cout<<test_data[0]<<endl;
    //cout<<test_data[1]<<endl;
    //cout<<*(test_data.end()-1)<<endl;

    vector<int>::iterator i = test_data.begin();

    //test_data.erase(i);
    cout<<"data length: "<<test_data.size()<<endl;
    for (vector<int>::iterator x = test_data.begin();x != test_data.end();x++)
        cout<<*x<<endl;
    test_data.erase(i+1);
    //cout<<"data length: "<<test_data.size()<<endl;
    //test_data.insert(test_data.begin(),3);
    cout<<"--"<<endl;
    cout<<"data length: "<<test_data.size()<<endl;
    cout<<"---"<<endl;
    cout<<"content:"<<endl;
    for (vector<int>::iterator x = test_data.begin();x != test_data.end();x++)
        cout<<*x<<' ';
    cout<<endl<<"---------"<<endl;
    cout<<"下标为1的值"<<endl;
    cout<<test_data.at(1)<<endl;
    cout<<"--------------------------------------------------------"<<endl<<endl<<endl;




    //test_data.insert(test_data.end(),4);
    //for (vector<int>::iterator x = test_data.begin();x != test_data.end();x++)
        //cout<<*x<<endl;
    //cout<<"---------"<<endl;
    //test_data.erase(test_data.end()-1);
    //for (vector<int>::iterator x = test_data.begin();x != test_data.end();x++)
        //cout<<*x<<endl;
    //cout<<"----------------------------------------------------------"<<endl;
    //vector<int> a;
    //vector<int>::iterator x = a.end();
    //vector<int>::iterator y = a.begin();

    //a.push_back(1);
    //vector<int>::iterator x1 = a.end();
    //vector<int>::iterator y1 = a.begin();
    //cout<<*y<<endl;
    //cout<<test_data[2]<<endl;
    //for (;i != test_data.end();i++)
        //cout<<*i<<" "<<endl;
    //test_data.erase(&test_data[0]);
    //cout<<test_data.size()<<endl;
    //cout<<test_data.empty()<<endl;

    //List
    list<int> list_test;
    list<int>::iterator l_it = list_test.begin();
    list_test.push_back(1);
    list_test.push_back(2);
    list_test.push_back(3);
    l_it = list_test.begin();
    cout<<*l_it<<endl;

    list_test.erase(l_it);
    l_it++;
    l_it++;
    cout<<*l_it<<endl;

    cout<<"------------------------"<<endl;
    for (list<int>::iterator it = list_test.begin();it != list_test.end();it++)
        cout<<*it<<' ';


//vector 多维数组
    //vector<int> data[3];
    //data[0].push_back(2);
    //cout<<data[0].size()<<endl;
    //cout<<*data[0].begin()<<endl;
*/
    string data[3] = {"hello","apple","banana"};
    sort(data,data+3);
    for (int i = 0;i < 3;i++)
        cout<<data[i]<<endl;

    return 0;
}
