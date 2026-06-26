#include <bits/stdc++.h>
using namespace std;

typedef long long ont;

int main()
{
//	freopen("BALO2.INP","r",stdin);
//    freopen("BALO2.OUT","w",stdout);
	ont n,m,k;
	cin >> n >> m;
	ont a[n+2][m+2];
	ont w[n+2];
	ont v[n+2];
	memset(a,0,sizeof(a));
	memset(w,0,sizeof(v));
	memset(v,0,sizeof(w));
	for (ont i=1;i<=n;i++) cin >> w[i] >> v[i];
	
	
	for (ont i=1;i<=n;i++)
	  {
	  	for (ont j=1;j<=m;j++)
	  	  {
	  	  	a[i][j]=a[i-1][j];
	  	  	if (j >= w[i]) 
	  	  	  {
	  	  	   a[i][j]= max( a[i][j] , a[i-1][j-w[i]]+v[i] );  	
			  }
		  }
	  }
    
    
	ont mx=0;
	for(ont i = 1;i<=n;i++) 
	{
	  mx=max(mx,a[i][m]);	
	  k = i;
	}
	cout << mx << endl;
	ont i = k;
	ont j = m;
	while (i != 0)
	  {
		  if (a[i][j] != a[i-1][j])
	  	  {
	  	  	cout << i << " ";
	  	  	j = j-w[i];
			}
			i--;
	  }
}
