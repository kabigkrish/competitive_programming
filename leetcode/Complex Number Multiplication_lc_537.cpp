// 537. Complex Number Multiplication
// Medium

// 334

// 862

// Add to List

// Share
// A complex number can be represented as a string on the form "real+imaginaryi" where:

// real is the real part and is an integer in the range [-100, 100].
// imaginary is the imaginary part and is an integer in the range [-100, 100].
// i2 == -1.
// Given two complex numbers num1 and num2 as strings, return a string of the complex number that represents their multiplications.

// Example 1:

// Input: num1 = "1+1i", num2 = "1+1i"
// Output: "0+2i"
// Explanation: (1 + i) * (1 + i) = 1 + i2 + 2 * i = 2i, and you need convert it to the form of 0+2i.
// Example 2:

// Input: num1 = "1+-1i", num2 = "1+-1i"
// Output: "0+-2i"
// Explanation: (1 - i) * (1 - i) = 1 + i2 - 2 * i = -2i, and you need convert it to the form of 0+-2i.

// Constraints:

// num1 and num2 are valid complex numbers.

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string complexNumberMultiply(string num1, string num2)
    {
        int posr, posi;
        vector<int> real;
        vector<int> imag;
        posr = num1.find("+");
        posi = num2.find("+");

        real.push_back(stoi(num1.substr(0, posr)));
        real.push_back(stoi(num2.substr(0, posi)));
        imag.push_back(stoi(num1.substr(posi + 1)));
        imag.push_back(stoi(num2.substr(posi + 1)));
        cout << real[0];
        cout << real[1];
        cout << imag[0];
        cout << imag[1];
        int ans =
            return "ka";
    }
};
int main()
{
    Solution s;
    string num1 = "1+1i";
    string num2 = "1+1i";
    string ka = s.complexNumberMultiply(num1, num2);
}