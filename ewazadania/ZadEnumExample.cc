/**
 * @file ZadEnumExample.cc
 * @author Ewa Morga
 * @date 2026.04.01 v0.01
 * @brief Demonstration of enum types in C++ (Months)
 * @version v0.01
 *
 * This program demonstrates the use of unscoped and scoped enumerations in C++,
 * specifically using months of the year as an example.
 */

#include <iostream>
using namespace std;

/**
 * @brief Unscoped enumeration for months
 *
 * This enum represents months. The first element is explicitly 
 * assigned the value 1, so the rest will increment automatically (2, 3, etc.).
 */
enum MonthsUnscoped {
  January = 1,
  February,          
  March,     
  April,         
  May,
  June,        
  July,
  August,
  September,
  October,
  November,
  December
};

/**
 * @brief Scoped enumeration for months
 *
 * This enum class represents months using scoped enumerations introduced in C++11. 
 * Scoped enumerations require the use of the enumeration name to access the enumerators.
 */
enum class MonthsScoped {
  Jan = 1, 
  Feb, 
  Mar, 
  Apr, 
  May, 
  Jun, 
  Jul, 
  Aug, 
  Sep, 
  Oct, 
  Nov, 
  Dec
};

/**
 * @brief Main function
 *
 * This program demonstrates the use of unscoped and scoped enumerations in C++.
 * It prints the values of enumerators and shows how to use them in code.
 *
 * @return int Returns 0 on successful execution.
 */
int main() {

  cout << "--- Unscoped Enum Example ---" << endl;
  
  MonthsUnscoped my_month = April;
  
  if (my_month == April) {
    cout << "Wybrany miesiac to Kwiecien." << endl;
  }
  
  cout << "January to miesiac nr: " << January << endl;
  cout << "December to miesiac nr: " << December << endl;
  cout << "Wartosc my_month: " << my_month << endl;

  MonthsScoped current_month = MonthsScoped::Apr;

  if (current_month == MonthsScoped::Apr) {
      cout << "Obecny miesiac to Kwiecien." << endl;
  }

  cout << "Wartosc current_month: " << static_cast<int>(current_month) << endl;
  cout << "Wartosc grudnia (Dec): " << static_cast<int>(MonthsScoped::Dec) << endl;

  return 0;
}