#include <iostream>
#include <cstdio>
#define ll long long
using namespace std;

int main(){
    ll t;
    int n, ones, twos, onePairs;
    cin >> t;
    for(ll tests = 0; tests < t; tests++){
        cin >> n;
        ones = 0;
        twos = 0;
        for(int i = 0; i < n; i++){
            int aux;
            cin >> aux;
            if(aux == 1){
                ones += 1;
            }if(aux == 2){
                twos += 1;
            }
        }
        if(ones % 2 == 0){
            onePairs = ones / 2;
            if(onePairs >= twos){
                cout << "YES" << endl;
            }else if(twos % 2 != 0){
                cout << "NO" << endl;
            }else if (twos % 2 == 0){
                cout << "YES" << endl;
            }
        }else{
            cout << "NO" << endl;
        }
        
    }
}
