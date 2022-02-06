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
//        int n;
//        cin>>n;
//        int arr[51];
//        for(int i=1;i<=n;i++) {
//            cin>>arr[i];
//        }
//        set<int>s;
//        s.clear();
//        for(int i=1;i<=n;i++){
//            while(1){
//                if(arr[i]<1)
//                    break;
//                if(arr[i]>n||s.find(arr[i])!=s.end())
//                {
//                    arr[i]/=2;
//                }
//                else if(s.find(arr[i])==s.end()) {
//                    s.insert(arr[i]);
//                    break;
//                }
//            }
//        }
//        int cnt=0;
//        bool check = true;
//        for(int i=1;i<=n;i++){
//            if(s.find(i)!=s.end())
//                continue;
//            else
//            {
//                check = false;
//            }
//        }
//        if(check)
//            cout<<"YES"<<endl;
//        else
//            cout<<"NO"<<endl;
//    }
//    return 0;
//}
//
