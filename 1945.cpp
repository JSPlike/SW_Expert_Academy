/*
N=2a x 3b x 5c x 7d x 11e
*/
#include<cstdio>
#include<iostream>

using namespace std;
int N; int T;
int func(int num, int N){
  int count = 0;

  while(1){
    if(N % num == 0){
      N /= num;
      count++;
    }
    else break;
  }
  
  return count;
}
// 11001111010000011101000

int main(){
  cin >> T;
  for(int test_case=1; test_case<=T; test_case++){
    cin >> N;
    int a, b, c, d, e;

    e = func(11, N);
    d = func(7, N);
    c = func(5, N);
    b = func(3, N);
    a = func(2, N);

    cout << '#' << test_case << " " << a << " " << b << " " << c << " " << d << " " << e << '\n';
  }
}