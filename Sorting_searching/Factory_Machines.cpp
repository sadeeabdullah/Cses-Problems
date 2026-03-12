		
/* Bismillah hir rahmanir rahim */

#include <bits/stdc++.h>

//for pbds
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>

using namespace std;

//typedef __gnu_pbds::tree<int, __gnu_pbds::null_type, less<int>, __gnu_pbds::rb_tree_tag, __gnu_pbds::tree_order_statistics_node_update> ordered_set;

#define ll long long int
#define llmax LLONG_MAX
#define nl '\n'
#define rall(var) (var).rbegin(), (var).rend()
#define all(var) (var).begin(), (var).end()
#define pb(var) push_back(var)
const ll Mod = 1e9 + 7;

bool ok(vector<ll> &a, ll mid, ll product){
	ll p = 0;
	for(ll val : a){
		p += (mid / val);
		if(p >= product) return true;
	}
	return p >= product;
}

void Puzzle_Out()
{
    ll n, product;		cin >> n >> product;
    vector<ll> a(n); for(ll i= 0;i < n; i++) cin >> a[i];

    ll l = 1, r = 1e18, ans = 0, mid;
    while(l <= r){
    	mid = l + (r - l)/2;
    	if(ok(a,mid, product)){
    		ans = mid;
    		r = mid - 1;
    	}else{
    		l = mid + 1;
    	}
    }
    cout << ans << nl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;
    for (int tc = 1; tc <= t; tc++)
        Puzzle_Out();

    return 0;
}
/* author : Sadee Abdullah */ 