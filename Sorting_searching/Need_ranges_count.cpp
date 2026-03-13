        
/* Bismillah hir rahmanir rahim */

#include <bits/stdc++.h>

//for pbds
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;

typedef __gnu_pbds::tree<int, __gnu_pbds::null_type, less_equal<int>, __gnu_pbds::rb_tree_tag, __gnu_pbds::tree_order_statistics_node_update> ordered_set;
// 1. find_by_order(k) -> returns iterator to the kth smallest element (0 based)
// 2. order_of_key(k)  -> returns the number of elements strictly less than k

#define ll long long int
#define llmax LLONG_MAX
#define nl '\n'
#define rall(var) (var).rbegin(), (var).rend()
#define all(var) (var).begin(), (var).end()
#define pb(var) push_back(var)
const ll Mod = 1e9 + 7;


/*_____________________________ Push past your Limits !! _____________________________*/
void Puzzle_Out()
{
    int n;  cin >>n;
    vector<tuple<int, int, int>> a;

    for(int i = 0; i < n; i++){
        int x, y; cin >> x >> y;
        a.push_back({x, y, i});
    }

    sort(all(a), [&](const tuple<int,int,int> &a, const tuple<int,int,int> &b){
        if(get<0>(a) == get<0>(b)){
            return get<1>(a) > get<1>(b);
        }
        return get<0>(a) < get<0>(b);
    });

    vector<int> ContainedOther(n, 0);
    vector<int> isContainedByOther(n, 0);
    ordered_set ets;
    for(int i = 0; i < n; i++){
        auto [st, end, idx] = a[i];
        isContainedByOther[idx] = ets.size() - ets.order_of_key(end);
        ets.insert(end);
    }

    ets.clear();

    for(int i= n - 1; i >= 0; i--){
        auto [st, end, idx] = a[i];
        ContainedOther[idx] = ets.order_of_key(end + 1);
        ets.insert(end);
    }

    for(int val : ContainedOther) cout << val << " ";
    cout << nl;
    for(int val : isContainedByOther) cout << val << " ";
    cout << nl;
    
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