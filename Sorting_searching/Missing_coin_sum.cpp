		
/* Bismillah hir rahmanir rahim */

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define llmax LLONG_MAX
#define nl '\n'
#define rall(var) (var).rbegin(), (var).rend()
#define all(var) (var).begin(), (var).end()
#define pb(var) push_back(var)
const ll Mod = 1e9 + 7;

/**
 * APPROACH:	
 * 			we have to apply the greedy approach to solve the problem
 * 			sort the problem in ascending order so that we can get the minimum sum
 * 			we have to always find the sum +1. Like we have sum of 1 2 2 is 5 then
 * 			then we need to have the sum 6 but if we have the next element is 7 we never can make the sum 6 then it would be the answer
 * 			and most importantly if we have any value less than or equal to the 6(sum + 1 we talked before) we can make the sum 6 by only taking the 6 alone or with another values before
 * 			
 * */
void Puzzle_Out()
{
    ll n;	cin >>	n;
    vector<ll> a(n);
    for(ll &i : a) cin >> i;

    sort(all(a));
    ll sum = 1;
	for(ll val : a){
		if(val > sum ){
			cout << sum  << nl;
			return;
		}
		sum += val;
	}
	cout << sum  << nl;
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