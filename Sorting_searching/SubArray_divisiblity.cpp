		
/* Bismillah hir rahmanir rahim */

#include <bits/stdc++.h>

//for pbds
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>

using namespace std;

//typedef __gnu_pbds::tree<int, __gnu_pbds::null_type, less<int>, __gnu_pbds::rb_tree_tag, __gnu_pbds::tree_order_statistics_node_update> ordered_set;
// 1. find_by_order(k) -> returns iterator to the kth smallest element (0 based)
// 2. order_of_key(k)  -> returns the number of elements strictly less than k

#define ll long long int
#define llmax LLONG_MAX
#define nl '\n'
#define rall(var) (var).rbegin(), (var).rend()
#define all(var) (var).begin(), (var).end()
#define vi vector<int>
#define pi pair<int,int>
#define vpi vector<pi>
const ll Mod = 1e9 + 7;


/*_____________________________ Push past your Limits !! _____________________________*/
void Puzzle_Out()
{
 	ll n; cin >> n;
 	vector<ll> a(n);
 	for(ll  &i : a) cin >> i;
 	map<ll, ll> mp;
 	mp[0] = 1;
 	ll sum = 0;
 	ll ans = 0;
 	for(int i =	0; i < n; i++){
 		sum += a[i];
 		ll r = sum % n;
 		if(r < 0) r +=n;
 		ans += mp[r];
 		mp[r]++;
 	}   
 	cout << ans << nl;
}


/*_______________ Hardwork beats Talent, when Talent doesn't work hard!! _______________*/
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