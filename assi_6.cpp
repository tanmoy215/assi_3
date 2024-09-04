#include <iostream>
using namespace std;
int main() {
    // Declare variables for the marks of the three students
    int marksA, marksB, marksC;

    // Input the marks of the students
    cout << "Enter the marks of student A: ";
    cin >> marksA;
    cout << "Enter the marks of student B: ";
    cin >> marksB;
    cout << "Enter the marks of student C: ";
    cin >> marksC;

    // Determine the student with the least marks
    if (marksA < marksB && marksA < marksC) {
        cout << "Student A has the least marks: " << marksA <<endl;
    } else if (marksB < marksA && marksB < marksC) {
        cout << "Student B has the least marks: " << marksB <<endl;
    } else if (marksC < marksA && marksC < marksB) {
        cout << "Student C has the least marks: " << marksC <<endl;
    } else {
        cout << "There is a tie for the least marks." <<endl;
    }

    return 0;
}
