#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
const int INF = 1e9 + 7;

using pii = pair<int, int>;
const int ORDER_COUNT = 1000;
const int PICK_UP = 50;
const int CENTER = 400;

int dist(pii x, pii y){
    return abs(x.fi - y.fi) + abs(x.se - y.se);
}

pair<vector<int>, vector<pii>> solve(vector<pair<pii, pii>> &abcd){
    vector<int> order;
    vector<pii> res;
    res.emplace_back(CENTER, CENTER);

    int ok = 1000, ng = 0;

    while(abs(ok - ng) > 1){
        int mid = (ok + ng) / 2;
        int count = 0;
        for(int i = 0; i < ORDER_COUNT; i++){
            int dist_rest = dist({CENTER, CENTER}, abcd[i].fi);
            int dist_dest = dist({CENTER, CENTER}, abcd[i].se);
            if(dist_rest <= mid && dist_dest <= mid){
                count++;
            }
        }

        if(count >= PICK_UP) ok = mid;
        else ng = mid;
    }

    int DIST_MAX = ok;

    set<int> candidates_rest, candidates_dest;
    for(int i = 0; i < ORDER_COUNT; i++){
        int dist_rest = dist({CENTER, CENTER}, abcd[i].fi);
        int dist_dest = dist({CENTER, CENTER}, abcd[i].se);
        if(dist_rest <= DIST_MAX && dist_dest <= DIST_MAX){
            candidates_rest.insert(i);
        }
    }

    pii current = {CENTER, CENTER};
    
    for(int i = 0; i < PICK_UP * 2; i++){
        int min_dist = INF;
        int min_id = 0;
        bool is_restaurant = true;

        for(int i : candidates_rest){
            if(dist(current, abcd[i].fi) < min_dist){
                min_dist = dist(current, abcd[i].fi);
                min_id = i;
            }
        }

        for(int i : candidates_dest){
            if(dist(current, abcd[i].se) < min_dist){
                min_dist = dist(current, abcd[i].se);
                min_id = i;
                is_restaurant = false;
            }
        }

        
        if(is_restaurant){
            order.push_back(min_id);
            res.push_back(abcd[min_id].fi);
            current = abcd[min_id].fi;
            candidates_dest.insert(min_id);
            if((int)order.size() >= PICK_UP) candidates_rest.clear();
            else candidates_rest.erase(min_id);
        }
        else{
            res.push_back(abcd[min_id].se);
            current = abcd[min_id].se;
            candidates_dest.erase(min_id);
        }
    }
    
    res.emplace_back(CENTER, CENTER);
    return make_pair(order, res);
}

int main(){
    vector<pair<pii, pii>> abcd(ORDER_COUNT);
    for(int i = 0; i < ORDER_COUNT; i++){
        cin >> abcd[i].fi.fi >> abcd[i].fi.se;
        cin >> abcd[i].se.fi >> abcd[i].se.se;
    }

    vector<int> order;
    vector<pii> ans;
    tie(order, ans) = solve(abcd);
    int m = order.size(), n = ans.size();

    cout << m << " ";
    for(int i = 0; i < m; i++) cout << order[i] + 1 << " \n"[i == m - 1];
    cout << n << " ";
    for(int i = 0; i < n; i++) cout << ans[i].fi << " " << ans[i].se << " \n"[i == n - 1];
    return 0;
}