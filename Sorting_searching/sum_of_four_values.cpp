		
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
void Puzzle_Out()
{
    int n, x;	cin >> n >>x;
    vi a(n);
    for(int i = 0; i < n; i++)	cin >> a[i];

    //store all possible a[i], a[j]
    set<tuple<int,int, int>> v;
    for(int i = 0; i < n; i++){
    	for(int j = i + 1; j < n; j++){
    		v.insert({a[i]+ a[j] , i , j});
    	}
    }

    for(int i = 0; i < n; i++){
    	// remove all the pair where first element is i
    	for(int j = i + 1; j < n; j++){
    		v.erase({a[i] + a[j], i , j});
    	}

	    // for every possible i where j is in i - 1 to 0;
	    // try to find the need 
	    for(int j = i - 1; j >= 0; j--){
	    	int need = x - a[i] - a[j];

	    	auto it = v.lower_bound({need, -1, -1});
	    	if(it == v.end()) continue;

	    	auto [sum, k, l] = *it;
	    	if(sum != need) continue;

	    	cout << (i + 1) << " " << (j + 1) << " " << (k  + 1) << " " << (l + 1) << nl;
	    	return;
	    }
    }

    cout << "IMPOSSIBLE" << nl;
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



// better solution ?:

        
// /* Bismillah hir rahmanir rahim */

// #include <bits/stdc++.h>

// //for pbds
// //#include <ext/pb_ds/assoc_container.hpp>
// //#include <ext/pb_ds/tree_policy.hpp>

// using namespace std;

// //typedef __gnu_pbds::tree<int, __gnu_pbds::null_type, less<int>, __gnu_pbds::rb_tree_tag, __gnu_pbds::tree_order_statistics_node_update> ordered_set;
// // 1. find_by_order(k) -> returns iterator to the kth smallest element (0 based)
// // 2. order_of_key(k)  -> returns the number of elements strictly less than k

// #define ll long long int
// #define llmax LLONG_MAX
// #define nl '\n'
// #define rall(var) (var).rbegin(), (var).rend()
// #define all(var) (var).begin(), (var).end()
// #define vi vector<int>
// #define pi pair<int,int>
// #define vpi vector<pi>
// const ll Mod = 1e9 + 7;


// /*_____________________________ Push past your Limits !! _____________________________*/
// void Puzzle_Out()
// {
//     int n, x;   cin >> n >> x;
//     vi a(n + 1);
//     vpi v;
//     for(int i = 1; i <= n; i++){
//         cin >> a[i];
//         v.push_back({a[i], i});
//     }

//     sort(all(v));
//     for(int i = 0; i < n ; i++){
//         for(int j = i + 1; j < n; j++){
//             int low = j + 1, hi = n - 1;
//             while(low < hi){
//                 int p = v[i].first, q = v[j].first, r = v[low].first, z = v[hi].first;
//                 if(p + q + r + z == x){
//                     cout << v[i].second << " " << v[j].second << " " << v[low].second << " " << v[hi].second << nl;
//                     return;
//                 }
//                 else if(p + q + r + z > x)hi--;
//                 else low++;
//             }
//         }
//     }

//     cout << "IMPOSSIBLE" << nl;
// }


// /*_______________ Hardwork beats Talent, when Talent doesn't work hard!! _______________*/
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t = 1;
//     // cin >> t;
//     for (int tc = 1; tc <= t; tc++)
//         Puzzle_Out();

//     return 0;
// }
// /* author : Sadee Abdullah */ 