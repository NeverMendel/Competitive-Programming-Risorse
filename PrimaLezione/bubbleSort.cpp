#include<iostream>
#include<vector>

using namespace std;

void bubbleSort(vector<int>& v){
    bool ordered = false;
    unsigned int i = 0;
    while(i < v.size() && !ordered){
        ordered = true;
        for(unsigned int j = 0; j < v.size() - i - 1; j++){
            if(v[j] > v[j + 1]){
                int temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
                ordered = false;
            }
        }
        i++;
    }
}

int main(){
    vector<int> v = {1,5,3,2,7,4,6};
    bubbleSort(v);
    for(const int& el : v){
        cout << el << "\n";
    }
}