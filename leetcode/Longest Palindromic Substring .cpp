//class Solution {
//public:
//    int dp[1000][1000];
//    int solve(string&s,int i,int start){
//        if((i==(s.size()-1-i))|| (((s.size()-1-i-i)==1)&&(s[i]==s[s.size()-1-i])))
//            return dp[start+i][start+s.size()-1-i]=1;
//        if(s[i]==s[s.size()-1-i])
//            return dp[start+i][start+s.size()-1-i]=solve(s,i+1,start);
//        else
//            return dp[start+i][start+s.size()-1-i]=-1;
//    }
//    string longestPalindrome(string s) {
//        string ans="";
//        ans+=s[0];
//        memset(dp,0,sizeof(dp));
//        for(int i=0;i<s.size();i++){
//            string tmp ="";
//            tmp+=s[i];
//            for(int j=i+1;j<s.size();j++){
//                tmp+=s[j];
//                if(dp[i][j]==-1)
//                    continue;
//                if(dp[i][j]==1||solve(tmp,0,i)==1)
//                    if(ans.size()<tmp.size())
//                        ans = tmp;
//            }
//        }
//        return ans;
//    }
//};