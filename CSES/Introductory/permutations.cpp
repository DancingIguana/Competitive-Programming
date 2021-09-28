#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;
#define ll long long

int main(){
    
    ll n;
    cin >> n;
    
    if(n == 1){
        cout << 1;
        
    }else if(n== 3 || n == 2){
        cout << "NO SOLUTION";
    
    //2 4 1 3
    }else if(n%2 == 0){
        for(int i = 2; i<n+1; i+=2){
            cout << i << " ";
        }
        for(int i = 1; i<n+1; i+=2){
            cout << i << " ";
        }
    }else{
        for(ll i = n; i>0; i-=2){
            cout << i << " ";
        }
        for(ll i = n-1; i >0; i-=2){
            cout << i << " ";
        }
    }
}
