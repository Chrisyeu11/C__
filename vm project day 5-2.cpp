#include <iostream>
#include <cmath>
using namespace std;

double get_data();
double compute_allcost(double, double);
double calculate_salesforeachitemperhour(double);
double compute_tax(double);
double compute_net_salary(double, double);
double compute_laborcost(double);
double compute_overhead(double);
double compute_profit(double);
void display_info(double);

void menu()
{
  cout << "=============================" << endl;
  cout << "       VENDING MACHINE       " << endl;
  cout << "=============================" << endl;
  cout << "1. Coke          $0.95" << endl;
  cout << "2. Pepsi         $0.90" << endl;
  cout << "3. Snickers      $0.55" << endl;
  cout << "4. Doritos       $0.75" << endl;
  cout << "5. Chex Mix      $0.60" << endl;

  cout << "\n--------------------------------------";
  cout << "\nAccepts: $0.05, $0.10, $0.25, $1, & $5";
  cout << "\n--------------------------------------";
}

bool check(bool on)
{
    if(on){
        cout << "\nPower: ON\n";
        return true;
    }else{
        cout << "\nPower: OFF\n";
        return false;
    }
}

int select(int option)
{
again:
    cout << "\nEnter Selection: ";
    cin >> option;
   
    if(option < 1 || option > 5)
    {
        cout << "\nInvalid Selection. Try Again!";
        goto again;
    }
   
    return option;
}

float accept(float money)
{
request:
    cout << "\nEnter Coins/Bills: $";
    cin >> money;
   
    if(money == 0.05f)
    {
        cout << "\nCoin Accepted!\n";
    }
    else if(money == 0.10f)
    {
      cout << "\nCoin Accepted!\n";
    }
    else if(money == 0.25f)
    {
        cout << "\nCoin Accepted!\n";
    }
    else if(money == 1.00f)
    {
        cout << "\nBill Accepted!\n";
    }
    else if(money == 5.00f)
    {
        cout << "\nBill Accepted!\n";
    }
    else{
        cout << "\nTry Again!\n";
        goto request;
    }
   
    return money;
}

void refill(int option, int &coke, int &doritos, int &snickers, int &chex_mix, int &pepsi){
    switch(option){
        case 1:
            if(coke < 2){
                cout << "\nCoke Stock: " << coke;
                coke = 5;
            }else{
                cout << "\nCoke Stock: " << coke;
                coke--;
            }
            break;
        case 2:
            if(pepsi < 2){
                cout << "\nPepsi Stock: " << pepsi;
                pepsi = 5;
            }else{
                cout << "\nPepsi Stock: " << pepsi;
                pepsi--;
            }
           
            break;
        case 3:
            if(snickers < 2){
                cout << "\nSnickers Stock: " << snickers;
                snickers = 5;
            }else{
                cout << "\nSnickers Stock: " << snickers;
                snickers--;
            }
            break;
        case 4:
            if(doritos < 2)
            {
                cout << "\nDoritos Stock: " << doritos;
                doritos = 5;
            }else{
                std::cout << "\nDoritos Stock: " << doritos;
                doritos--;
            }
            break;
        case 5:
            if(chex_mix < 2){
                cout << "\nChexMix Stock: " << chex_mix;
                chex_mix = 5;
            }
            else
            {
                cout << "\nChexMix Stock: " << chex_mix;
                chex_mix--;
            }
            break;
    }
}

void sale(float item_price, float entered, float money){
    float remaining = item_price - entered;
   
    while(remaining < item_price){
        if(entered > item_price){
            cout << "\nYour Change: $" << abs(remaining);
            break;
        }
        else
        {
            cout << "\nStill Remaining: $" << remaining;
            money = accept(money);
            entered += money;
        }
        remaining = item_price - entered;
    }
    cout<<"\nTransaction Complete!";
}

void change(float money, int option){
    float entered = money;
    float coke_price = 0.95f;
    float doritos_price = 0.75f;
    float snickers_price = 0.55f;
    float chex_mix_price = 0.60f;
    float pepsi_price = 0.90f;
   
    if(option == 1)
    {
        sale(coke_price, entered, money);
    }
    else if(option == 2)
    {
        sale(pepsi_price, entered, money);
       
    }
    else if(option == 3)
    {
        sale(snickers_price, entered, money);
    }
    else if(option == 4)
    {
        sale(doritos_price, entered, money);
    }
    else
    {
        sale(chex_mix_price, entered, money);
    }
}
   
int main(){
    int coke = 30;
    int pepsi = 30;
    int snickers = 30;
    int doritos = 30;
    int chex_mix = 30;
   
   
    int option;
    float money;
    bool on;
   
power:    
    cout << "\nPress '1': ";
    cin >> on;
   
    on = check(on);
   
    if(on){
        menu();
        while(on)
        {
            option = select(option);
            refill(option, coke, doritos, snickers, chex_mix, pepsi);
            money = accept(money);
            change(money, option);
        }
    }else{
        goto power;
    }
 
    return 0;
}

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
double calculate_salesforeachitemperhour(double allcost)
{
    double salesperhr;
    salesperhr = allcost / 6;
    return salesperhr;
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

int main1(void) {
  double days, sales_per_day, allcost, overhead, profit, laborcost, salesperhr;
  cout << "\n please enter daily sales \n";
  sales_per_day = get_data();
  cout << "\n please enter # of days  \n";
  days = get_data();

  allcost = compute_allcost(sales_per_day, days);

  salesperhr = calculate_salesforeachitemperhour(allcost);

  overhead = compute_overhead(allcost);

  laborcost = compute_laborcost (allcost);

  profit = compute_profit(allcost, overhead, laborcost);

  cout << "\n sales per day\n=";
  display_info(sales_per_day);
  cout << "\n days=";
  display_info(days);
  cout << "\n cost of all is \n";
  display_info(allcost);
  cout << "\n sales per hr is \n";
  display_info(salesperhr);
    cout << "\n all cost is \n";
  display_info(laborcost);
  cout << "\n overhead is \n";
  display_info(overhead);
    cout << "\n profit is \n";
  display_info(profit);
  return 0;
}