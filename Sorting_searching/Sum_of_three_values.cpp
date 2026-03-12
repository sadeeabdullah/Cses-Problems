		
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
    int n, x; cin >> n >> x;
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; ++i)
    {
    	int val; cin >> val;
    	a[i] = {val, i + 1};
    }

    sort(all(a));
	
	for(int i = 0; i < n - 2; i++){
		// int need = x - a[i].first;
		int j = i + 1, k = n - 1;
		while(j < k){
			if(a[i].first + a[j].first + a[k].first == x){
				cout << a[i].second << " " << a[j].second << " " << a[k].second << nl;
				return;
			}else if(a[i].first + a[j].first + a[k].first > x){
				k--;
			}else j++;
		}
	}

	cout << "IMPOSSIBLE" << nl;
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