////
//// Created by changhyeonnam on 2022/05/20.
////
//
//#include<iostream>
//#include<vector>
//#include<queue>
//using namespace std;
//
//int n;
//vector<int>v[300001];
//bool visited[300001];
//
//int main(){
//    cin>>n;
//    for(int i=0,p1,p2;i<n-1;i++){
//        cin>>p1>>p2;
//        v[p1].push_back(p2);
//        v[p2].push_back(p1);
//    }
//    long long dig=0,geu=0;
//
//    queue<int>q;
//    q.push(1);
//    visited[1]=true;
//
//    while(!q.empty()){
//        int cur = q.front();
//        if(v[cur].size()>=3){
//            long long k = v[cur].size();
//            geu += (k-1)*(k-2)*(k)/6;
//        }
//        q.pop();
//        for(auto c : v[cur]){
//            if(visited[c])
//                continue;
//            dig+=(v[cur].size()-1)*(v[c].size()-1);
//            visited[c]= true;
//            q.push(c);
//        }
//    }
//
//
//    if(dig> geu*3)
//        cout<<'D';
//    else if(dig<geu*3)
//        cout<<'G';
//    else
//        cout<<"DUDUDUNGA"<<endl;
//
//
//}