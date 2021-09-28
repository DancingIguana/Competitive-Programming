#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int a, b, t;
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> a >> b;
        if (a != b){
        cout << min(a,b)*2 + (((max(a,b)-min(a,b))*2)-1) << endl;
        }
        else{
            cout << a + b << endl;
        }
    }
}
