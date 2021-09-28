#include <iostream>
#include <cstdio>
using namespace std;
#define ll long long

int main(){
    ll n, mySum = 0;
    cin >> n;
    for (int i = 1; i < n; i++){
        ll a;
        cin >> a;
        mySum += a;
    }
    
    cout << n*(n+1)/2 - mySum;
}
