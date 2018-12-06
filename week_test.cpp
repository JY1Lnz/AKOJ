
#include <iostream>
#include <string>
using namespace std;



// Return the length of LCS for X[0...m-1] and Y[0...n-1]
int lcs(string &X, string &Y, int m, int n)
{
	if (m == 0 || n == 0)
		return 0;
	if (X[m-1] == Y[n-1])
		return lcs(X, Y, m-1, n-1) + 1;
	else
		return max(lcs(X, Y, m-1, n), lcs(X, Y, m, n-1));
}

int main()
{
	string X;
	string Y;
    cin>>X>>Y;

	cout << "The length of LCS is " << lcs(X, Y, X.length(), Y.length());
	cout << endl;

	getchar();
	return 0;
}

