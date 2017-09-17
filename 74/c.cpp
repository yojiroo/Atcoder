#include <iostream>
#include <vector>
#include <utility>
#include <set>
using namespace std;

typedef pair<int, int> pi;

int A, B, C, D, E, F;
set<int> W;
vector<pi> P;

int main(void){
  cin >> A >> B >> C >> D >> E >> F;
  for(int i = 0; i <= F /(100 * A); ++i){
    for(int j = 0; j <= F / (100 * B); ++j){
      int water = 100 * A * i + 100 * B * j;
      if(water > F)
        break;
      W.insert(water);
    }
  }
  set<int>::iterator it;
  for(it = W.begin(); it != W.end(); ++it){
    int water = *it;
    if (water == 0){
      continue;
    }
    int sugar_max = E * water / 100;
    for(int i = 0; i <= (F - water) / C; ++i){
      for (int j = 0; j <= (F -water) / D; ++j){
        int sugar = C * i + D * j;
        if(sugar > sugar_max)
          break;
        if(water + sugar > F)
          break;
        P.push_back(make_pair(water, sugar));
        if(sugar == sugar_max){
          i = F;
          it = W.end();
          --it;
          break;
        }
      }
    }
  }
  int id = 0;
  double max_val = 0.0;
  for(int i = 0; i < (int)P.size(); ++i){
    double val = 100.0 * P[i].second / (P[i].first + P[i].second);
    if(val > max_val){
      max_val = val;
      id = i;
    }
  }

  cout << P[id].first + P[id].second << ' ' << P[id].second << '\n';
  return 0;
}