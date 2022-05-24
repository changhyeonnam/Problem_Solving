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
//int t,n,m;
//char arr[5][5];
//int main(){
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);cout.tie(NULL);
//    cin>>t;
//    while(t--){
//        cin>>n>>m;
//        vector<pi>ro;
//        for(int i=0;i<n;i++){
//            string str;
//            cin>>str;
//            for(int j=0;j<m;j++) {
//                arr[i][j] = str[j];
//                if(arr[i][j]=='R')
//                    ro.push_back({i,j});
//            }
//        }
//        bool check = false;
//        for(int i=0;i<ro.size();i++){
//            bool tmp = true;
//            auto [cy,cx]=ro[i];
//            int c = i;
//            int dx = cx;
//            int dy = cy;
//            for(int j=0;j<ro.size();j++){
//                if(c==j)
//                    continue;
//                auto [ny,nx]=ro[j];
//                nx-=dx;
//                ny-=dy;
//                if(nx<0||ny<0||nx>=m||ny>=n){
//                    tmp=false;
//                    break;
//                }
//            }
//            if(tmp)
//            {
//                check=true;
//                break;
//            }
//        }
//        if(check)
//            cout<<"YES"<<endl;
//        else
//            cout<<"NO"<<endl;
//
//
//    }
//    return 0;
//}
//
