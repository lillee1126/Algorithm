//
// Created by lillee on 2024/12/13.
//
#include <vector>
#include <iostream>
using namespace std;
void EulerSieve(int n) {
    vector<bool> isprime(n + 1, true);
    vector<int> prime;
    isprime[1] = false;

    for (int i = 2; i <= n; i++) {
        if (isprime[i]) {
            prime.push_back(i);
        }
        for (int j = 0; j < prime.size() && i * prime[j] <= n; j++) {
            isprime[i * prime[j]] = false;
            if (i % prime[j] == 0) break;
        }
    }

    // 输出素数
    for (int p : prime) {
        cout << p << " ";
    }
}

int main() {
    int n = 100;
    EulerSieve(n);
    return 0;
}