#include <iostream>
#include <cstdio>
using namespace std;
#define ll long long

int main(){
    string sequence;
    cin >> sequence;
    
    char current = sequence[0];
    int counter = 0;
    int maxCounter=0;
    
    for (int i = 0; i<sequence.length(); i++){
        if (current != sequence[i]){
            
            counter = 1;
            current = sequence[i];
        }else{
            counter += 1;
        }
        
        if(maxCounter<counter){
            maxCounter = counter;
        }
        //cout << "current: " << current << " letter: "  << sequence[i]  << " COUNT: " << counter << " max Count: " << maxCounter << "\n";
    }
    
    cout << maxCounter;
}
