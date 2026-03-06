		
/* Bismillah hir rahmanir rahim */

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define llmax LLONG_MAX
#define nl '\n'
#define rall(var) (var).rbegin(), (var).rend()
#define all(var) (var).begin(), (var).end()
const ll Mod = 1e9 + 7;

void Puzzle_Out()
{
    int q; cin >> q;
    map<int, int> mp;	// storing its address
    for(int i=0; i < q; i++){
    	int enter, exit;
    	cin >> enter >> exit;
    	mp[enter]++, mp[exit + 1]--;
    }    

    int ans = 0, cnt = 0;
    for(auto [pos, op] : mp){
    	cnt+=op;
    	ans = max(ans, cnt);
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