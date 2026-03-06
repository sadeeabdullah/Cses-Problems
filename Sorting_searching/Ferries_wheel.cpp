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
    int n, k; cin >> n>> k;
    std::vector<int> a(n);
    for(int &i : a)	cin >> i;

    sort(all(a));
	int ans = 0;

	int l = 0, h = n - 1;
	while(l <= h){
		if(a[l] + a[h] <=k){
			ans++,l++,h--;
		}else ans++,h--;
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