// Ingredient Adjuster.cpp : A program to determine thje amount of ingredients usesd to bake cookies
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // setup the variables and constants
    double baseCookies = 48, bakeCookies;
    double sugarPerCookie = 1.5 / baseCookies, butterPerCookie = 1.0 / baseCookies, flourPerCookie = 2.75 / baseCookies;
    double sugarNeeded, butterNeeded, flourNeeded;

    // ask the user for the amopunt of cookies
    cout << "Please enter the number of cookies you wish to bake: ";
    cin >> bakeCookies;

    // calculate the amount of ingredients
    sugarNeeded = sugarPerCookie * bakeCookies;
    butterNeeded = butterPerCookie * bakeCookies;
    flourNeeded = flourPerCookie * bakeCookies;

    // tell the user the amount of ingredients needed
    cout << "For " << bakeCookies << " cookies you will need the following ingredients.\n";
    cout << fixed;
    cout << left;
    cout << setprecision(2);
    cout << setw(4) << sugarNeeded << " cups of sugar.\n";
    cout << setw(4) << butterNeeded << " cups of butter.\n";
    cout << setw(4) << flourNeeded << " cups of flour.\n";
    return 0;
    
}

