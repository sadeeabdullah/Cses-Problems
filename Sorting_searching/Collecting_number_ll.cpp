		
/* Bismillah hir rahmanir rahim */

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define llmax LLONG_MAX
#define nl '\n'
#define rall(var) (var).rbegin(), (var).rend()
#define all(var) (var).begin(), (var).end()
const ll Mod = 1e9 + 7;

void printMp(map<int,int>mp){
	for(auto [val, idx] : mp){
		cout << val << " --> " << idx << nl;
	}
	cout << nl;
}
void Puzzle_Out()
{
    map<int, int> mp;
    int n, m;	cin >>n >> m;;
    vector<int> a(n + 1);
    for(int i=1; i <=n; i++){
    	cin >> a[i];
    	mp[a[i]] = i;
    }

    int round = 1;
    for(int i= 1; i <=n ; i++){
    	if(a[i] > 1 && mp[a[i] - 1] > mp[a[i]])round++;
    }
    // cout << round << nl;
    // printMp(mp);

    while(m--){
    	int i,j;	cin >> i >> j;
    	if(i > j) swap(i, j);

        int x = a[i];
        int y = a[j];

        if(mp[x + 1] > i && mp[x + 1] < j) round++;
        if(mp[x - 1] > i && mp[x - 1] < j) round--;

        if(mp[y + 1] > i && mp[y + 1] < j) round--;
        if(mp[y - 1] > i && mp[y - 1] < j) round++;

        if(x == (y + 1)) round--;
        if(x == (y - 1))round++;

        cout << round << nl;
        swap(a[i], a[j]);
        mp[x] = j, mp[y] = i;

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