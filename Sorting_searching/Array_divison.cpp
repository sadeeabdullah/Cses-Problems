		
/* Bismillah hir rahmanir rahim */

#include <bits/stdc++.h>

//for pbds
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>

using namespace std;

//typedef __gnu_pbds::tree<int, __gnu_pbds::null_type, less<int>, __gnu_pbds::rb_tree_tag, __gnu_pbds::tree_order_statistics_node_update> ordered_set;
// 1. find_by_order(k) -> returns iterator to the kth smallest element (0 based)
// 2. order_of_key(k)  -> returns the number of elements strictly less than k

#define ll long long int
#define llmax LLONG_MAX
#define nl '\n'
#define rall(var) (var).rbegin(), (var).rend()
#define all(var) (var).begin(), (var).end()
#define vi vector<int>
#define pi pair<int,int>
#define vpi vector<pi>
const ll Mod = 1e9 + 7;


/*_____________________________ Push past your Limits !! _____________________________*/

bool isValid (vector<ll> &a, ll k, ll mid){
    ll n = a.size();
    ll partition = 1, sum = 0;
    for(int i = 0;i < n; i++){
        sum += a[i];
        if(sum > mid){
            sum = a[i];
            partition++;
        }
    }
    return partition <= k;
}
void Puzzle_Out()
{
    ll n, k;	cin >> n >> k;
    vector<ll> a(n);
    for(ll &i : a) cin >> i;
	   
    ll low = *max_element(all(a));
    ll hi = accumulate(all(a), 0LL);
    ll ans = 0, mid;
    while(low <= hi){
        mid = low + (hi - low) /2 ;
        if(isValid(a, k, mid)){
            ans = mid;
            hi= mid - 1;
        }else low = mid + 1;
    }
    cout << ans << nl;
}


/*_______________ Hardwork beats Talent, when Talent doesn't work hard!! _______________*/
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