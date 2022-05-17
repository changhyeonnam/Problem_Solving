//
//#include <iostream>
//#include <cstring>
//#include <string>
//#include <algorithm>
//#include <vector>
//#include <queue>
//#include <stack>
//#include <map>
//#include <set>
//#include <cmath>
//#define endl '\n'
//#define INF 1e9
//#define LINF 9223372036854775807
//using namespace std;
//
//typedef long long ll;
//typedef pair<int, int> pi;
//typedef pair<ll, ll> pl;
//typedef tuple<int, int, int> tup;
//ll gcd(ll a, ll b) { for (; b; a %= b, swap(a, b)); return a; }
//vector<pi>v[1010];
//priority_queue<int>heap[1010];
//priority_queue<pi,vector<pi>,greater<pi>> edge;
//
//int m,n,k;
//
//void dijkstra(){
//    edge.push({0,1});
//    heap[1].push(0);
//    while(!edge.empty()){
//        int now = edge.top().second;
//        int cost = edge.top().first;
//        edge.pop();
//
//        for(auto i:v[now]){
//            int nextnow = i.first;
//            int nextcost = i.second+cost;
//            if(heap[nextnow].size()<k){
//                heap[nextnow].push(nextcost);
//                edge.push({nextcost,nextnow});
//            }
//            else if(heap[nextnow].top()>nextcost){
//                heap[nextnow].pop();
//                heap[nextnow].push(nextcost);
//                edge.push({nextcost,nextnow});
//            }
//        }
//    }
//}
//
//int main(){
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);cout.tie(NULL);
//    cin>>n>>m>>k;
//
//    for(int i=0;i<m;i++){
//        int p1,p2,p3;
//        cin>>p1>>p2>>p3;
//        v[p1].push_back({p2,p3});
//    }
//    dijkstra();
//    for(int i=1;i<=n;i++){
//        if(heap[i].size()!=k)cout<<-1<<endl;
//        else cout<<heap[i].top()<<endl;
//    }
//    return 0;
//}
//
