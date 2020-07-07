#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<string> vs;
typedef pair<int,int> pi;
typedef pair<ll,ll> pl;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define fi(i,a,b) for (int i = a; i <b; i++)
#define s(a,b) sort(a,b)

int main()
{
	int t, n,x=0,c=0;
	ll k,num;
	vector<pl> a;
	cin>>t;
	fi(j,0,t)
	{
		c=0;
		x=0;
		cin>>n>>k;
		
		fi(i,0,n)
		{
			cin>>num;
			a.push_back(MP(num,k-num));
		}
		x++;
		c++;
		while(x<=k)
		{
		fi(i,0,n)
		{
			if(x==a[i].S)
			{
			c++;
			x++;
			}
			else
			{
				x++;
				c++;
			}
		}
		}
	
				
		cout<<c;
	}
	return 0;
}
		
