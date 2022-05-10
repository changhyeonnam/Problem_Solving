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
//        int cnt_z=0;
//        map<int,int>mp;
//        for(int i=0;i<n;i++) {
//            cin >> arr[i];
//            if(arr[i]==0)cnt_z+=1;
//            mp[arr[i]]+=1;
//        }
//        bool check = false;
//        for(int i=1;i<=100;i++){
//            if(mp.find(i)!=mp.end()){
//                if(mp[i]>=2){
//                    check = true;
//                    break;
//                }
//            }
//        }
//        if(cnt_z>=1){
//            cout<<n-cnt_z<<endl;
//        }
//        else if(check){
//            cout<<n<<endl;
//        }
//        else cout<<n+1<<endl;
//
//
//    }
//    return 0;
//}
//
