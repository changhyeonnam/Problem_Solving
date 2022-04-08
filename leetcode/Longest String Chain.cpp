////
//// Created by changhyeonnam on 2022/04/08.
////
//
//class Solution {
//public:
//    int longestStrChain(vector<string>& words) {
//        vector<pair<int,string>> v;
//        int answer=0;
//        for(auto i:words){
//            v.push_back({i.size(),i});
//        }
//        sort(v.begin(),v.end());
//        map<string,int>dp;
//        for(auto str:v){
//            string cur = str.second;
//            dp[cur]=1;
//            for(int i=0;i<cur.size();i++){
//                string tmp = cur;
//                tmp.erase(tmp.begin()+i);
//
//                if(dp.find(tmp)!=dp.end()){
//                    dp[cur] = max(dp[cur],dp[tmp]+1);
//                }
//            }
//            answer = max(answer,dp[cur]);
//
//        }
//        return answer;
//
//    }
//};
//
//// words
//// abc -> aba_c -> cba is not
//// according to length, we should sort these word vector.
//// 10^3 -> tiem
//// we can use dp, and for loop.
//// dp[i][j] : ith to jth is precedder. ->k to i is also
//// k to j is also chain.
