#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main()
{
    stringstream strstr;
    int oneInt;
    char twoChar;
    string threeString;
    char fourChar;
    float fiveFloat;
    
    strstr << 54 << '|' << "hellow my name is Julian" << '|' << 32.0;
    
    cout << strstr.str() << endl;
    
    strstr >> oneInt >> twoChar >> threeString >> fourChar >> fiveFloat;
    
    cout << "(" << oneInt << ")(" << twoChar << ")(" << threeString << ")(" << fourChar << ")(" << fiveFloat << ")" << endl;
    
    return 0;
}