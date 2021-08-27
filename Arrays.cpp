#include <iostream>
#include <vector>
#include <string>
#include <fstream>

//comment

using namespace std;

int main()
{
    int myFavNums[5];
    int badNums[5] = {4, 13, 14, 24, 34};

    cout << "Bad Number 1: " << badNums[0] << endl;
    
    char myName[6][6] = {{'S', 'y', 'd', 'n', 'e', 'y'},
                        {'M', 'a', 'g', 'e', 'e'}};

    cout << "2nd letter in 2nd array " << myName[1][1] << endl;

    

    return 0;
}
