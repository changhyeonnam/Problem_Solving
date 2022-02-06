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
//    int n;
//    cin>>n;
//    int arr[1000];
//    for(int i=0;i<n;i++){
//        cin>>arr[i];
//    }
//    int st = arr[0];
//    int en = arr[0];
//    int ans = 0;
//    for(int i=1;i<n;i++){
//        if(en<arr[i]){
//            en = arr[i];
//            ans = max(ans,en-st);
//        }
//        else{
//            st = arr[i];
//            en = arr[i];
//        }
//    }
//    cout<< ans;
//    return 0;
//}
//
