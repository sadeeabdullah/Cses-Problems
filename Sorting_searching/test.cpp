		
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
    int n,m;	cin >> n >> m;
    vector<int> a(n + 1);
    map<int,int> pos;

    for(int i = 1; i <= n; i++){
        cin >> a[i];
        pos[a[i]] = i;
    }

    int round =  1;
    for(int i= 1; i <=n;  i++){
        if( pos[a[i] - 1] > pos[a[i]]) round++;
    }
    // cout << round << nl;
    while(m--){
        int i, j;   cin >> i >> j;
        if(i > j) swap(i, j);

        int x =a[i];
        int y =a[j];

        round += (pos[x + 1] > i && pos[x + 1] < j);
        round -= (pos[x - 1] > i && pos[x - 1] < j);
        round -= (pos[y + 1] > i && pos[y + 1] < j);
        round += (pos[y - 1] > i && pos[y - 1] < j);

        round += (x == y-1);
        round -= (x == y+1);

        cout << round << nl;
        // doing the swap operation
        swap(pos[a[i]], pos[a[j]]);
        swap(a[i], a[j]);

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