#include <iostream>
#include <cstdio>
#include <vector>
#define ll long long
using namespace std;
 
int main(){
    ll n, max, secondMax, total = 0, totalNumbers = 0;
    bool flag = 0;
    cin >> n;
    ll arr[n];
    vector<ll> numbers;
    
    for(ll i = 0; i<n; i++){
        cin >> arr[i];
    }
    max = arr[0];
    
    for(ll i = 0; i<n; i++){
        if(arr[i]>max){
            max = arr[i];
        }
        total += arr[i];
    }
    
    if(arr[0] != max){
        secondMax = arr[0];
    }else{
        secondMax = arr[1];
    }
    
    for(ll i = 0; i <n; i++){
        if(arr[i] == max && flag == 0){
            flag = 1;
        }
        else if(arr[i] > secondMax && arr[i] != max){
            secondMax = arr[i];
        }
        
        else if(flag == 1 && arr[i] == max){
            secondMax = arr[i];
        }
    }
    
    for(ll i = 0; i<n; i++){
        if(arr[i] == max){
            if((total - arr[i] - secondMax) == secondMax){
                numbers.push_back(i+1);
                totalNumbers += 1;
            }
        }else{
            if((total - arr[i] - max) == max){
                numbers.push_back(i+1);
                totalNumbers += 1;
            }
        }
    }
    
    cout << totalNumbers << endl;
    if(totalNumbers>0){
        for(ll i = 0;i < totalNumbers; i++){
            cout << numbers[i] << " ";
        }
    }
}
