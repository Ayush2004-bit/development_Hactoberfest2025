#include <iostream>
#include <string>
using namespace std;

// Function to swap characters
void swap(char &a, char &b) {
    char temp = a;
    a = b;
    b = temp;
}

// Recursive function to generate permutations
void permute(string &str, int l, int r) {
    if (l == r) {
        cout << str << endl;
        return;
    }

    for (int i = l; i <= r; i++) {
        swap(str[l], str[i]);       // Swap current index with loop index
        permute(str, l + 1, r);     // Recurse for the rest of the string
        swap(str[l], str[i]);       // Backtrack to restore original order
    }
}

int main() {
    string str
