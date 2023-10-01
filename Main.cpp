#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "Functions.h"
using namespace std;

int main()
{
    string rejouer("oui");

    while (rejouer == "oui")
    {
        partie();

        cout << "Voulez vous rejouer (oui/non) ?" << endl;
        cin >> rejouer;
    }
}