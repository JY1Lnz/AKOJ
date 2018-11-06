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
        cout<<"Your word: "<<attempt<<endl;

        while(guesses > 0&&attempt != target)
        {
            char letter;
            cout<<"Guess a letter: ";
            cin>>letter;
            if (badchars.find(letter) != string::npos || attempt.find(letter) != string::npos)
            {
                cout<<"You already guessed that. Try again.\n";
                continue;
            }

            int loc = target.find(letter);
            if (loc == string::npos)
            {
                cout<<"Oh, bad guess!"<<endl;
                --guesses;
                badchars += letter;  //add letter to string named badchars
            }
            else
            {
                cout<<"Good guese!"<<endl;
                attempt[loc] = letter;
                //check if letter appeara again
                loc = target.find(letter,loc+1);
                while(loc != string::npos)
                {
                    attempt[loc] = letter;
                    loc = target.find(letter,loc+1);
                }
            }
            cout<<"Your woed: "<<attempt<<endl;
            if (attempt != target)
            {
                if (badchars.length() > 0)
                    cout<<"Bad choices: "<<badchars<<endl;
                cout<<guesses<<" bad guesses lef"<<endl;
            }
        }
        if (guesses > 0)
            cout<<"That's right!"<<endl;
        else
            cout<<"Sorry, the word is "<<target<<','<<endl;
        cout<<"Will you play another? <y/n> ";
        cin>>play;
        play = tolower(play);
    }
    cout<<"Bye"<<endl;

    return 0;
}
