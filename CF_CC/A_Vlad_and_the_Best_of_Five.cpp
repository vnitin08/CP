#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef long double ld;
ll M = 1e9+7;
const ll N = 8e5 + 10;
const char nl = '\n';
#define pb push_back
#define F first
#define S second
#define in insert
#define ub upper_bound
#define lb lower_bound
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(), v.rend()
#define MIN(v) *min_element(all(v))
#define MAX(v) *max_element(all(v))
#define pll pair<ll,ll>
#define vi vector<int>
#define vll vector<ll>
#define vpll vector<pll>
#define vvll vector<vector<ll>>
#define sll set<ll> 
#define repr(i,n) for(ll i=n-1;i>=0;i--)
#define rep(i,n) for(ll i=0;i<n;i++)
#define rep1(i,n) for(ll i=1;i<n;i++)
#define repa(i,a,b) for (ll i = a; i < b; i++)
 
void solve(){
    string s; cin>>s;
    int c=0;
    rep(i,5) if(s[i]=='A') c++;
    if(c>=3) cout<<"A"<<nl;
    else cout<<"B"<<nl;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
    solve();
    }
    //solve();
   
}