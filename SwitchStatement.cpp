#include <iostream>
#include <vector>
#include <string>
#include <fstream>

//Always goes to default??

using namespace std;

int main()
{
    int greetingOption = 1;
    
    switch(greetingOption)
    {
        case1:
            cout << "bonjour" << endl;
            break;
        case2:
            cout << "Hello" << endl;
            break;
        case3:
            cout << "Hola" << endl;
            break;
        default:
            cout << "Hi" << endl;
    }
    return 0; 
}
