#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>  
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
 
using namespace std;
using namespace __gnu_pbds;
 
typedef long long ll;
typedef long double ld;
ll MOD = 998244353;
double eps = 1e-12;
#define forn(i,e) for(ll i = 0; i < e; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define endl "\n"
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
int main()
{
    fast_cin();
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
int n;cin>>n; 
vector<int> v; 
for(int i=0;i<n;i++){
	int no; cin>>no; 
	v.pb(no);
}
sort(v.begin(),v.end());//this operation takes O(nlogn)
int largest=v[n-1],second_largest=0;
for(int i=n-2;i>=0;i--){
	if(v[i]!=largest){
		second_largest=v[i];
		break;
	}
}
//this operation takes O(n) time
cout<<second_largest<<" ";
//overall time complexity of this problem is O(nlogn+n) extempting n o(nlogn)

return 0;
}
