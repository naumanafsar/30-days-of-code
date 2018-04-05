#include <bits/stdc++.h>

using namespace std;

int main() {
    double meal_cost;
    cin >> meal_cost;
    int tip_percent;
    cin >> tip_percent;
    int tax_percent;
    cin >> tax_percent;

    float tip = (meal_cost * tip_percent) / 100;
    float tax = (meal_cost * tax_percent) / 100;
    float total_cost = meal_cost + tip + tax;

    cout << "The total meal cost is " << round(total_cost) <<" dollars.";
    return 0;
}
