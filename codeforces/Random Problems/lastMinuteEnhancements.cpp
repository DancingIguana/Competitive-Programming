#include <iostream>
#include <cstdio>
#include <map>
#include <set>
#define ll long long
using namespace std;

int main(){
    ll t, n;
    cin >> t;
    for(ll tests = 0; tests<t; tests++){
        cin >> n;
        map<ll,ll> counter;
        set<ll> notes;
        
        for(ll i = 0; i < n; i++){
            ll aux;
            cin >> aux;
            notes.insert(aux);
            counter[aux]++;
            
            if(counter[aux]>1){
                notes.insert(aux+1);
                counter[aux+1]++;
            }
        }
        cout << notes.size() << endl;
    }
}
