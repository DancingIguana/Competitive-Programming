#include <iostream>
#include <cstdio>
#include<algorithm>
#include <vector>

#define ll long long
using namespace std;

int main(){
    int t, n;
    ll number,aux;
    cin >> t;
    
    for(int tests = 0; tests < t; tests++){
        cin >> n;
        
        vector<ll> v1;
        vector <ll> v2;
        for(int i = 0; i < n; i++){
            cin >> aux;
            v1.push_back(aux);
        }
        
        
        sort(v1.begin(), v1.end());
        
        for(int i = 0; i<v2.size(); i++){
            cout << ":)";
            cout << v2[i];
        }
        
        number = v1[0]*v1[n-1];
        
        for(int i = 2; i*i<=number; i++){
            if(number % i == 0){
                v2.push_back(i);
            }
        }
        
        if(v1 == v2){
            cout << v1.size() << endl;
            cout << number;
        }else{
            cout << -1;
        }
        
    }
    
}
