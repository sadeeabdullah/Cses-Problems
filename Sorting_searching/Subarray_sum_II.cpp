		
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

void Puzzle_Out()
{
    int n, x;	cin >> n >> x;
    vector<int> a(n);
    for(int &i : a) cin >> i;

    map<ll, ll> mp;		// we have to use map only not unordered map because in worst case of 
						// unordered map we may get tle (n^2) because in the background 
						// un_map is using hashing and bucket not BST that will cause collision 
						// on searching
	mp[0] = 1;
	ll sum = 0, cnt = 0;
	for(int i=0; i < n; i++){
		sum += a[i];
		cnt += mp[sum - x];
		mp[sum]++;
	}
	cout << cnt << nl;
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