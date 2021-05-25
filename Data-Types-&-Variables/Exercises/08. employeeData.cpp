#include <iostream>

using namespace std;

int main()
{
    string firstName, lastName;
    cin >> firstName;
    cin >> lastName;

    short int age;
    cin >> age;

    char gender;
    cin >> gender;

    long long int idNumber, employeeNumber;
    cin >> idNumber;
    cin >> employeeNumber;

    cout << "First name: " << firstName + "\n" << "Last name: " << lastName + "\n"
    << "Age: " << age << "\n" << "Gender: " << gender << "\n" << "Personal ID: "
    << idNumber << "\n" << "Unique Employee number: " << employeeNumber;

}
