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
////
//// Created by changhyeonnam on 2021/07/12.
////
//
//#include <iostream>
//#include <cstring>
//#include <string>
//
//long long psum[1000001];
//long long pdiv[1001];
//long long n,m;
//
//int main(){
//    ios::sync_with_stdio(false);
//    cin.tie(NULL);
//    cin>>n>>m;
//    for(int i=1;i<=n;i++){
//        int tmp;
//        cin>>tmp;
//        psum[i]+=psum[i-1]+tmp;
//        pdiv[psum[i]%m]+=1;
//    }
//    ll ans = pdiv[0];
//    for(int i=0;i<m;i++){
//        ans += (pdiv[i])*(pdiv[i]-1)/2;
//    }
//
//    cout<<ans;
//    return 0;
//}