#include <iostream>
#include <vector>
#include <queue>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
  priority_queue<int, vector<int>> pq;
  pq.push(-4);
  pq.push(4);
  pq.push(3);
  pq.push(5);
  while(!pq.empty()){
    cout << pq.top() << ' ';
    pq.pop();
  }
  cout << '\n';
  return 0;
}
