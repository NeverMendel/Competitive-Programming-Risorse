#include <iostream>
#include <vector>
#include <queue>

using namespace std;

/* 
  Given an array of N distinct integers, return the K biggest numbers. 
  Return the elements in any order. 
*/

vector<int> k_biggest(const vector<int>& v, int k){
  if(v.size() < k) return v;
  priority_queue<int, vector<int>, greater<int>> queue;
  for(const int& el : v){
    if(queue.size() < k){
      queue.push(el);
    } else {
      if(el > queue.top()){
        queue.pop();
        queue.push(el);
      }
    }
  }
  vector<int> res;
  while(!queue.empty()){
    res.push_back(queue.top());
    queue.pop();
  }
  return res;
}

int main(){
  vector<int> v = {5,4,7,0,9,1};
  vector<int> res = k_biggest(v, 3);
  for(const int& el : res){
    cout << el << ' ';
  }
  cout << '\n';
}