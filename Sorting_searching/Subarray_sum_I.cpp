		
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


/*
	APPROACH:	
		doing the prefix sum and checking the sum x is possible or not
		for that we are setting mp[0] = 1; because when we have 7 - 7 for the first time 
		there also need to count and if any place  like we have the current sum 18 and 
		subtracting 7 we get the sum 11 check if any sum before give use the 11 sum  or not
		if it have any sum before it 11 then we can remove this part of array and get the sum 
		7 so we can use map as well
*/
void Puzzle_Out()
{
    ll n, x;	cin >> n >> x;
    vector<ll> a(n);
    for(ll &i : a) cin >> i;

    unordered_map<ll,ll> mp;
	mp[0] = 1;
    ll sum = 0, cnt = 0;
	for(ll i = 0; i < n; i++){
		sum+=a[i];

		cnt+=mp[sum - x];
		mp[sum]++;
	}
	cout <<cnt <<nl;
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