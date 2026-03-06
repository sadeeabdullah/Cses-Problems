		
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
    int n;	cin >> n;
    vector<pair<int, int>> a;
    for(int i = 0; i <n; i++){
    	int st, end;	cin>> st >> end;
    	a.push_back({end, st});
    }

    sort(all(a));

    int ans =  0, last_st = 0, last_end =0;
    for(auto [end, start] : a){
    	if(start >= last_end){
    		ans++;
    		last_end = end;
    	}
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