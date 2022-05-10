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
//priority_queue<int,vector<int>,greater<int>> pq;
//
//int n,m;
//int cnt[32001];
//vector<int>v[32001];
//bool visited[32001];
//vector<int>ans;
//int main(){
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);cout.tie(NULL);
//    cin>>n>>m;
//    for(int i=0,p1,p2;i<m;i++){
//        cin>>p1>>p2;
//        cnt[p2]+=1;
//        v[p1].push_back(p2);
//    }
//    for(int i=1;i<=n;i++){
//        if(cnt[i]==0)
//            pq.push(i);
//    }
//
//    while(!pq.empty()){
//        int cur = pq.top();
//        if(!visited[cur]) {
//            ans.push_back(cur);
//            visited[cur]=true;
//        }
//        pq.pop();
//        for(auto i:v[cur]){
//            if(cnt[i]>=1)cnt[i]-=1;
//            if(!visited[i]&&cnt[i]==0)
//            {
//                pq.push(i);
//            }
//        }
//    }
//    for(auto i : ans)cout<<i<<' ';
//    return 0;
//}
//
