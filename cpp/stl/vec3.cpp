//16.9
//vect3.cpp -- using STL function
//update vect2.cpp
//use for_each(),random_shuffle(),sort()
#include<bits/stdc++.h>
using namespace std;

struct Review//struct storage title and rating
{
    string title;
    int rating;
};

//declare FillReview function read data
//declare ShowReview function print data
bool FillReview(Review & rr);
void ShowReview(const Review & rr);
//add new function
bool operator<(const Review & r1, const Review & r2);
bool worseThan(const Review & r1, const Review & r2);

//self function -- cout<<books
void ShowReviewAll(vector<Review> );

int main()
{
    vector<Review> books;//define a book struct vector
    Review temp;

    while(FillReview(temp))//input data
        books.push_back(temp);

    //int num = books.size();
    if (books.size() > 0)
    {
        cout<<"Thank you. You entered the following:"<<endl;
        cout<<"Rating\tBook"<<endl;
        for_each(books.begin(),books.end(),ShowReview);//for_each  -- for each content do function"ShowReview"

        sort(books.begin(),books.end());
        cout<<"Sorted by title:\nRating\tBook\n";
        for_each(books.begin(),books.end(),ShowReview);

        sort(books.begin(),books.end(),worseThan);//sort by worseThan rule
        cout<<"Sorted by rating:\nRating\tBook\n";
        for_each(books.begin(),books.end(),ShowReview);

        random_shuffle(books.begin(),books.end());
        cout<<"After shuffling:\nRating\tBook\n";
        for_each(books.begin(),books.end(),ShowReview);

        /*
        cout<<"Reprising:\n"
            <<"Rating\tBook\n";
        vector<Review>::iterator pr;
        //ShowReviewAll(books);
        for_each(books.begin(),books.end(),ShowReview);
        vector<Review> oldlist(books); //copy constructor used
        if (num > 3)
        {
            //remove 2 items
            books.erase(books.begin()+1,books.begin()+3);
            cout<<"After erasure:"<<endl;
            ShowReviewAll(books);

            //insert 1 item
            books.insert(books.begin(),oldlist.begin()+1,oldlist.begin()+2);
            cout<<"After insertion:"<<endl;
            ShowReviewAll(books);
        }

        books.swap(oldlist);
        cout<<"Swapping oldlist with books:"<<endl;
        ShowReviewAll(books);
        */

    }
    else
        cout<<"NO entrise"<<endl;
    cout<<"Bye."<<endl;

    return 0;
}

bool FillReview(Review & rr)
{
    cout<<"Enter book tilte (quit to quit): ";
    getline(cin,rr.title);
    if (rr.title == "quit")
        return false;
    cout<<"Enter book rating: ";
    cin>>rr.rating;
    if (!cin)
        return false;
    //get rid of rest of input line
    while(cin.get() != '\n')
        continue;
    return true;
}

void ShowReview(const Review & rr)
{
    cout<<rr.rating<<"\t"<<rr.title<<endl;
}

void ShowReviewAll(vector<Review> books)
{
    vector<Review>::iterator pr;
    for (pr = books.begin();pr != books.end();pr++)
        ShowReview(*pr);
}

bool operator<(const Review & r1,const Review & r2)
{
    if (r1.title<r2.title)
        return true;
    else if (r1.title == r2.title&&r1.rating < r2.rating)
        return true;
    else
        return false;
}

bool worseThan(const Review & r1,const Review & r2)
{
    if (r1.rating < r2.rating)
        return true;
    else
        return false;
}
