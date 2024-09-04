#include <iostream>
#include <cctype> // For isalpha(), isdigit()
using namespace std;
int main() {
    // Declare a variable to hold the character
    char ch;

    // Input the character from the user
    cout << "Enter any character: ";
    cin >> ch;

    // Check if the character is an alphabet
    if (isalpha(ch)) {
        cout << ch << " is an alphabet." <<endl;
    }
    // Check if the character is a digit
    else if (isdigit(ch)) {
        cout << ch << " is a digit." << endl;
    }
    // If it's neither an alphabet nor a digit, it must be a special character
    else {
        cout << ch << " is a special character." << endl;
    }

    return 0;
}
