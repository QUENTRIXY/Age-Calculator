#include <iostream>
using namespace std;

int main() {
    string name;
    int birthYear, currentYear, age;

    cout << "===== AGE CALCULATOR =====" << endl;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your birth year: ";
    cin >> birthYear;

    cout << "Enter current year: ";
    cin >> currentYear;

    age = currentYear - birthYear;

    cout << "\nName: " << name << endl;
    cout << "Age: " << age << " years old" << endl;

    return 0;
}