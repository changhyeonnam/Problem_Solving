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
//#define MOD 1e9+7
//using namespace std;
//typedef long long ll;
//typedef pair<int, int> pi;
//typedef pair<ll, ll> pl;
//typedef tuple<int, int, int> tup;
//ll gcd(ll a, ll b) { for (; b; a %= b, swap(a, b)); return a; }
//
//int n,m;
//int dx[4]={1,-1,0,0};
//int dy[4]={0,0,1,-1};
//bool visited[10][10][10][10];
//vector<vector<char>>v;
//
//int main(){
//    ios_base::sync_with_stdio(0); cin.tie(0);
//#ifndef ONLINE_JUDGE
//    freopen("./input.txt", "r", stdin);
//#endif
//
//    cin>>n>>m;
//    v.resize(n);
//    int cry,crx,cby,cbx,hole_y,hole_x;
//    for(int i=0;i<n;i++){
//        string str;
//        cin>>str;
//        for(int j=0;j<str.size();j++){
//            if(str[j]=='R'){
//                cry=i,crx=j;
//            }
//            if(str[j]=='B'){
//                cby=i,cbx=j;
//            }
//            if(str[j]=='O'){
//                hole_y=i,hole_x=j;
//            }
//            v[i].push_back(str[j]);
//        }
//    }
//    int ans =-1;
//    visited[cry][crx][cby][cbx]=true;
//    queue<pair<pair<pi,pi>,int>>q;
//    q.push({{{cry,crx},{cby,cbx}},0});
//    while(!q.empty()){
//        auto r= q.front().first.first;
//        auto b = q.front().first.second;
//        int ry=r.first,rx=r.second,by=b.first,bx=b.second;
//        int cost  = q.front().second;
//        q.pop();
//        if(cost>=10)
//            continue;
//        for(int i=0;i<4;i++){
//            int nry=ry,nrx=rx, nby=by,nbx=bx;
//            int rcnt=0,bcnt=0;
//            while(1){
//                nry = nry+dy[i],nrx = nrx+dx[i];
//                rcnt+=1;
//                if(nry<0 || nry>=n || nrx<0 || nrx>=m) {
//                    break;
//                }
//                if(v[nry][nrx]=='#') {
//                    nry-=dy[i], nrx-=dx[i];
//                    break;
//                }
//                if(nry==hole_y && nrx==hole_x)
//                    break;
//            }
//            while(1){
//                nby = nby+dy[i],nbx = nbx+dx[i];
//                bcnt+=1;
//                if(nby<0 || nby>=n || nbx<0 || nbx>=m) {
//                    break;
//                }
//                if(v[nby][nbx]=='#') {
//                    nby-=dy[i], nbx-=dx[i];
//                    break;
//                }
//                if(nby==hole_y && nbx==hole_x)
//                    break;
//            }
//            if(v[nby][nbx]=='O')
//                continue;
//            if(v[nry][nrx]=='O')
//            {
//                cout<<cost+1<<endl;
//                return 0;
//            }
//            if(nry==nby && nrx==nbx){
//                if(rcnt>bcnt){
//                    nry-=dy[i];
//                    nrx-=dx[i];
//                }
//                else{
//                    nby-=dy[i];
//                    nbx-=dx[i];
//                }
//            }
//            if(visited[nry][nrx][nby][nbx])
//                continue;
//            visited[nry][nrx][nby][nbx]=true;
//            q.push({{{nry,nrx},{nby,nbx}},cost+1});
//        }
//    }
//    cout<<ans<<endl;
//    return 0;
//
//}
