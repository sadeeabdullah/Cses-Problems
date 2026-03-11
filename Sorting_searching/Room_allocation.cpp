		
/* Bismillah hir rahmanir rahim */

#include <bits/stdc++.h>

//for pbds
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>

using namespace std;

//typedef __gnu_pbds::tree<int, __gnu_pbds::null_type, less<int>, __gnu_pbds::rb_tree_tag, __gnu_pbds::tree_order_statistics_node_update> ordered_set;

#define ll long long int
#define llmax LLONG_MAX
#define nl '\n'
#define rall(var) (var).rbegin(), (var).rend()
#define all(var) (var).begin(), (var).end()
const ll Mod = 1e9 + 7;

void Puzzle_Out()
{
    int n;	cin >> n;
    deque<pair<pair<int,int>,int>> guest;
    
    set<int> rooms;
    for(int i = 1; i <= n; i++){
    	int enter, exit;	cin >> enter >> exit;
    	guest.push_back({{enter, exit}, i});
    	rooms.insert(i);
    }

    sort(all(guest));
    vector<int> room_seq(n + 1);
    set<pair<int, int>> endtimes;

    int needRooms = 0;
    while(!guest.empty()){
    	auto [time, idx] = guest.front();
    	auto [enter, exit] = time;

    	if(!endtimes.empty() && endtimes.begin()-> first < enter){
    		room_seq[idx] = endtimes.begin()->second;
    		endtimes.erase(endtimes.begin());
    		endtimes.insert({exit, room_seq[idx]});
    	}else{
    		int roomNumber = *rooms.begin();
    		room_seq[idx] = roomNumber;
    		rooms.erase(roomNumber);
    		endtimes.insert({exit, roomNumber});
    	}
    	guest.pop_front();
    	needRooms = max(needRooms, (int)endtimes.size());
    }
    cout << needRooms << nl;

    for(int i = 1; i <=n; i++) cout << room_seq[i] << " ";


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