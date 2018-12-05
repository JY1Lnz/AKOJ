#include<bits/stdc++.h>
using namespace std;

int data[22][22];

int main()
{

    int nh,nm,ns;
    int lh,lm,ls;
    int rh,rm,rs;
    while(cin>>nh>>nm>>ns>>lh>>lm>>ls)
    {
        //printf("%d %d %d %d %d %d\n",nh,nm,ns,lh,lm,ls);
        rs = (ns+ls)%60;
        rm = (nm+lm+(ns+ls)/60)%60;
        int jh = (nm+lm+(ns+ls)/60)/60;
        rh = (nh+lh+jh)%24;
        printf("%02d:%02d:%02d\n",rh,rm,rs);

    }

}
