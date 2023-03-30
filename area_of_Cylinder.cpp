#include <iostream> 
#include <cmath>

using namespace std;

int main () {
  double radius, height, Area;


  cout << "Enter tha Radius of Cylinder: ";
  cin >> radius;

  cout << "Enter the Height of Cylinder: ";
  cin >> height;

  Area = 2 * M_PI * radius * height + 2 * M_PI * radius * radius;

  cout << "The Area of The Cylinder is: " << Area << endl;

  return 0;
}