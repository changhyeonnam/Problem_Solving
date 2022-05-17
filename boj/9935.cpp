////
//// Created by changhyeonnam on 2022/05/18.
////
//
//#include<iostream>
//#include <string>
//#include<stack>
//#include<vector>
//using namespace std;
//
//int main(){
//    string str;
//    cin>>str;
//    string b;
//    cin>>b;
//    vector<char>v;
//    for(int i=0;i<str.size();i++){
//        v.push_back(str[i]);
//        if(v.size()>=b.size()) {
//            string tmp ="";
//            for (int j = v.size() - b.size() ; j < v.size(); j++) {
//                tmp+=v[j];
//            }
//            if(tmp==b){
//                for(int j=0;j<b.size();j++){
//                    v.pop_back();
//                }
//            }
//        }
//
//    }
//    string ans ="";
//    for(auto c:v)ans+=c;
//    if(ans.empty())
//    {
//        cout<<"FRULA"<<endl;
//        return 0;
//    }
//    cout<<ans<<endl;
//
//}