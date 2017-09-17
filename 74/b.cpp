#include <iostream>
using namespace std;

int main(){
  int N,K;
  cin >> N >> K;
  int* x = new int[N];

  for(int i = 0; i < N; i++){
    cin >> x[i];
  }

  int sum = 0;
  int t;

  for(int i = 0; i < N; i++){
    if(x[i] > K - x[i]){
      t = (K - x[i]) * 2;
    }
    else if(x[i] < K - x[i]){
      t = x[i] * 2;
    }
    else{
      t = x[i] * 2;
    }
    sum = sum + t;
  }

  cout << sum << endl;


  delete[] x;
}