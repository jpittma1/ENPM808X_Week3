#include <iostream>
#include <vector>
#include <math.h>
#include <cmath>
#include <string>


using namespace std;

/**
 * @brief Class for squaring a number
 * 
 */
class SquareRoot {
   SquareRoot();
   double num_in;
   
   public:
      void squareNumber(double num_in);
};

/**
 * @brief Method to square an inputted Number
 * 
 * @param num_in 
 */
void SquareRoot::squareNumber(double num_in){
   double base_num = num_in;
   if (base_num>0.0){
      double rooted_num = base_num;
      double EPSILON = 1e-15;
      while(abs(rooted_num-base_num/rooted_num) > rooted_num*EPSILON){
         rooted_num = sqrt(base_num);
      }
      cout << "Square root of "<<num_in<<" is " << rooted_num << endl;
   }
   
   if (base_num<0) {
      
      cout << "<<Error: the number is smaller than 0>>";
   }
}