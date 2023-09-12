#include <iostream>
#include <cmath>
using namespace std;

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
