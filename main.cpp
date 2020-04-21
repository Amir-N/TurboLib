#include <iostream>
#include "TStrings.h"

using namespace std;

int main()
{
    TStrings firs_str;
    TStrings sec_str ("C++");
    TStrings third_str {"Semitcolons"};
    TStrings fourth_str(sec_str);
    firs_str = sec_str;

    cout << sec_str <<endl;
    cout << third_str <<endl;
    cout << fourth_str <<endl;
    cout << third_str.at(0) <<endl;
    cout << sec_str[0] <<endl;
    cout << firs_str <<endl;
    sec_str[0] = 'D';
    cout << sec_str <<endl;
    return 0;
}
