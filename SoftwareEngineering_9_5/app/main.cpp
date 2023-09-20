// Pittman, Jerry (117077120)
// UMD-CP PMRO Fall 2024
// Problem 9-5: Calculates sqrt of the absolute value of a given number
// Apply refactoring to remove:
//    1) Dead code
//    2) variables without a meaning
//    3) duplicate code

#include <squareroot.hpp>
// Changes made to original code:
//    Removed "public" from class name since is redundant
//    Renamed class from generic "A" to "SquareRoot" so has meaning
//    Changes System.out.println to cout lines
//    added ":"" to public of Class
//    changed variable names of "c" and "t" to have meaning
//    removed "Math." since unnecessary for using abs function of cmath library
//    "String" to be lowercase for user inputs
//    semicolon after class bracket
//    Double.parseDouble -> stod (C++ vs Java)
//    added sqrt function vice hardcode equation
//    Removed useless else
//    Moved method out of class definition
//    0 comparison to 0.0 (double vice int)
//    Moved class definition and method to header file

int main() {
SquareRoot number_for_sqrt;
const char* num_inputted;
// string num;

cout << "Enter number to be square rooted: ";
cin >> num_inputted;

number_for_sqrt.squareNumber(stod(num_inputted));

return 0;
}
