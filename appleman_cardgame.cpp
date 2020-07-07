#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<string> vs;
typedef set<int> si;
typedef set<string> ss;
typedef pair<int,int> pi;
typedef pair<ll,ll> pl;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define fi(i,a,b) for (int i = a; i <b; i++)
#define w(i) while(i>0)
#define s(a,b) sort(a,b)
#define el "\n"

void print_vec(vi &a) {
for(auto it=a.begin();it!=a.end();++it){cout<<*it<<" ";}}

bool sortbysec(const pair<int,int> &a, 
              const pair<int,int> &b) 
{ 
    return (a.second > b.second); 
} 

int main()
{
	int n,k,j;
	ll count=0;
	set<char> news;	
	vector <pair<char,int>> vpc;
	string st;
	cin>>n>>k;
	cin>>st;
	fi(i,0,st.size())
	{
		news.insert(st[i]);
	}
	for(auto it=news.begin();it!=news.end();++it)
	{
		count=0;
		fi(i,0,st.size())	
		{
			if(*it==st[i])
			count++;
		}
		vpc.PB(MP(*it,count));
	}
	sort(vpc.begin(),vpc.end(),sortbysec);
/*	fi(i,0,vpc.size())	
	{
		cout<<vpc[i].F<<","<<vpc[i].S<<el;
	}*/
	count=0;
	j=0;
	while(k>=0)
	{
		if(vpc[j].S<=k)
		{
			k-=vpc[j].S;
			count+=(ll)vpc[j].S*vpc[j].S;
			if(k<0)
			 break;
		}
		else if(vpc[j].S>=k)
		{
			count+=(ll)k*k;
			break;
		}
		j++;
		
	}
	cout<<count<<el;
	return 0;
}
