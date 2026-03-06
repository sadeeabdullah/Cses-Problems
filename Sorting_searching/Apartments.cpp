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
 	int n, m, k;	cin >> n >> m >> k;
 	std::vector<int> d(n), a(m);
 	for(int &i: d) cin >> i;
 	for(int &i : a) cin >> i;

 	sort(all(d));    
 	sort(all(a));
 	int cnt = 0;
 	int j = 0, i = 0;
 	while(i < n && j < m){
 		if(a[j] >= d[i]- k && a[j] <= d[i] + k){
 			cnt++;
 			j++, i++;
 		}else if(a[j] < d[i] - k){
 			j++;
 		}else i++;
 	}
 	cout <<  cnt << nl;
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