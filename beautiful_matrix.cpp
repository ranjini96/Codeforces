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
#define el "\n"

void print_mat(int n,int m,vi &a)
{
	fi(i,0,n)
	{
		fi(j,0,m)
		{
			cout<<a[m*i+j]<<" ";
			
		}
		cout<<el;	
		
	}
}

void print_vec(vi &a)
{
	fi(i,0,a.size())
	{
		cout<<a[i]<<" ";
	}
}
int main()
{
	vi a,dp;
	//vector <vi> dp;
	int num,n,m,d;	
	cin>>n>>m>>d;
	fi(i,0,n*m)
	{
		cin>>num;
		a.PB(num);
	}
//	print_mat(n,m,a);
	s(a.begin(),a.end());
	//print_mat(n,m,a);
	int pos=(n*m)/2;
	if(d>=a[pos])
	{
		cout<<-1;
		return 0;
	}
	//cout<<pos;
	
	int sum=0;
	fi(i,0,a[n*m-1]+1)
	{
		dp.PB(0);
	}
	//cout<<dp.size();
	//cout<<el;
	fi(i,0,n*m)
	{
		if(i!=pos)
		{
			dp[a[i]]=abs(a[pos]-a[i])/d;
		}
	}
	fi(i,0,dp.size())
	{
		sum+=dp[i];
	}
	cout<<sum;
	return 0;
}
		
