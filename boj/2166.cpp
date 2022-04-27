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
//typedef pair<ll,ll>pl;
//typedef tuple<int, int, int> tup;
//ll gcd(ll a, ll b) { for (; b; a %= b, swap(a, b)); return a; }
//priority_queue<tup,vector<tup>,greater<tup>> edge;
//
//int n;
//
//double outer_product(pl a, pl b){
//    return a.first*b.second - a.second*b.first;
//}
//
//int main(){
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);cout.tie(NULL);
//    cin>>n;
//    vector<pi>v;
//    for(int i=0;i<n;i++){
//        int x,y;
//        cin>>x>>y;
//        v.push_back({x,y});
//    }
//    double ans = 0;
//    int x = v[0].first,y=v[0].second;
//    for(int i=1;i<n-1;i++){
//        pl a ={v[i].first-x,v[i].second-y};
//        pl b = {v[i+1].first-x,v[i+1].second-y};
//        ans += (outer_product(a,b)/2.0);
//    }
//    printf("%.1lf",abs(ans));
//
//    return 0;
//}
//
