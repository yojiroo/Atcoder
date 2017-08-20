#include <iostream>
using namespace std;

int main(){
  int x,a,b;
  cin >> x >> a >> b;
  if(abs(x-a) < abs(x-b)){
    cout << "A" << endl;
  }else{
    cout << "B" << endl;
  }
}

/*
絶対値のつけ忘れに注意
*/