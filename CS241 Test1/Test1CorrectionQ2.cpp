////Assume the user input 3 integers 10,20, and 30 for the following C++ program, what will the EXACT output of this program?
#include <iostream>
using namespace std;

double N;
int main(void)
{
  double N1 = 10;
  double N2 = 20;
  double N3 = 30;

  cout << "The exact output of this program is:" << endl;
  cout << "N is " << N1 << endl;
  cout << "N is " << N2 << endl;
  cout << "N is " << N3 << endl;
  cin >> N;
  cout << "N is " << N << endl;

  double N;
  cin >> N;
  cout << "N is " << N << endl;

  if (N > 0)
  {
  double N;
    cin >> N;
    cout << "N is " << N << endl;
  }
  cout << "N is = " << N << endl;
  return 0;
    }
