		
/* Bismillah hir rahmanir rahim */

#include <bits/stdc++.h>

//for pbds
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>

using namespace std;

//typedef __gnu_pbds::tree<int, __gnu_pbds::null_type, less<int>, __gnu_pbds::rb_tree_tag, __gnu_pbds::tree_order_statistics_node_update> ordered_set;
// 1. find_by_order(k) -> returns iterator to the kth smallest element (0 based)
// 2. order_of_key(k)  -> returns the number of elements strictly less than k

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
#define F first
#define S second
#define PB push_back
#define nl '\n'
#define rall(var) (var).rbegin(), (var).rend()
#define all(var) (var).begin(), (var).end()
const ll Mod = 1e9 + 7;


void Puzzle_Out()
{
    int n;	cin >> n;
    vi a(n);
    for(int &i : a) cin >> i;

    const int maxN = *max_element(all(a));
    vector<int> freq(maxN + 1, 0);
    for(int i = 0; i < n; i++) freq[a[i]]++;
    for(int d = maxN ; d >= 1; d--){
        int cnt = 0;
        for(int mul = d; mul <= maxN; mul += d){
            cnt += freq[mul];
            if(cnt >= 2){
                cout << d<< nl;
                return;
            }
        }
    }
    cout << 1 << nl;
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