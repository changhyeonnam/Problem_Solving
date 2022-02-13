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
//        int arr[10000];
//        int barr[10000];
//        for(int i=0;i<n;i++) {
//            cin >> arr[i];
//            barr[i]=arr[i];
//        }
//        sort(arr,arr+n);
//        bool check = true;
//        for(int i=0;i<n;i++){
//            if(arr[i]!=barr[i]) {
//                check = false;
//                break;
//            }
//        }
//        if(!check)
//            cout<<"YES"<<endl;
//        else
//            cout<<"NO"<<endl;
//
//    }
//    return 0;
//}
//
