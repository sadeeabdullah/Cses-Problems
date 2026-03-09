		
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
/*
	here In the problem set the two word every other is the key point here.
	every other means always the second or skip one in middle

	what we will do is maintain a queue and a flag to remove or not remove
	every time we will change the flag and according to the flag we will remove the element and print
*/
void Puzzle_Out()
{
    int n;	cin >> n;
    queue<int> q;
    for(int i = 1; i <=n; i++) q.push(i);

    bool flag = false;
	while(!q.empty()){
		int tp = q.front();
		q.pop();
		if(flag) cout << tp << " ";
		else q.push(tp);
		flag = !flag;
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