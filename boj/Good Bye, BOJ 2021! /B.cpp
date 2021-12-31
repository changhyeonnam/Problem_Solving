
#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <cmath>
#define endl '\n'
#define INF 1e9
#define LINF 9223372036854775807
using namespace std;

typedef long long ll;
typedef pair<int, int> pi;
typedef tuple<int, int, int> tup;
ll gcd(ll a, ll b) { for (; b; a %= b, swap(a, b)); return a; }
priority_queue<tup,vector<tup>,greater<tup>> edge;

int t;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        bool check = false;

        if(n%3==2||n%3==0) check=true;
        else {

        }

        if (check)
            cout<<"TAK"<<endl;
        else
            cout<<"NIE"<<endl;
    }
    return 0;
}

// 약수중에 합이 3의배수이면 TAK

