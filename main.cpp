#include <iostream>

int countWays(int n, int k = 3) {
    if (n == 0) {
        return 1;
    }
    if (n < 0) {
        return 0;
    }

    int ways = 0;
    for (int i = 1; i <= k; ++i) {
        ways += countWays(n - i, k);
    }
    return ways;
}

int main() {
    int n, k;

    std::cout << "Enter the step number (n): ";
    std::cin >> n;

    std::cout << "Enter the maximum jump length (k, default is 3): ";
    std::cin >> k;

    int result = countWays(n, k);
    std::cout << "Number of ways to reach step " << n << ": " << result << std::endl;

    return 0;
}
