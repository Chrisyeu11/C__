////Assume the user input 40 and 26.5 as the input data for the following C++ program, what will the EXACT output of this program?

#include <iostream>
using namespace std;

double Get_data();
double Compute_Gross_Salary(double, double);
double Compute_Tax(double);
double Compute_Net_Salary(double, double);
void Display_info(double);

int main(void){
  double rate, weekly_hrs, Gross_Salary, Tax , Netsalary;
  weekly_hrs = Get_data();
  rate = Get_data(); 
  Gross_Salary = Compute_Gross_Salary(weekly_hrs, rate);
  Tax = Compute_Tax(Gross_Salary);
  Netsalary = Compute_Net_Salary(Gross_Salary, Tax);
  Display_info(Netsalary);

  return 0;
}

double Get_data(void)
{
  double data; 
  cin >> data;
  return data;
}
double Compute_Gross_Salary(double WH, double R)
{
  double GS;
  GS = WH * R;
  return GS;
}

double Compute_Tax(double GS)
{
  double Tax; 
  if (GS > 500.00)
    Tax = GS * 0.25;
  else
    Tax = GS * 0.15;
  return Tax;
}

double Compute_Net_Salary(double GS, double T)
{
  double NS;
  NS = GS - T; 
  return NS;
}
void Display_info(double info)
{
  cout << info << endl;
}