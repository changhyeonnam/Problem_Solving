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
//ll n,t,m;
//
//int main(){
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);cout.tie(NULL);
//    cin >> t;
//    while(t--){
//        cin>>n>>m;
//        vector<int>A(n);
//        vector<int>B(m);
//        for(auto&i :A)
//            cin>>i;
//        for(auto&i :B)
//            cin>>i;
//
//        sort(A.begin(),A.end());
//        sort(B.begin(),B.end());
//        vector<int>ans(n);
//
//        int ptr_b=0;
//
//        for(int i=0;i<n;i++){
//            int ptr_a = i;
//            while(ptr_b<m && A[ptr_a]>B[ptr_b]){
//                ans[ptr_a]+=1;
//                ptr_b+=1;
//            }
//            if(ptr_a!=n-1)
//                ans[ptr_a+1]=ans[ptr_a];
//
//        }
//        int sum=0;
//        for(auto i:ans)
//            sum+=i;
//        cout<<sum<<endl;
//    }
//
//
//    return 0;
//}
//
//// 2 7 13
//// 11 103 215 290