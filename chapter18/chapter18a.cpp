#include <iostream>
#include <string>
using namespace std;

class TSU
{
  private:
  int id;  
  public:
  void read_ID();
  void print_ID() const;
};

void TSU ::read_ID()
{
  cout << "Enter ID: ";
  cin >> id;
}
void TSU ::print_ID() const
{
  cout << "ID: " << id << endl;
}

int main() {
TSU identifier;

  identifier.read_ID();
  identifier.print_ID();
  cout<<endl;
  return 0;
}