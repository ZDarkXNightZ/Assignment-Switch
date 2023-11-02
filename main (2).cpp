#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <cmath>

using namespace std;
int main()
{
string cr;

    cout<<"Which Course Would You Like to Pick? (Initial of the course ):";
    cin>>cr;

    cout<<"\n";
    
    switch(cr[0])
    {
            
        case 'A':
            cout<<"You chose Music!\n";
            break;
            
        case 'E':
            cout<<"You chose English!\n";
            break;
            
        case 'G':
            cout<<"You chose Gym!\n";
            break;
            
        case 'I':
        cout<<"You chose Computer science!\n";
        break;
        
        case 'M':
            cout<<"You chose Math!\n";
            break;
            
        case 'S':
            cout<<"You chose Chemistry!\n";
            break;

        default:
            cout<<"We don't serve that course here.\n";
        }
    }