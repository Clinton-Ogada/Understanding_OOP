#include<iostream>
using namespace std;
class klassA
{
public:
  klassA() {}

  klassA(const klassA& other) {
    x = other.x;
    y = other.y;
    z = other.z;
  }

  int x;
protected:
  int y;
private:
  int z;
};
int main()
{
    return 0;
}
