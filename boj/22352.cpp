////
//// Created by changhyeonnam on 2022/05/24.
////
//
///**
// * 변화된 구역 개수가 2이상이면 No, 1이하면 YES.
// * 같은 구역이라, 변화되야 하는데 변화되지 않았을 경우 No.
// * */
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
//priority_queue<tup,vector<tup>,greater<tup>> edge;
//
//ll n,m;
//int dx[4]={1,-1,0,0};
//int dy[4]={0,0,1,-1};
//bool visited[31][31];
//
//int main(){
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);cout.tie(NULL);
////    freopen("input.txt", "r", stdin);
//    cin>>n>>m;
//    vector<int>arr[n];
//    for(int i=0;i<n;i++){
//        arr[i].resize(m);
//        for(auto&k:arr[i])
//            cin>>k;
//    }
//    vector<int>vac[n];
//    for(int i=0;i<n;i++){
//        vac[i].resize(m);
//        for(auto&k:vac[i])
//            cin>>k;
//    }
//    bool check = true;
//    int cnt = 0;
//    queue<pair<pi,int>>q;
//    for(int i=0;i<n;i++){
//        for(int j=0;j<m;j++){
//            if(visited[i][j])
//                continue;
//            if(arr[i][j]!=vac[i][j]) {
//                cnt += 1;
//                q.push({{i, j}, arr[i][j]});
//            }
//
//            while(!q.empty()){
//                auto [c,value]=q.front();
//                int cy = c.first;
//                int cx = c.second;
//                int cv = value;
//                q.pop();
//                for(int l=0;l<4;l++){
//                    int ny = cy+dy[l];
//                    int nx = cx+dx[l];
//                    if(ny<0||ny>=n||nx<0||nx>=m||visited[ny][nx]||arr[ny][nx]!=cv)
//                        continue;
//                    if(cv==arr[ny][nx] && vac[cy][cx]!=vac[ny][nx]){
//                        check = false;
//                    }
//                    visited[ny][nx]=true;
//                    q.push({{ny,nx},cv});
//                }
//            }
//        }
//    }
//
//    if(cnt>=2)
//        check=false;
//    string ans = check?"YES":"NO";
//    cout<<ans<<endl;
//    return 0;
//}
//
