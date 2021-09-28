#include <iostream>
#include <cstdio>
#include <map>
using namespace std;

int main(){
    long n, paint, currentMax = 1;
    cin >> n;
    map<long, long> paintings;
    
    for (int i = 0; i<n; i++){
        cin >> paint;
        paintings[paint] += 1;
        currentMax = max(currentMax, paintings[paint]);
    }
        cout << (n-1) - (currentMax-1);
}
