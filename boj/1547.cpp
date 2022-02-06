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
//    int m;
//    cin>>m;
//    int arr[4];;
//
//    for(int i=1;i<=3;i++){
//        if(i==1) arr[i]=1;
//        else arr[i]=0;
//    }
//    for(int i=0;i<m;i++){
//        int p1,p2;
//        cin>>p1>>p2;
//        auto x = arr[p1];
//        arr[p1] = arr[p2];
//        arr[p2] = x;
//    }
//    for(int i=1;i<=3;i++){
//        if(arr[i]==1)
//            cout<<i;
//    }
//    return 0;
//}
//
