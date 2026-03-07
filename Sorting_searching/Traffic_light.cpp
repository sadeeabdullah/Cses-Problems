		
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
    int x, n; 	cin >> x >> n;

    multiset<int> dis;
    set<int> pos;
    pos.insert(0),pos.insert(x);
    dis.insert(x);

    for(int i = 0; i <  n; i++){
        int a; cin >>a;
        auto r = (pos.upper_bound(a));
        auto right = *r;
        --r;
        auto left = *(r);

        dis.erase(dis.find(right -  left));
        dis.insert(a - left), dis.insert(right - a);

        cout << *dis.rbegin() << " ";
        pos.insert(a);
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