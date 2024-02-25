//Assume the user input an integer 25 for the following C++ program, what will the Exact output of this program?

#include <iostream>
using namespace std;

bool Boolean_Function(int);
int main() {
int N, LCV, size =1;
  for(LCV = 0; LCV < size; LCV++){
  cin >> N;
    if(Boolean_Function(N))
      cout << N << "is an even number" << endl;
    else
      cout << N << "is an odd number" << endl;
  }
  return 0;
}
bool Boolean_Function(int number){
    if(number % 2 == 0){
        return true;
    }
    else{
        return false;
    }
}