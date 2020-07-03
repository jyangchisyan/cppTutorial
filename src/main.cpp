#include <iostream>
#include <string>

using namespace std;

const double pi {3.14159};

double calc_area_circle(double radius){
  return pi*radius*radius;
}

void area_circle(){
  double radius{};
  cout <<"Enter the radius of the circle:";
  cin >> radius;

  cout << "The area of circle with radius" << radius << "is" << calc_area_circle(radius)<< endl;
}

int main() {

  area_circle();
  return 0;
}
