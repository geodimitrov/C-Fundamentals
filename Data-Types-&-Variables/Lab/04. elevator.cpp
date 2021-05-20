#include <iostream>
#include <cmath>

using namespace std;

int main()
{   
   float people;
   float capacity;
   std::cin >> people;
   cin >> capacity;
   
   int courses = ceil(people / capacity);
   
   std::cout << courses << std::endl;
   return 0;
}
