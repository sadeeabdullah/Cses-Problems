		
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
    int n, k;	cin >> n >> k;
    std::vector<int> a(n);
    std::map<int, vector<int>> mp;
    for(int i=0; i < n; i++) cin >> a[i], mp[a[i]].push_back(i);

    for(int val : a){
    	auto it = mp.find(k - val);

    	if(val == (k - val) && mp[val].size() > 1){
    		cout << mp[val][0] + 1<< " " << mp[val][1] + 1<< nl;
    		return;
    	}

    	if(it != mp.end() && val != ( k - val)){
    		cout << mp[val][0] + 1 << " " << mp[k - val][0] + 1 <<nl;
    		return;
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