		
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
    multiset<int> ml;
    for(int i =0; i < n; i++){
    	int x;	cin >> x;
    	ml.insert(x); 
    }

    for(int i = 0; i < k; i++){
    	int x; cin >>x;
    	auto it = ml.upper_bound(x);

    	if(it != ml.begin()){
    		it--;
    		cout << *it << nl;
    		ml.erase(it);
    	}else{
    		cout << -1 << nl;
    	}
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