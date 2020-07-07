#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<ll> vl;
typedef set<int> si;
typedef set<string> ss;
typedef pair<int,int> pi;
typedef pair<ll,ll> pl;
typedef pair<char,char> pc;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define fi(i,a,b) for (int i = a; i <b; i++)
#define fe(i,a,b) for(int i=a;i<=b;i++)
#define fr(i,a,b) for(int i=b-1;i>=a;i--)
#define w(i) while(i>0)
#define s(a,b) sort(a,b)
#define el "\n"
#define all(vec) vec.begin() vec.end()
#define trav(a,x) for(auto &a:x)
const ll infl=0x3f3f3f3f3f3f3f3fLL;
const int infi=0x3f3f3f3f;
const ll mod = 1e9+7;
 
 int main()
 {
     int n,num;
     vi vec;
     cin>>n;
     fi(i,0,n)
     {  
        
        cin>>num;vec.PB(num);
     }
     num=0;
     fi(i,0,n)
     {
        if(vec[vec[vec[i]-1]-1]==(i+1))
        {
            cout<<"YES";
            num=1;
            break;
        }
        
    }
    if(num==0)
    cout<<"NO";
     return 0;
 }