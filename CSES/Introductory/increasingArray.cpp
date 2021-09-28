#include <iostream>
#include <cstdio>
using namespace std;
#define ll long long

int main(){
    ll n, ans, turns, dif, a;
    cin >> n >> ans;
    turns = 0;
    for(int i = 1; i<n; i++){
        cin >> a;
        dif = ans - a;
        //cout << ans << "-" << a << "=" << dif<<  "\n";
        
        if (dif > 0){
            turns += dif;
            ans = a+dif;
        }else{
            ans = a;
        }
    }
    cout << turns;
}
