#include <iostream>
#include <vector>
#include <queue>
#include <cmath>
#include <algorithm>

using namespace std;

bool absValueComparator(const int& a, const int& b){
  return abs(a) < abs(b);
}

int main(){
  priority_queue<int, vector<int>, decltype(&absValueComparator)> pq(absValueComparator);
  pq.push(-4);
  pq.push(4);
  pq.push(-2);
  pq.push(3);
  pq.push(5);
  while(!pq.empty()){
    cout << pq.top() << ' ';
    pq.pop();
  }
  cout << '\n';
  return 0;
}
