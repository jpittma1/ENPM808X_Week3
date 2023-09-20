// Pittman, Jerry (117077120)
// UMD-CP PMRO ENPM808X Fall 2024
// Problem 9-4: new function that returns the
//    position of the beginning of a given
//    string in a given text

#include <iostream>
#include <array>
#include <string>

// using namespace std;
using std::cout;
using std::string;;
using std::endl

/**
 * @brief Function to search for a given text within a string
 * 
 * @param text to search for
 * @param str_to_search string that may or may not contain string
 */
void printPosition(string text, string str_to_search) {
  int i, j;
  int text_length = text.length();
  int str_to_search1_length = str_to_search.length();

  int position1 = -1;

  for (i=0; i < str_to_search1_length; i++) {
    bool found = true;

    if (text[0] != str_to_search[i]) {
      // Look for the first letter of the word first
      found = false;
    }
    if (found) {
      position1 = i;
      break;
    }
  }
  // (Correct) Position should be anything but -1
  cout <<"Position is " << position1 << endl;

  // ---Alternate Method using Find Method of Sting Class------
  // size_t found = str_to_search.find(text);
  // if (found != string::npos)
  //   cout << "First occurrence is " <<found << endl;
  // else
  //   cout << "Given string not Found in given text";
  // ------------------------------
}

int main() {
  string text_to_search = "geeks";  // 0
  string string_to_search = "geeks for geeks a computer science";

  printPosition(text_to_search, string_to_search);

  return 0;
}
