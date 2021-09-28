#include <iostream>
#include <cstdio>
#define ll long long
using namespace std;

int main(){
    ll t, n, maxResult, result, pos;
    cin >> t;
    for(ll tests = 0; tests < t; tests++){
        cin >> n;
        ll arr[n];
        
        for(ll i = 0; i < n; i++){
            cin >> arr[i];
        }
        maxResult = 0;
        
        for(ll i = 0; i < n; i++){
            pos = i;
            result = 0;
            while (pos < n){
                result += arr[pos];
                pos += arr[pos];
                maxResult = max(result, maxResult);
            }
        }
        cout << maxResult << endl;
    }
}
