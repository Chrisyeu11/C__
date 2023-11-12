#include <iostream>
#include <string>
using namespace std;
class rectangle{
  private:
  double length, width, area;
  public:
  rectangle (double L, double W) : length(L), width(W){
    area = length * width;
    cout  << "\n\t for length= " << length << " and width= " << width << " area= " << area << endl;
  }
};

int main() {
rectangle object1(5,6);
return 0;
}