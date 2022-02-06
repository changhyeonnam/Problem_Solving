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
//        int n,k;
//        cin>>n>>k;
//        if(n==1 && k==1){
//            cout<<"YES"<<endl;
//            cout<<1<<endl;
//            continue;
//        }
//        if(k==1){
//            cout<<"YES"<<endl;
//            for(int i=0;i<n;i++)
//                cout<<i+1<<endl;
//            continue;
//        }
//        if(n%2==0){
//            cout<<"YES"<<endl;
//            for(int i=0;i<n;i++){
//                int st;
//                if(i%2==0)
//                    st = ((i+1)/2)*k;
//                else
//                    st = (i/2)*k;
//                for(int j=0;j<k;j++) {
//                    if(i%2==0) {
//                        cout << 2 * (st+1) - 1 <<" ";
//                    }
//                    else{
//                        cout << 2 * (st+1) << " ";
//                    }
//                    st+=1;
//                }
//                cout<<endl;
//            }
//            continue;
//        }
//        cout<<"NO"<<endl;
//
//    }
//    return 0;
//}
//
