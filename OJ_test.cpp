#include<bits/stdc++.h>
using namespace std;
int a[200][200];
bool b[200][200];
int main() {
    ifstream cin ("test.in");
  int m, n;
  cin >> m >> n;
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cin >> a[i][j];
    }
  }

  vector<int> v;
  int s = n * m;
  int i = 0, j = 0;

  while (s>0) {//cout<<"***"<<endl;
    //��
    while (i<m) {
      if (b[i][j] == 0) {
        b[i][j] = 1;
       // cout<<a[i][j]<<" ";
        v.push_back(a[i++][j]);
        s--;
      }
      else
        break;
    }
    j++;
    i--;
    // right
    while (j < n) {
      if (b[i][j] == 0) {
        b[i][j] = 1;
        v.push_back(a[i][j++]);
        s--;
      }
      else
        break;
    }
    i--;
    j--;
    // up
    while (i >= 0) {
      if (b[i][j] == 0) {
        b[i][j] = 1;
        v.push_back(a[i--][j]);
        s--;
      }
      else
        break;
    }
    i++;
    j--;
    // left
    while (j >= 0) {
      if (b[i][j] == 0) {
        b[i][j] = 1;
        v.push_back(a[i][j--]);
        s--;
      }
      else
        break;
    }
    i++;
    j++;
  }
  cout<<v[0];
  for (int i = 1; i < v.size(); i++) {
    cout << " "<< v[i];
  }
  cout << endl;
}
