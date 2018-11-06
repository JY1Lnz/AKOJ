#include<bits/stdc++.h>
using namespace std;

const int NUM = 26;
const string wordlist[NUM] = {"apiary","beetle","cereal",
    "danger","ensign","florid","garage","health","insult",
    "jackal","keeper","loaner","manage","nonce","onset",
    "plaid","quilt","remote","stolid","train","useful",
    "valid","whence","xenon","yearn","ziappy"};
//测试用单词

int main()
{
    char play;
    cout<<"Will you play a word game? <y/n> :";
    cin>>play;
    play = tolower(play);//大写转小写

    while(play == 'y')
    {
        string target = wordlist[rand()%26];
        int length = target.length();
        string attempt(length,'-');//定义长度位length的字符串，全部赋值为‘-‘;
        string badchars;
        int guesses = 6;
        cout<<"Guess my secret word. It has "<<length
        <<" letters,and you guesss"<<endl
        <<"one letter at a time. You get "<<guesses
        <<" wrong guess.\n";
        break;
    }

    return 0;
}
