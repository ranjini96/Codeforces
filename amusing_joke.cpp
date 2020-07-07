#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<string> vs;
typedef pair<int,int> pi;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define fi(i,a,b) for (int i = a; i <b; i++)
#define s(a,b) sort(a,b)
int main()
{
    string mv1,mv2,mv3;
    
    cin>>mv1>>mv2>>mv3;
    mv1=mv1+mv2;
    
    s(mv1.begin(),mv1.end());
    
   	s(mv3.begin(),mv3.end());
  
    if(mv1.compare(mv3)==0)
    	cout<<"YES"<<"\n";
    else
     	cout<<"NO"<<"\n";
      
   

    return 0;
}
