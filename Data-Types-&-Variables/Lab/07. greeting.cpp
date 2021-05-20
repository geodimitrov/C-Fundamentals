#include <iostream>

using namespace std;

int main()
{
    string firstName, lastName;
    int age;
    std::cin >> firstName;
    cin >> lastName;
    cin >> age;

    cout << "Hello " << firstName << " " << lastName << ". ";
    cout << "You are " << age << " years old.";

    return 0;
}