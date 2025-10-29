#include<iostream>
#include<string>
#include<vector>
using namespace std;

// Function to count palindromic substrings centered at left and right
int countPalindromicSubstrings(int left, int right, const string& s)
{
    int n = s.size();
    int count = 0;
    // Expand around the center as long as the substring is a palindrome
    while(left >= 0 && right < n && s[left] == s[right])
    {
        int length = right - left + 1;
        // Only count substrings of length >= 2
        if (length >= 2)
        {
            count++;
        }
        left--;
        right++;
    }
    return count;
}
long long countPalindromesLen2Plus_Manacher(const string &s) {
    int n_orig = (int)s.size();
    if (n_orig < 2) return 0; // no substring of length >= 2 possible

    // 1) Build transformed string t with sentinels and separators:
    //    e.g. s = "abba" -> t = "^#a#b#b#a#$"
    string t;
    t.reserve(2 * n_orig + 3);
    t.push_back('^');                // left sentinel
    for (char c : s) {
        t.push_back('#');            // separator
        t.push_back(c);              // original char
    }
    t += "#$";                       // trailing separator and right sentinel

    int n = (int)t.size();
    vector<int> p(n, 0);             // p[i] = radius of palindrome centered at i in t
    int center = 0, right = 0;

    // 2) Manacher's main loop (O(n) over transformed string)
    for (int i = 1; i < n - 1; ++i) {
        int mirror = 2 * center - i; // mirrored index of i around center
        if (i < right)
            p[i] = min(right - i, p[mirror]); // reuse previously computed value

        // expand around i
        while (t[i + (1 + p[i])] == t[i - (1 + p[i])])
            ++p[i];

        // update center and right boundary if this palindrome extends further
        if (i + p[i] > right) {
            center = i;
            right = i + p[i];
        }
    }

    // 3) Convert p[] info to count of palindromic substrings in the original string:
    //    For each center in t, number of palindromes in the original string contributed
    //    by that center = (p[i] + 1) / 2
    long long total_palindromes = 0;
    for (int i = 1; i < n - 1; ++i) {
        total_palindromes += (p[i] + 1) / 2;
    }

    // Remove single-character palindromes (there are exactly n_orig of them)
    long long result = total_palindromes - n_orig;
    if (result < 0) result = 0; // safety check for very small inputs
    return result;
}


int main()
{   
    string str = "abaab";
    //int n = str.size();
    cout << countPalindromesLen2Plus_Manacher(str);

    // int totalPalindromicSubstrings = 0;
    // // For each character, check for palindromic substrings of odd and even length
    // for(int i = 0; i < n; i++)
    // {
    //     // Odd length palindromes (centered at i)
    //     totalPalindromicSubstrings += countPalindromicSubstrings(i, i, str);
    //     // Even length palindromes (centered between i and i+1)
    //     totalPalindromicSubstrings += countPalindromicSubstrings(i, i+1, str);
    // }
    // cout << "Result: " << totalPalindromicSubstrings;
    return 0;
}