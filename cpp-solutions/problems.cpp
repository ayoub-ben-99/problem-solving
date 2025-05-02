#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

// ======> 1. Find the largest of three numbers.
void largestOfThree() {
    cout << "1) " << max({1, 2, 3, 4}) << endl;
}

// ======> 2. Check if a number is prime.
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); ++i)
        if (n % i == 0) return false;
    return true;
}

// ======> 3. Calculate the factorial of a number.
int factorial(int n) {
    if (n < 0) return -1;
    if (n == 0 || n == 1) return 1;
    return n * factorial(n - 1);
}

// ======> 4. Check if a number is even or odd.
string evenOrOdd(int n) {
    return to_string(n) + " is " + (n % 2 == 0 ? "even" : "odd");
}

// ======> 5. Reverse a string.
string reverseStr(string str) {
    reverse(str.begin(), str.end());
    return str;
}

// ======> 6. Print Fibonacci series up to n terms.
void generateFibonacci(int n) {
    cout << "6) ";
    if (n <= 0) {
        cout << "nothing" << endl;
        return;
    }
    vector<int> seq = {0};
    if (n > 1) seq.push_back(1);
    for (int i = 2; i < n; ++i) {
        seq.push_back(seq[i - 1] + seq[i - 2]);
    }
    for (int i : seq) cout << i;
    cout << endl;
}

// ======> 7. Check if a number is a palindrome.
string palindrome(int num) {
    string str = to_string(num);
    string rev = str;
    reverse(rev.begin(), rev.end());
    return (str == rev) ? "yes palindrome" : "no palindrome";
}

// ======> 8. Count the number of vowels in a string.
int countVowels(string str) {
    string vowels = "aeiou";
    int count = 0;
    for (char c : str) {
        c = tolower(c);
        if (vowels.find(c) != string::npos) ++count;
    }
    return count;
}

// ======> 9. Find the second largest number in an array.
int secondLargest(vector<int> arr) {
    int max1 = *max_element(arr.begin(), arr.end());
    arr.erase(remove(arr.begin(), arr.end(), max1), arr.end());
    return *max_element(arr.begin(), arr.end());
}

// ======> 10. Find the factorial of a number using recursion.
int recursionFactorial(int num) {
    if (num == 0 || num == 1) return 1;
    return num * recursionFactorial(num - 1);
}

int main() {
    largestOfThree();
    cout << "2) " << (isPrime(2) ? "true" : "false") << endl;
    cout << "3) " << factorial(5) << endl;
    cout << "4) " << evenOrOdd(5) << endl;
    cout << "5) " << reverseStr("ayoub-ben-99") << endl;
    generateFibonacci(5);
    cout << "7) " << palindrome(121) << endl;
    cout << "8) " << countVowels("ayoub") << endl;
    cout << "9) " << secondLargest({1, 4, 6, 8, 10, 20}) << endl;
    cout << "10) " << recursionFactorial(4) << endl;

    return 0;
}
