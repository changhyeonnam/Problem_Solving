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
//int main(){
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);cout.tie(NULL);
//    cin>>t;
//    int test = t;
//    while(t--){
//        string str;
//        cin>>str;
//        ll sum = 0;
//        for(int i=0;i<str.size();i++){
//            sum+=(str[i]-'0');
//            sum%=9;
//        }
//        string ret="";
//        ret = (9-sum)+'0';
//        if(ret=="9"){
//            ret="0";
//            string s1="";
//            s1=str[0];
//            str[0]=ret[0];
//            str=s1+str;
//        }
//        else {
//            string s1="";
//            int pos=-1;
//            for(int i=0;i<str.size();i++){
//                if(int(str[i]-'0')<=int(ret[0]-'0'))
//                    continue;
//                else{
//                    pos=i;
//                    break;
//                }
//            }
//            if(pos==-1)
//                pos=str.size();
//
//            str.insert(pos,ret);
//        }
//        cout<<"Case #"<<test-t<<": "<<str<<endl;
//    }
//    return 0;
//}
//
