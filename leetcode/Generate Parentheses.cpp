//class Solution {
//public:
//    vector<string>ans;
//    void solve(string&s,int op, int cls,int opp){
//        if(op==0 && cls==0){
//            ans.push_back(s);
//            return;
//        }
//        if(op>=1){
//            string tmp="";
//            tmp = s;
//            tmp+='(';
//            solve(tmp,op-1,cls,opp+1);
//
//        }
//        if(opp>0){
//            string tmp="";
//            tmp = s;
//            tmp+=")";
//            solve(tmp,op,cls-1,opp-1);
//        }
//    }
//    vector<string> generateParenthesis(int n) {
//        string tmp="";
//        solve(tmp,n,n,0);
//        return ans;
//    }
//};