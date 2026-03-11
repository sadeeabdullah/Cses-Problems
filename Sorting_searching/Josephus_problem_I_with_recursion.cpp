		
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


void josephus(vector<int> &a)
{
	int n = a.size();

	// base case here
	if(n == 1){
		cout << a[0] << nl;
		return;
	}

	// printing the element 
	for(int i = 1; i < n ; i += 2) cout << a[i] << " ";
	vector<int> newA;
	if(n % 2){
		newA.pb(a[n - 1]);
		for(int i = 0; i <= n - 2; i+= 2){
			newA.pb(a[i]);
		}
	}else{
		for(int i = 0; i <= n - 1; i+= 2){
			newA.pb(a[i]);
		}
	}
	josephus(newA);
}

void Puzzle_Out()
{
    int n;	cin >>n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) a[i] = i + 1;

    josephus(a);
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