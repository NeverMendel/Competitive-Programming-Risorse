#include <iostream>
#include <string>

#define MAX_SIZE 10000

bool solve(long long N, long long D, long long C, const long long & M, const char S[MAX_SIZE]) {
    for (int i=0; i<N; i++) {
        if (S[i] == 'C')
            C--;
        else if (C<0 || D<=0) {
            return false;
        }
        else {
            D--;
            C+=M;
        }
    }
    return true;
}

int main() {
    long long T, N, D, C, M;
    char S[MAX_SIZE+1];
    std::string sol;
    std::cin >> T;
    for(int test=1; test<=T; test++) {
        std::cin >> N;
        std::cin >> D;
        std::cin >> C;
        std::cin >> M;
        while(std::cin.peek() != 'C' && std::cin.peek()!='D') {
            std::cin.ignore();
        }
        fgets(S, N+1, stdin);

        sol = ((C>=N && D>=N) || solve(N, D, C, M, S))? "YES" : "NO";
        std::cout << "Case #" << test << ": " << sol << "\n";
    }
    return 0;
}
