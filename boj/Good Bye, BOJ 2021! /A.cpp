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
//    bool arr[10001];
//    memset(arr,false,sizeof(arr));
//    arr[1]=true;
//    for(int i = 2; i <= sqrt(10000); i++){
//        if(arr[i]==true) continue;
//        for(int j = i + i; j <= 10000; j += i)
//            arr[j] = true;
//    }
//    vector<ll>v;
//    for(int i=2;i<=10000;i++){
//        if(arr[i]==true)continue;
//        v.push_back(i);
//    }
//    for(int i=0;i<v.size()-1;i++){
//        if(v[i]*v[i+1]>n)
//        {
//            cout<<v[i]*v[i+1]<<endl;
//            return 0;
//        }
//    }
//
//}
//
