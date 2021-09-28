#include <bits/stdc++.h>
using namespace std;

/*
Input
The first line of the input contains a single integer n (1 ≤ n ≤ 100 000) — the number of games played.

The second line contains a string s, consisting of n uppercase English letters 'A' and 'D' — the outcome of each of the games. The i-th character of the string is equal to 'A' if the Anton won the i-th game and 'D' if Danik won the i-th game.

Output
If Anton won more games than Danik, print "Anton" (without quotes) in the only line of the output.

If Danik won more games than Anton, print "Danik" (without quotes) in the only line of the output.

If Anton and Danik won the same number of games, print "Friendship" (without quotes).
*/
int main() {
  long long n, a = 0, d = 0;
  string s;
  cin >> n;
  cin >> s;
  for(int i = 0; i < n; i++) {
    if(s[i] == 'A') {
      a+= 1;
    } else {
      d+= 1;
    }
  }

  if(a > d) {
    cout << "Anton";
  } else if(a < d) {
    cout << "Danik";
  } else {
    cout << "Friendship";
  }

  return 0;
}