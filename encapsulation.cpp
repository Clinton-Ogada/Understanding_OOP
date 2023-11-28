#include<iostream>
using namespace std;
class Circle {
private:
  double radius;
public:
  Circle(double radius) : radius(radius) {}
  double get_area() {
    return 3.14 * radius * radius;
  }
};
int main() {
  Circle circle(5);
  double area = circle.get_area();
  std::cout << "The area of the circle is " << area << std::endl;
  return 0;
}
