//
// Created by best on 08/27/2024.
//

#include <iostream>

using namespace std;

int main() {
    // calculating how much to pay
    double sales = 95000;
    const double stateTax = 0.04;
    const double countyTax = 0.02;
    double totalTax = stateTax + countyTax;
    double payment = totalTax * sales;
    double income = sales - payment;

    // dispensing info
    cout << "Sales: " << sales << endl;
    cout << "State Tax: " << stateTax << endl;
    cout << "County Tax: " << countyTax << endl;
    cout << "Required Payment: " << payment << endl;
    cout << "Total Income: " << income << endl;

    return 0;
}