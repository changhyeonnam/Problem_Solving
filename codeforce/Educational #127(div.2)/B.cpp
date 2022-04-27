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
//int arr[200000];
//int n;
//
//int main(){
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);cout.tie(NULL);
//    cin>>t;
//    while(t--){
//        memset(arr,0,sizeof(arr));
//        cin>>n;
//        for (int i = 0; i < n; i++) {
//            cin >> arr[i];
//        }
//        bool ans = true;
//        if(n==1){cout<<"YES"<<endl; continue;}
//        else {
//
//            if ((arr[n - 1]-1) - (arr[0] + 1) + 1 > n) ans = false;
//            if (ans)cout << "YES" << endl;
//            else cout << "NO" << endl;
//        }
//
//    }
//    return 0;
//}
//
