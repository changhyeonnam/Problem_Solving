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
//
//
//int main(){
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);cout.tie(NULL);
//    cin>>t;
//    while(t--){
//        int a,b,c;
//        cin>>a>>b>>c;
//        vector<int>v;
//        v.push_back(a);v.push_back(b),v.push_back(c);
//        sort(v.begin(),v.end(),greater<int>());
//        a= v[0];b=v[1];c=v[2];
//        int ans = 0;
//        if(a>0) {
//            ans += 1;
//            a -= 1;
//        }
//        if(b>0){
//            ans+=1;
//            b-=1;
//        }
//        if(c>0){
//            ans+=1;
//            c-=1;
//        }
//        if(a&&c){
//            a-=1;
//            c-=1;
//            ans+=1;
//        }
//        if(a&&b){
//            a-=1;
//            b-=1;
//            ans+=1;
//        }
//        if(b&&c){
//            b-=1;
//            c-=1;
//            ans+=1;
//        }
//        if(a>0 && b>0 && c>0)
//            ans+=1;
//        cout<<ans<<endl;
//    }
//    return 0;
//}
//
