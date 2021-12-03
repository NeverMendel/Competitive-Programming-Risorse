#include <iostream>
#include <bits/stdc++.h>


using namespace std;

typedef pair<int, int> pi;

bool cmp(pi& a, pi& b){
    if(a.second == b.second) {
        return a.first < b.first;
    }
    return a.second < b.second;
}

int main()
{
    int N;
    cin >> N;
    vector<pi> v;
    for(int i = 0; i < N; ++i) {
        pi a;
        cin >> a.first >> a.second;
        v.push_back(a);
    }

    sort(v.begin(), v.end(), cmp);

    int rooms = 1;
    int max = v[0].second;

    for(int i = 1; i < v.size(); ++i){
        if(v[i].first > max){
            max = v[i].second;
            ++rooms;
        }
    }
    cout << rooms << endl;


    return 0;
}