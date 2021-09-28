#include <iostream>
#include <cstdio>
#include <set>
#define ll long long
using namespace std;

int main(){
    ll t, n;
    cin >> t;
    for(ll tests = 0; tests < t; t++){
        cin >> n;
        ll positions[n];
        set<ll> areas;
        
        for(ll i = 0; i < n; i++){
            cin >> positions[i];
        }
        
        for(ll i = 0; i <n-1; i++){
            for(ll j = i+1; j < n; j++){
                areas.insert(((positions[j]-positions[i])));
            }
        }
        cout << areas.size() << endl;
    }
}
