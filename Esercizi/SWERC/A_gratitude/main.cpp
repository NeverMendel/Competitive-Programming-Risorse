#include <iostream>
#include <unordered_map>
#include <queue>
#include <sstream>

using namespace std;

class sentence {
    public:
    int frequency;
    int last_appearance;

    void operator+= (const int & rhs) {
        frequency++;
        last_appearance = rhs;
    }

    friend inline bool operator> (const sentence& lhs, const sentence& rhs) {
        return (lhs.frequency == rhs.frequency)? (lhs.last_appearance>rhs.last_appearance): (lhs.frequency>rhs.frequency);
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, K;
    unordered_map<string, sentence> frequency_table;
    auto cmp = [] (const pair<string, sentence>& left, const pair<string, sentence>& right) { return left.second > right.second;};
    priority_queue<pair<string, sentence>, std::vector<pair<string, sentence>>, decltype(cmp)> most_grateful(cmp);
    vector<string> grateful_things;

    cin >> N;
    cin >> K;

    cin.ignore();
    for (int i=0; i<3*N; i++) {
        string s;
        getline(cin, s);
        frequency_table[s]+=i;
    }

    for (const auto& element : frequency_table) {
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
