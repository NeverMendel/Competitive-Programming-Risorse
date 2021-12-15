#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

// https://www.cplusplus.com/reference/algorithm/sort/

bool absValueComparator(int a, int b){
  return abs(a) < abs(b);
}

int main(){
  vector<int> v = {-5, -10, 20, 5, 3, 2, 1, 7, -2, 9, -1, 0};
  // output: 0, 1, -1, 2, -2, 3, -5, 5, 7, 9, -10, 20
  sort(v.begin(), v.end(), absValueComparator);
  for(const int& el : v){
    cout << el << " ";
  }
  cout << '\n';
  return 0;
}
