#include <iostream>
using namespace std;

char s[100000];

int main(){
  cin >> s;
  bool app[26];
  for(int i = 0; i < 26; ++i){
    app[i] = false;
  }
  for(int i = 0;s[i] != '\0'; ++i){
    app[s[i] - 'a'] = true;
  }
  for(int i = 0; i < 26; ++i){
    if(!app[i]){
      cout << (char)(i + 'a') << endl;
      return 0;
    }
  }
  cout << "None" << endl;
  return 0;
}

/* abcd..zはaに数字を足してcharにキャストすれば出る

初めにapp[26]をbool型で用意してtrueに変えていく発送がなかった

ループの終わりはヌルポインタ'\0'であるかの判定でおｋ

return 0;を抜かすとcoutが全て実行されるので注意

*/