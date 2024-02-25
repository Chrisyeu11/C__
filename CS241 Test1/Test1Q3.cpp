#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main() {
int Variable; 
  int *VariablePtr;
  VariablePtr= &Variable;

  cout<<VariablePtr << endl;
  VariablePtr++;
  cout<<VariablePtr << endl;
  VariablePtr++;
  cout<<VariablePtr << endl;
}
  