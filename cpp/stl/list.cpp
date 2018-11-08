//16.12 list.cpp -- using a list
#include<bits/stdc++.h>
using namespace std;

void outint (int n)
{
    cout<<n<<' ';
}

int main()
{
    list<int> one(5,2);//list of {2,2,2,2,2}
    int stuff[5] = {1,2,4,8,6};
    list<int> two;
    two.insert(two.begin(),stuff,stuff+5);
    int more[6] = {6,4,2,4,6,5};
    list<int> three(two);
    three.insert(three.end(),more,more+6);

    cout<<"List one: ";
    for_each(one.begin(),one.end(),outint);

    cout<<endl<<"List two: ";
    for_each(two.begin(),two.end(),outint);

    cout<<endl<<"List three: ";
    for_each(three.begin(),three.end(),outint);

    three.remove(2);//delete all 2
    cout<<endl<<"List three minus 2s: ";
    for_each(three.begin(),three.end(),outint);

    three.splice(three.begin(),one);//add one before three.begin and delete one content
    cout<<endl<<"List three after splice: ";
    for_each(three.begin(),three.end(),outint);
    cout<<endl<<"List one: ";
    for_each(one.begin(),one.end(),outint);

    three.unique();//continuation and same element as one element
    cout<<endl<<"List three after unique: ";
    for_each(three.begin(),three.end(),outint);

    three.sort();//sort up sequence
    three.unique();
    cout<<endl<<"List three after sort & unique: ";
    for_each(three.begin(),three.end(),outint);

    two.sort();
    three.merge(two);
    cout<<endl<<"Sorted two merged int three: ";
    for_each(three.begin(),three.end(),outint);
    cout<<endl;



    return 0;
}
