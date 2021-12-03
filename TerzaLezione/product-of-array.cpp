#include <iostream>
#include <vector>

using namespace std;


/* 
  Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].
  You don't have to worry about integer overflow.
  You cannot use the division operation.

  Example
  Input:  [1,2,3,4]
  Output: [24,12,8,6]
*/

vector<int> productExceptSelf(vector<int>& nums) {
  vector<int> res(nums.size(), 0);
  int prod = 1;
  for(int i = 0; i < nums.size(); i++){
    res[i] = prod;
    prod *= nums[i];
  }
  prod = 1;
  for(int i = nums.size() - 1; i >= 0; i--){
    res[i] *= prod;
    prod *= nums[i];
  }
  return res;
}

int main(){
  vector<int> v = {1,2,3,4};
  vector<int> res = productExceptSelf(v);
  for(const int& el : res){
    cout << el << ' ';
  }
  cout << '\n';
  // [24,12,8,6]
}