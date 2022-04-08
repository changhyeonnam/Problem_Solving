//#include<iostream>
//#include<string>
//#include<cstring>
//using namespace std;
//
//int dp[15][15];
//
//int check_palidrom(string&str,int idx,int d){
//    if(idx+4>str.size()-d)
//        return 0;
//    if(idx==str.size()-1-d){
//        return 1;
//    }
//    if(dp[idx][str.size()-d-1]!=-1)
//        return dp[idx][str.size()-d-1];
//    if(str[idx]==str[str.size()-d-1])
//        dp[idx][str.size()-d-1]=check_palidrom(str,idx+1,d+1);
//    else {
//        dp[idx][str.size() - d-1] = 0;
//    }
//    return dp[idx][str.size()-d-1];
//}
//
//bool solve(string&str,int idx){
//    if(idx==str.size()){
//        memset(dp,-1,sizeof(dp));
//        bool check = false;
//        for(int i=0;i<str.size()-4;i++){
//            check_palidrom(str,i,0);
//            for(int j=i+4;j<str.size();j++){
//                if(dp[i][j]==0)
//                    continue;
//                else{
//                    check=true;
//                    break;
//                }
//            }
//         if(check)
//             break;
//        }
//        if(!check)
//            return true;
//        else
//            return false;
//    }
//
//    bool ret;
//    if(str[idx]=='?'){
//        str[idx]='1';
//        ret=solve(str,idx+1);
//        if(ret)
//            return ret;
//        str[idx]='0';
//        ret = solve(str,idx+1);
//        if(ret)
//            return ret;
//        str[idx]='?';
//    }
//    else{
//        ret = solve(str,idx+1);
//    }
//    return  ret;
//}
//
//int main(){
//    int t,test;
//    cin>>t;
//    test = t;
//    while(t--){
//        int n;
//        cin>>n;
//        string  str;
//        cin>>str;
//        bool ans = solve(str,0);
//        if(ans){
//            cout<<"Case #"<<test-t<<": "<<"POSSIBLE"<<endl;
//        }
//        else{
//            cout<<"Case #"<<test-t<<": "<<"IMPOSSIBLE"<<endl;
//        }
//    }
//}