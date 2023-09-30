//dec variables and assign a value at the same time 
#include <iostream>
using namespace std;
int main() {

  short i=11;
  unsigned short j=22;
  int k=33;
  unsigned int l=44;
  long m=55;
  unsigned long n=66;

  cout<<"\t"<<sizeof(i)<<endl;
  cout<<"\t"<<sizeof(j)<<endl;
  cout<<"\t"<<sizeof(k)<<endl;
  cout<<"\t"<<sizeof(l)<<endl;
  cout<<"\t"<<sizeof(m)<<endl;
  cout<<"\t"<<sizeof(n)<<endl;



  cout<<"\t"<<i<<"\n\t"<<j<<"\n\t"<<k<<"\n\t"<<l<<"\n\t"<<m<<"\n\t"<<n<<endl;
  return 0;
}