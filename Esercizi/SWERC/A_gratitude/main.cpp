#include <iostream>
#include <unordered_map>
#include <queue>
#include <sstream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, K;
    unordered_map<string, int> frequency_table;
    auto cmp = [] (const pair<string, int>& left, const pair<string, int>& right) { return left.second > right.second;};
    priority_queue<pair<string, int>, std::vector<pair<string, int>>, decltype(cmp)> most_grateful(cmp);
    vector<string> grateful_things;
    
    cin >> N;
    cin >> K;

    cin.ignore();
    for (int i=0; i<3*N; i++) {
        string s;
        getline(cin, s);
        frequency_table[s]++;
    }

    for (pair<string, int> element : frequency_table) {
        most_grateful.push(element);
        if(most_grateful.size() > K)
            most_grateful.pop();
    }

    for (int i=K-1; i>=0; i--) {
        grateful_things.push_back(most_grateful.top().first);
        most_grateful.pop();
    }

    for (int i=K-1; i>=0; i--) {
        cout << grateful_things[i] << "\n";
    }
    return 0;
}


/* TEST CASE
2 2
Supportive parents
Being able to solve a hard problem
Good food
Fun game with friends
Good food
Being healthy

 */
