		
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


void Puzzle_Out(){
	ll n; cin >> n;
	vector<int> a(n + 1);
	for(int i = 1; i<= n; i++){
		cin >> a[i];
	}

	map<int, int> lastPos;
	ll ans = 0;
	for(int i=0, j = 0; i <= n; i++){
            j = max(j, lastPos[a[i]]+ 1 );

		lastPos[a[i]] = i;
		ans+= (i - j + 1 );
	}
	cout << ans << nl;
}


// void Puzzle_Out(){
// 	ll n;	cin >> n;
// 	vector<ll> a(n);
// 	for(ll &i: a) cin >> i;

// 	set<ll> st;
// 	ll j = 0;
// 	ll ans = 0;
// 	for(ll i = 0; i < n;i++){
// 		if(st.find(a[i]) == st.end()){
// 			st.insert(a[i]);
// 		}else{
// 			while(st.find(a[i]) != st.end())st.erase(a[j]), j++;
// 			st.insert(a[i]);
// 		}
// 		ans += st.size();
// 	}
// 	cout << ans << nl;
// }
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