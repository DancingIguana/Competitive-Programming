#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int n, m, l, r, total = 0;
    cin >> n >> m;
    int axis[m];
    
    for(int i = 0; i<m; i++){
        axis[i] = i+1;
    }
    
    for(int i = 0; i<n; i++){
        cin >> l >> r;
        
        if(l == r){
            axis[l-1] = 0;
            
        }else{
            for(int j = l-1; j<=r-1; j++){
                axis[j] = 0;
            }
        }
    }
    
    for(int i = 0; i<m; i++){
        if(axis[i] != 0){
            total += 1;
        }
    }
    
    cout << total << endl;
    
    for(int i = 0; i < m; i++){
        if(axis[i] != 0){
            cout << axis[i] << " ";
        }
    }
}
