#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <cmath>

using namespace std;
int main()
{
int num;

    cout << "Enter a number between 1 and 10.\n";
    cin >> num;

    switch(num)
    {
        case 1:
        
        case 3:
        cout << "Your number is a low odd number.\n";
        break;
       
        case 2:
        
        case 4:
        cout << "Your number is a low even number.\n";
        break;
            
        case 5:
        cout << "Your number is the middle odd number.\n";
        break;
            
        case 6:
        cout << "Your number is the middle even number.\n";
        break;
            
        case 7:
        case 9:
        cout << "Your number is a high odd number.\n";
        break;
            
        case 8:
        case 10:
        cout << "Your number is a high even number\n";
        break;
        
        default:
        cout << "You entered an invalid statement.\n";
    }
}