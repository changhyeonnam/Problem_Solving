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
//        int arr[100000];
//        ll ans =0;
//        int cnt =0;
//        bool check = true;
//        for(int i=0;i<n;i++) {
//            cin >> arr[i];
//            if (i == 0 || i == n - 1)
//                continue;
//            if (arr[i] % 2 == 1) {
//                ans += (arr[i] + 1);
//                cnt += 1;
//            }
//            else
//                ans+=arr[i];
//        }
//        for(int i=1;i<n-1;i++){
//            if(arr[i]!=1)
//            {
//                check=false;
//                break;
//            }
//        }
//        if(cnt==1 && n==3)
//            cout<<-1<<endl;
//        else if(check)
//            cout<<-1<<endl;
//        else
//            cout<<ans/2<<endl;
//    }
//    return 0;
//}
//
