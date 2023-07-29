#include <iostream>
#include <algorithm>
using namespace std;

string rearrangeSequence(string input) {
    // Sort the string in ascending order
    sort(input.begin(), input.end());

    // Remove all occurrences of '5' from the string
    input.erase(remove(input.begin(), input.end(), '5'), input.end());

    // Move the first occurrence of '2' to the end of the string
    input.push_back('2');
    input.erase(remove(input.begin(), input.end(), '2'), input.end());
    
    // Move the first occurrence of '9' to the front of the string
    input.insert(input.begin(), '9');
    input.erase(remove(input.begin(), input.end(), '9'), input.end());

    // Append '0' to the string
    input.push_back('0');
    
    return input;
}

int main() {
    string input = "5552229333344";
    string output = rearrangeSequence(input);
    cout << "Input: " << input << endl;
    cout << "Output: " << output << endl;

    return 0;
}
