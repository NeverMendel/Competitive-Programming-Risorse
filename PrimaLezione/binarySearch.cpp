#include <iostream>
#include <vector>

using namespace std;

int binarySearch(vector<int> v, int x){
    int low = 0;
    int high = v.size() - 1;
    while(low < high){
        int mid = (low + high) / 2;
        if(v[mid] == x){
            return mid;
        } else if(v[mid] < x){
            low = mid + 1;
        } else{
            high = mid - 1;
        }
    }
    return -1;
}

int main(){
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << binarySearch(v, 5) << endl;
}