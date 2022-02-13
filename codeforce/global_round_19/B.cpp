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
//int main(){
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);cout.tie(NULL);
//    cin>>t;
//    while(t--){
//        int n;
//        cin>>n;
//        int arr[100];
//        for(int i=0;i<n;i++){
//            cin>>arr[i];
//        }
//        ll ans = 0;
//
//        for(int i=0;i<n;i++){
//            vector<int>v;
//            int cnt=0;
//
//            for(int j=i;j<n;j++){
//                v.push_back(arr[j]);
//                if(arr[j]==0)
//                    cnt+=1;
//                ans+=v.size()+cnt;
//            }
//        }
//        cout<<ans<<endl;
//    }
//    return 0;
//}
//
