////
//// Created by changhyeonnam on 2021/07/17.
////
//
//#include <iostream>
//#include <cstring>
//#include <string>
//#include <vector>
//#include<algorithm>
//
//using namespace std;
//typedef long long ll;
//ll n;
//ll ans = 9876543210;
//int main(){
//    ios::sync_with_stdio(false);
//    cin.tie(NULL);
//    cin>>n;
//    vector<ll>v(n);
//    for(auto&i:v)
//        cin>>i;
//    ll ptr1=0,ptr2=n-1;
//    ll anw1=0,anw2=0;
//    while(1){
//        if(ptr1!=ptr2 && abs(v[ptr1]+v[ptr2])<ans){
//            ans = abs(v[ptr1]+v[ptr2]);
//            anw1=ptr1;
//            anw2=ptr2;
//        }
//        if(ptr1==ptr2){
//            break;
//        }
//
//        if(v[ptr1]+v[ptr2] < 0) {
//            ptr1 += 1;
//            continue;
//        }
//        if(v[ptr1]+v[ptr2] >= 0) {
//            ptr2 -= 1;
//            continue;
//        }
//    }
//    cout<<v[anw1]<<' '<<v[anw2]<<endl;
//    return 0;
//}