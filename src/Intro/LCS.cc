#include <iostream>
#include <string>
#include <vector>

unsigned int lcs(const std::string &s1, const std::string &s2) {
    unsigned int m = s1.size(), n = s2.size();
    std::vector<std::vector<unsigned int>> dp(m + 1, std::vector<unsigned int>(n + 1, 0));
    for (unsigned int i = 1; i < m + 1; i++) {
        for (unsigned int j = 1; j < n + 1; j++) {
            if (s1[i - 1] == s2[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            } else {
                dp[i][j] = std::max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }
    return dp[m][n];
}

namespace lcsTest {
void test(const std::string &s1, const std::string &s2) {
    unsigned int result = lcs(s1, s2);
    std::cout << "------------------------------------------------------------------" << std::endl;
    std::cout << "Longest Common Subsequence" << std::endl;
    std::cout << "------------------------------------------------------------------" << std::endl;
    std::cout << "string1: " << s1 << std::endl;
    std::cout << "string2: " << s2 << std::endl;
    std::cout << "LCS of string1 and string2 is " << result << std::endl;
}
} // namespace lcsTest
