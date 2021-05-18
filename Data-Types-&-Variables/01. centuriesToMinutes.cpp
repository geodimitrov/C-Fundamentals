#include <iostream>

using namespace std;

int main()
{   
    int century;
    std::cin >> century;
    int years = century * 100;
    int days = int(years * 365.2422);
    int hours = 24 * days;
    int minutes = 60 * hours;
    
    std::cout << century << " centuries = " << years << " years = " << days << " days = " << hours << " hours = "
    << minutes << " minutes" << std::endl;

    return 0;
}
