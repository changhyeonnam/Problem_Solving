////
//// Created by changhyeonnam on 2022/05/18.
////
//
//#include <iostream>
//#include <queue>
//
//#define endl '\n'
//using namespace std;
//
//int main(){
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);cout.tie(NULL);
//    int n;
//    cin>>n;
//    priority_queue<int,vector<int>,greater<>> pq;
//    priority_queue<int,vector<int>> pq2;
//    for(int i=0,p;i<n;i++){
//        if(i==0){
//            cin>>p;
//            cout<<p<<endl;
//            pq2.push(p);
//            continue;
//        }
//        else {
//            cin >> p;
//            if (pq2.size() > pq.size())
//                pq.push(p);
//            else
//                pq2.push(p);
//        }
//
//        if(pq2.top()>pq.top()){
//            int tmp = pq2.top();
//            pq2.pop();
//            int tmp2 = pq.top();
//            pq.pop();
//            pq.push(tmp);
//            pq2.push(tmp2);
//        }
//        cout<<pq2.top()<<endl;
//
//    }
//}