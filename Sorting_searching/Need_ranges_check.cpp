		
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

bool cmp(const tuple<int,int,int> &a, const tuple<int,int,int> &b){
	if(get<0>(a) == get<0>(b)){
		return get<1>(a) > get<1>(b); // if the first element is equal then sort in descending order
									// based on the second element
	}
	return get<0>(a) < get<0>(b);
}


void Puzzle_Out()
{
    int n;	cin >> n;
    vector<tuple<int,int,int>> a;
    for(int i = 1; i <= n;i++){
    	int st, end; 	cin >> st >> end;
    	a.push_back({st, end, i});
    }
    sort(all(a), cmp);

    vector<int> isContainedByOther(n + 1, 0);
    vector<int> ContainedOther(n + 1, 0);

    int mxEnd = INT_MIN;
    for(auto [st, end, idx] : a){
    	if(mxEnd != INT_MIN && end <= mxEnd){
    		isContainedByOther[idx] = 1;
    	}
    	mxEnd = max(mxEnd, end);
    }

    int mnEnd = INT_MAX;
    for(int i = n - 1; i >= 0; i--){

    	auto [st, end, idx] = a[i];
    	if(mnEnd != INT_MAX && end >= mnEnd){
    		ContainedOther[idx] = 1;
    	}
    	mnEnd = min(mnEnd, end);
    }

    for(int i= 1; i <= n; i++) cout << ContainedOther[i] << " ";
    cout <<nl;
    for(int i= 1; i <= n; i++) cout << isContainedByOther[i] << " ";
    cout << nl;
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