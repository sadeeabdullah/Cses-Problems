		
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
    int n; cin >> n;
    vector<int> a(n);
    for(int &i : a) cin >> i;

    int ans = 0;
    set<int> st;
	for(int val : a){
		if(st.find(val - 1) == st.end()) ans++;
		st.insert(val);
	}
	cout << ans <<nl;
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