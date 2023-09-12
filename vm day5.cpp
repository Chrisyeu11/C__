#include <iostream>
using namespace std;

double get_data();
double compute_allcost(double, double);
double compute_tax(double);
double compute_net_salary(double, double);
double compute_laborcost(double);
double compute_overhead(double);
double compute_profit(double);
void display_info(double);

double get_data() {
  double data;
  cin >> data;
  return data;
}

double compute_allcost(double wh, double r) {
  double gs;
  gs = wh * r;
  return gs;
}
double compute_tax(double gs) {
  double tax;
  if (gs > 500.00)
    tax = gs * 0.25;
  else
    tax = gs * 0.15;
  return tax;
}
double compute_net_salary(double gs, double tax) {
  double ns;
  ns = gs - tax;
  return ns;
}


double compute_laborcost(double allcost)
{
    double laborcost;
    laborcost = allcost * 0.35;
    return laborcost;
}

double compute_overhead(double allcost)
{
    double overhead;
    overhead = allcost * 0.05;
    return overhead;
}

double compute_profit(double allcost, double laborcost, double overhead)
{
    double profit;
    profit = allcost - laborcost - overhead;
    return profit;
}

void display_info(double info) { cout << info << endl; }

int main(void) {
  double days, sales_per_day, allcost, overhead, profit, laborcost;
  cout << "\n please enter daily sales \n";
  sales_per_day = get_data();
  cout << "\n please enter # of days  \n";
  days = get_data();

  allcost = compute_allcost(sales_per_day, days);

  overhead = compute_overhead(allcost);

  laborcost = compute_laborcost (allcost);

  profit = compute_profit(allcost, overhead, laborcost);

  cout << "\n weekly hrs=";
  display_info(sales_per_day);
  cout << "\n days=";
  display_info(days);
  cout << "\n cost of all is \n";
  display_info(allcost);
  cout << "\n all cost is \n";
  display_info(laborcost);
  cout << "\n overhead is \n";
  display_info(overhead);
    cout << "\n profit is \n";
  display_info(profit);
  return 0;
}