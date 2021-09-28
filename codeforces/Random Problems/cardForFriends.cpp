#include <iostream>
#include <cstdio>
#include <cmath>
#define ll long long
using namespace std;

int main(){
    ll t,w,h,n, aux, sheets;
    cin >> t;
    for(ll tests = 0; tests<t; tests++){
        cin >> w >> h >> n;
        aux = 0;
        
        while(w%2 == 0){
            w = w/2;
            aux += 1;
        }
        sheets = pow(2,aux);
        aux = 0;
        
        while(h%2 == 0){
            h = h/2;
            aux += 1;
        }
        
        sheets = sheets*pow(2,aux);

        if(sheets >= n){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
}
