#include <iostream>
#include<cstring>
#include<queue>
using namespace std;
int Water[101][101];
struct Point
{
  int x;
  int y;
};
int Direct[4][2]={1,0,0,1,-1,0,0,-1};
void Delete(Point &P)
{
   queue<Point > Next;
   Next.push(P);
   Point C;
   Point N;
   while(!Next.empty())
   {
      C=Next.front();
    //  cout<<C.x<<" "<<C.y<<" "<<endl;
      for(int i=0;i<4;i++)
      {
        N.x=C.x+Direct[i][0];
        N.y=C.y+Direct[i][1];
        if(Water[N.x][N.y])
          Next.push(N);
      }
      Next.pop();
      Water[C.x][C.y]=0;
   }
}
int main()
{
    int T;
    cin>>T;
    for(int a=0;a<T;a++)
    {
       int n,m;
       cin>>m>>n;
       memset(Water,0,sizeof(Water));
       for(int i=1;i<=m;i++)
        for(int j=1;j<=n;j++)
          cin>>Water[i][j];
        int Num=0;
        Point T;
        for(int i=1;i<=m;i++)
         for(int j=1;j<=n;j++)
         {
            if(Water[i][j])
            {
              Num++;
              T.x=i;
              T.y=j;
              Delete(T);
            }
         }
         cout<<Num<<endl;
    }
    return 0;
}

