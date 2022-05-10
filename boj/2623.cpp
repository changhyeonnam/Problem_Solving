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
//priority_queue<tup,vector<tup>,greater<tup>> edge;
//
//int n,m;
//int cnt[1001];
//vector<int>v1[1001];
//vector<vector<int>>v;
//bool visited[1001];
//vector<int>ans;
//
//bool dfs(int x){
//    visited[x]=true;
//    for(auto i :v1[x]){
//        if(cnt[i]==0)
//            return false;
//        if(cnt[i]>=1)
//            cnt[i]-=1;
//        if(cnt[i]==0 && !visited[i]){
//            ans.push_back(i);
//            dfs(i);
//        }
//    }
//    return true;
//}
//int main(){
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);cout.tie(NULL);
//    cin>>n>>m;
//    v.resize(m);
//    memset(cnt,0,sizeof(cnt));
//    memset(visited,false,sizeof(visited));
//    for(int i=0;i<m;i++){
//        int k;
//        cin>>k;
//        v[i].resize(k);
//        for(int j=0;j<k;j++){
//            cin>>v[i][j];
//            if(j==0)continue;
//            cnt[v[i][j]]+=1;
//        }
//        for(int j=k-1;j>=1;j--){
//            v1[v[i][j-1]].push_back(v[i][j]);
//        }
//    }
//    queue<int>q;
//    for(int i=1;i<=n;i++){
//        if(cnt[i]==0)
//            q.push(i);
//    }
//
//    while(!q.empty()){
//        int cur =q.front();
//        q.pop();
//        if (!visited[cur]&&cnt[cur] == 0) {
//            ans.push_back(cur);
//            for(int i:v1[cur]){
//                if(cnt[i]==0)
//                    continue;
//                if(cnt[i]>=1)
//                    cnt[i]-=1;
//                if(cnt[i]==0 && !visited[i]){
//                    q.push(i);
//                }
//            }
//        }
//    }
//    if(ans.size()!=n)cout<<0<<endl;
//    else{
//    for(auto i:ans)cout<<i<<endl;
//    }
//    return 0;
//}
//
