#include<bits/stdc++.h>

using namespace std;

int main() {
  int a = -23;
  int b = 5;
  int ans = (a%b + b)%b;
  
  //it also can be like that
  // ans = a%b;
  // ans += b;
  
  cout<<ans;
  
  return 0;
}
