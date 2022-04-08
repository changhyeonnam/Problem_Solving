//#include<iostream>
//#include<string>
//#include<bitset>
//#include<vector>
//using namespace std;
//
//int dp[15][15];
//
//bool check_palidrom(string&str,int idx){
//    if(idx==str.size()-1-idx){
//        return true;
//    }
//    if(str[idx]==str[str.size()-idx-1])
//        return check_palidrom(str,idx+1);
//    else {
//        return false;
//    }
//}
//
//int main(){
//
//    int t,test;
//    cin>>t;
//    test = t;
//    vector<string>v;
//    for(int i=0;i<=31;i++){
//        bitset<5> bs(i);
//        string tmp  = bs.to_string();
//        if(!check_palidrom(tmp,0)) {
//            v.push_back(tmp);
//        }
//    }
//    while(t--){
//        int n;
//        cin>>n;
//        string  str;
//        cin>>str;
//        bool ans = false;
//        bool check = false;
//        for (auto pal : v) {
//            for (int i = 0; i <= str.size() - 4; i++) {
//                    int ptr = i, ptr2 = 0;
//                    while (1) {
//                        if (ptr2 == 5) {
//                            check=true;∑
//                            break;
//                        }
//                        if (str[ptr] == '?' || str[ptr] == pal[ptr2]) {
//                            ptr += 1;
//                            ptr2 += 1;
//                        }
//                        else  {
//                            check=false;
//                            break;
//                        }
//                    }
//                    if(!check)
//                        break;
//            }
//            if(check) {
//                cout<<pal<<endl;
//                break;
//            }
//        }
//        if(check){
//            cout<<"Case #"<<test-t<<": "<<"POSSIBLE"<<endl;
//        }
//        else{
//            cout<<"Case #"<<test-t<<": "<<"IMPOSSIBLE"<<endl;
//        }
//    }
//}