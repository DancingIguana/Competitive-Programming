#include <iostream>
#include <cstdio>
#include <math.h>
using namespace std;
# define ll long long
 
int main(){
  ll n;
  cin >> n;
 
  for(ll i = 1; i<n+1; i++){
 
    cout << fixed << long((pow(i,2) - 1)*(pow(i,2))/2 - (4 * (i-1) * (i-2))) << "\n";
 
  }
 
}
