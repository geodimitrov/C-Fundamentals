#include <iostream>

using namespace std;

string getDayName(int dayNumber) {
    string dayNames[7] = {
            "Monday", 
            "Tuesday", 
            "Wednesday", 
            "Thursday", 
            "Friday", 
            "Saturday", 
            "Sunday",
    };
    
    int dayIndex = dayNumber - 1;
    string result = "Invalid Day!";

    if (dayIndex >= 0 && dayIndex < 7){
        result = dayNames[dayIndex];
    }
    return result;
}


int main()
{
    int dayNumber;
    cin >> dayNumber;
    string dayName = getDayName(dayNumber);
    cout << dayName;
}
