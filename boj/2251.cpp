//
//// Created by changhyeonnam on 2022/01/19.
//
//
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
//typedef tuple<int, int, int> tup;
//ll gcd(ll a, ll b) { for (; b; a %= b, swap(a, b)); return a; }
//priority_queue<tup,vector<tup>,greater<tup>> edge;
//
//int t;
//queue<tup>q;
//bool visited[201][201][201];
//int arr[3];
//int carr[3];
//int main(){
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);cout.tie(NULL);
//
//    cin>>arr[0]>>arr[1]>>arr[2];
//    q.push({0,0,arr[2]});
//    visited[0][0][200]=true;
//    memset(visited,false,sizeof(visited));
//    while(!q.empty()){
//        auto cur = q.front();
//        auto [a,b,c] = cur;
//        q.pop();
//
//        if(arr[1]>=b+a){
//            if(!visited[0][b+a][c]){
//                q.push({0,b+a,c});
//                visited[0][b+a][c]=true;
//            }
//        }
//        if(arr[1]<b+a){
//            if(!visited[b+a-arr[1]][arr[1]][c]) {
//                q.push({b + a - arr[1], arr[1], c});
//                visited[b+a-arr[1]][arr[1]][c]=true;
//            }
//        }
//        if(arr[2]>=c+a){
//            if(!visited[0][b][c+a]) {
//                q.push({0, b, c + a});
//                visited[0][b][c+a]=true;
//            }
//        }
//        if(arr[2]<c+a){
//            if(!visited[c+a-arr[2]][b][arr[2]]) {
//                q.push({c + a - arr[2], b, arr[2]});
//                visited[c+a-arr[2]][b][arr[2]]=true;
//            }
//        }
//        if(arr[0]>=b+a){
//            if(!visited[b+a][0][c]) {
//                q.push({b + a, 0, c});
//                visited[b+a][0][c]=true;
//            }
//        }
//        if(arr[0]<b+a){
//            if(!visited[arr[0]][b+a-arr[0]][c]) {
//                q.push({arr[0], b + a - arr[0], c});
//                visited[arr[0]][b+a-arr[0]][c]=true;
//            }
//        }
//        if(arr[2]>=c+b){
//            if(!visited[a][0][b+c]) {
//                q.push({a, 0, b + c});
//                visited[a][0][b+c]=true;
//            }
//        }
//        if(arr[2]<c+b){
//            if(!visited[a][b+c-arr[2]][arr[2]]){
//                q.push({a,b+c-arr[2],arr[2]});
//                visited[a][b+c-arr[2]][arr[2]]=true;
//            }
//        }
//
//        if(arr[1]>=b+c){
//            if(!visited[a][b+c][0]) {
//                q.push({a, b + c, 0});
//                visited[a][b+c][0]=true;
//            }
//        }
//        if(arr[1]<b+c){
//            if(!visited[a][arr[1]][b+c-arr[1]]) {
//                q.push({a, arr[1], b + c - arr[1]});
//                visited[a][arr[1]][b+c-arr[1]]=true;
//            }
//        }
//        if(arr[0]>=a+c){
//            if(!visited[a+c][b][0]) {
//                q.push({a + c, b, 0});
//                visited[a+c][b][0]=true;
//            }
//        }
//        if(arr[0]<a+c){
//            if(!visited[arr[0]][b][a+c-arr[0]]) {
//                q.push({arr[0], b, a + c - arr[0]});
//                visited[arr[0]][b][a+c-arr[0]]=true;
//            }
//        }
//    }
//    set<int>st;
//
//    for(int i=0;i<=200;i++){
//        for(int j=0;j<=200;j++){
//            if(visited[0][i][j])
//                st.insert(j);
//        }
//    }
//    for(auto i:st)cout<<i<<' ';
//
//    return 0;
//}
//
