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
//        int sum=0;
//        for(auto i:str){
//            sum+=(i-'0');
//        }
//        int x = 9-(sum%9);
//        if(x==9){
//            string tmp;
//            for(int i=1;i<str.size();i++){
//                tmp+=str[i];
//            }
//            str = str[0];
//            str+='0';
//            str+=tmp;
//        }
//        else{
//            string tmp;
//            bool check = false;
//            for(int i=0;i<str.size();i++){
//                if(check)
//                {
//                    tmp+=str[i];
//                    continue;
//                }
//                if((str[i]-'0')>x){
//                    check = true;
//                    tmp+=char(x+'0');
//                    tmp+=str[i];
//                    continue;
//                }
//                else{
//                    tmp+=str[i];
//                }
//            }
//            if(!check)
//                tmp+=char(x+'0');
//            str = tmp;
//        }
//        cout<<"Case #"<<test-t<<": "<<str<<endl;
//    }
//    return 0;
//}
//
