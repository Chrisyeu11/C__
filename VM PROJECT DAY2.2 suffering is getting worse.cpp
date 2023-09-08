#include <iostream>
using namespace std;

bool ismachineon(int);
double calculate_totalsalesforallitems(double);
double calculate_sellingprice(double);
double calculate_salesforeachitemperhour(double);
double calculate_totalsalesforeachitemperday(double);
double compute_totalcostofallitems(double);
double compute_laborcost(double);
double compute_overhead(double);
double compute_profit(double);

bool isMachineOn()
{ 
  bool flag;
  
  return flag; 
}
double calculate_salesforeachitemperday()
{
  double salesperday;
  salesperday = totalcostofallitems/7;
  return salesperday;
}
double calculate_salesforeachitemperhour()
{
  double salesperhr;
  salesperhr = totalcostofallitems/42;
  return salesperhr;
}
double calculate_sellingprice()
{
  double sellingprice;
  sellingprice = totalcostofallitems * 0.35;
  return sellingprice;
}
double compute_totalcostofallitems()
{
  double totalcostofallitems;
  totalcostofallitems = 100;
  return totalcostofallitems;
}

double compute_laborcost()
{
  double laborcost;
  laborcost = totalcostofallitems * 0.35;
  return laborcost;
}

double compute_overhead()
{
  double overhead;
  overhead = totalcostofallitems * 0.05;
  return overhead;
}

double compute_profit() 
{
  double profit;
  profit = totalcostofallitems - laborcost - overhead;
  return profit;
}

void displayMenu() {
  cout << "=============================" << endl;
  cout << "       VENDING MACHINE       " << endl;
  cout << "=============================" << endl;
  cout << "1. Coke          $0.95" << endl;
  cout << "2. Pepsi         $0.90" << endl;
  cout << "3. Snickers      $0.55" << endl;
  cout << "4. Doritos       $0.75" << endl;
  cout << "5. Chex Mix      $0.60" << endl;
}

void processChoice(int choice) {
  switch (choice) {
  case 1:
    cout << "you chose 1. Coke          $0.95";

    break;
  case 2:
    cout << "you chose 2. Pepsi         $0.90";
    break;
  case 3:
    cout << "you chose 3. snickers      $0.55";
    break;
  case 4:
    cout << "you chose 4. Doritos       $0.75";
    break;
  case 5:
    cout << "you chose 5. Chex Mix      $0.60";
    break;
  }
}

int main() {
  int user_choice;

  while (isMachineOn()) {
    displayMenu();
    cin >> user_choice;

    processChoice(user_choice);
  }
}
