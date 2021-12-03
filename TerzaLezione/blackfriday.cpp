#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
typedef vector<int> vi;


int main() {
    int N;
    cin >> N;
    vi v(6, 0);
    vi index(6, -1);

    for(int i = 0; i < N; ++i) {
        int n;
        cin >> n;
        index[n - 1] = i + 1;
        v[n - 1]++;
    }

    int ans = -1;

    for(int i = 5; i >= 0; --i) {
        if(v[i] == 1) {
            ans = index[i];
            break;
        }
    }

    if(ans != -1)
        cout << ans << endl;
    else
        cout << "none" << endl;

    return 0;
}