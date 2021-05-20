#include <iostream>
#include <cmath>

using namespace std;

int circleArea()
{   
    double pi = 3.14159265358979323846;
    double radius;
    std::cin >> radius;
    double area = radius * radius * pi;
    printf("%0.12f", area);
    return 0;
}
