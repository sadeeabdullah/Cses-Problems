        
/* Bismillah hir rahmanir rahim */

#include <bits/stdc++.h>

//for pbds
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;

typedef __gnu_pbds::tree<int, __gnu_pbds::null_type, less<int>, __gnu_pbds::rb_tree_tag, __gnu_pbds::tree_order_statistics_node_update> ordered_set;

#define ll long long int
#define llmax LLONG_MAX
#define nl '\n'
#define rall(var) (var).rbegin(), (var).rend()
#define all(var) (var).begin(), (var).end()
#define pb(var) push_back(var)
const ll Mod = 1e9 + 7;

void Puzzle_Out()
{
    int n, k;   cin >> n >> k;
    ordered_set pb;
    for(int i = 0; i < n; i++){
        pb.insert(i + 1);
    }

    int pos = 0;
    while(n){
        pos = (pos + k ) % n;
        auto it = pb.find_by_order(pos);
        cout << *it << " ";
        pb.erase(it);
        n--;
    }
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