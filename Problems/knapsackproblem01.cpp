#include <bits/stdc++.h>
using namespace std;

typedef long long it;

int main() 
{
	it n,m;
	cin >> n >> m;
	it w[m+1];
	it a[n+1][m+1];
	memset(a,0,sizeof(a));
	memset(w,0,sizeof(w));
	for (it i = 1; i<=n;i++) cin >> w[i];
	for (it i = 1;i<=n;i++)
	  {
	  	for (int j = 0;j<=m;j++)
	  	{
	    a[i][j]=a[i-1][j];
	    if ((j>=w[i]) && (a[i][j] < a[i-1][j-w[i]] + w[i]))a[i][j] = a[i-1][j-w[i]] + w[i];
	    }
	  }
  cout << a[n][m];
  it j = m;
  it i = n;
  cout << endl;
  while (i!=0) 
    {
    	if(a[i][j] != a[i-1][j])
    	  {
    	  	cout << i << " ";
    	  	j = j - w[i];
		  }
		i--;
	}
}
