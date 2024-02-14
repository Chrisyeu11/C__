#include <iostream>
using namespace std;

int main() {
    double application_fee = 20;
    double membership_fee = 600;
    double total_members = 2000;
    double net_profit = 0;
    double overhead = 0.70;

    for (int i = 1; i <= 20; i++) {
        if (i <= 5) {
            membership_fee *= 0.95;
        } else if (i <= 10) {
            membership_fee *= 0.93;
        } else if (i <= 15) {
            membership_fee *= 0.91;
        } else {
            membership_fee *= 0.98;
        }
        double total_fee = application_fee + membership_fee;
        double total_revenue = total_members * total_fee;
        double total_overhead = total_revenue * overhead;
        net_profit = total_revenue - total_overhead;
    }
    cout << "Overhead: " << total_overhead << endl;
    cout << "Net Profit: " << net_profit << endl;

    return 0;
}