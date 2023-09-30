//Write a C++ program to display the infos
#include <iostream>
using namespace std;
int main() {

  short i;
  unsigned short j;
  int k;
  unsigned int l;
  long m;
  unsigned long n;

  cout<<"\t"<<sizeof(i)<<endl;
  cout<<"\t"<<sizeof(j)<<endl;
  cout<<"\t"<<sizeof(k)<<endl;
  cout<<"\t"<<sizeof(l)<<endl;
  cout<<"\t"<<sizeof(m)<<endl;
  cout<<"\t"<<sizeof(n)<<endl;

  i=11;
  j=22;
  k=33;
  l=44;
  m=55;
  n=66;

  cout<<"\t"<<i<<"\n\t"<<j<<"\n\t"<<k<<"\n\t"<<l<<"\n\t"<<m<<"\n\t"<<n<<endl;
  return 0;
}