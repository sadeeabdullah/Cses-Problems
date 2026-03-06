		
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
    ll n;	cin >> n;
    vector<ll> a(n);
    for(ll &i : a)	cin >> i;

    ll mx_ending = a[0], ans = a[0];
	for(ll i = 1; i < n;  i++){
		// starting new sub array if the the mxending is lower than present element then we will start taking a new sub array
		mx_ending = max(mx_ending + a[i] , a[i]);
		ans = max(ans, mx_ending);
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