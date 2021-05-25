#include <iostream>

using namespace std;

int sumNumDigits(int num){
    int result = 0;
    while(num > 0){
        result += num % 10;
        num = num / 10;
    }

    return result;
}

int main()
{
    int number;
    cin >> number;

    for (auto i = 1; i < number + 1; i++) {
        int sumDigits = sumNumDigits(i);
        string isSpecial;

        if (sumDigits == 5 || sumDigits == 7 || sumDigits == 11){
            isSpecial = "True";
        }
        else {
            isSpecial = "False";
        }

        cout << i << " -> " << isSpecial << endl;
    }

    return 0;
}
