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
//int t,n;
//
//int main(){
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);cout.tie(NULL);
//    cin>>t;
//    while(t--){
//        string str;
//        cin>>str;
//        bool check = false;
//        bool ans = true;
//        int cnt = 0;
//        for(int i=0;i<str.size();i++){
//            if(str[i]=='a'){
//                if(check && cnt==1)
//                {
//                    break;
//                }
//                else if(!check)
//                    cnt+=1;
//                else
//                {
//                    check=false;
//                    cnt=1;
//                }
//            }
//            else if(str[i]=='b'){
//                if(!check && cnt==1)
//                {
//                    break;
//                }
//                else if(check)
//                    cnt+=1;
//                else
//                {
//                    check=true;
//                    cnt=1;
//                }
//            }
//        }
//        if(cnt==1)ans=false;
//        if(ans)cout<<"YES"<<endl;
//        else cout<<"NO"<<endl;
//    }
//    return 0;
//}
//
