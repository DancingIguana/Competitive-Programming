#include <iostream>
#include <cstdio>
using namespace std;
#define ll long long

int main(){
    ll t, x, y;
    cin >> t;
    for(ll i = 0; i<t; i++){
        cin >> y >> x;
        
        if((max(x,y)-1) % 2 == 0){
            if(x >= y){
                cout << (x-1)*(x-1) + x + (x-y) << endl;
            }
            else{
                cout << (y-1)*(y-1) + x << endl;
            }
        }
        else{
            if(x >= y){
                cout <<(x-1)*(x-1) + y << endl;
            }
            else{
                cout << (y-1)*(y-1) + y + (y-x) << endl;
            }
        }
        
    }
}
