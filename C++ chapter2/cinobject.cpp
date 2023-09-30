//dec variables and assign a value at the same time 
#include <iostream>

int main() {

int weeklyhrs, rate;
  std::cout<<"enter weekly hours\n\n\t";
  std::cin>>weeklyhrs;

  std::cout<<"enter rate per hour\n\n\t";
  std::cin>>rate;

  std::cout<<"weekly hour is"<<weeklyhrs<<std::endl;
  std::cout<<"rate per hr is"<<rate<<std::endl;
  return 0;
}