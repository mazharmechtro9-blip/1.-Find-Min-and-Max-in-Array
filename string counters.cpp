#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    char ch;
    int c=0, sp=0, t=0, l=0;
    cout << "Enter text (end with #):" << endl;
    while(cin.get(ch) && ch != '#') {
        c++;
        if(ch == ' ') sp++;
        if(ch == '\t') t++;
        if(ch == '\n') l++;
    }
    cout << "Chars: " << c << "\nSpaces: " << sp << "\nTabs: " << t << "\nLines: " << l+1;
    return 0;
}
