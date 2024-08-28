//
// Created by best on 08/27/2024.
//

#include <iostream>

int main() {

    // math
    double a = 10;
    int b = 3;
    double c = a / b;
    std::cout << c;

    /*Do note that using divison with 2 ints will always return an int. Change one of the ints to a double (float)
    and make sure to change the output to a double too*/

    // incrementing
    int x = 0;
    x++; // increment operator and decrement operator, but no multiplication or division
    // postfix vs prefix operator
    int y = x++; // x = 11, y = 10
    int z = ++x; // x = 11, z = 11

    // order of operation (ooo)
    // it's PEMDAS (or GEMS), don't be stupid
    // for those who need a refrence:
    /* Parentheses or Groups: first, do everything inside the parentheses. if there are more operations inside,
     * order of operations is recursive
     * Exponents: do exponents next (xˣ, x^x)
     * Multiplication (and Division): do multiplication and division next. If multiple, do left to right
     * Subtraction (and Addition): same as multiplication and division, do left to right if multiple
     * If you need this explained, go back to sixth grade */
    int d = 10;
    int e = 5;
    int f = (d + 10) / (3 * e);
    std::cout << f; // ans should be 1.(3...)

    // and don't forget the semicolon

    return 0;
}