#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int a = 5;
    int b = 5;
    cout << a + b << endl;
    string c = "Cisco ";
    string d = "Ramon";
    string con = c + d;
    cout << con << endl; //concatenation
    char e[7] = "Cisco ";
    char f[6] = "Ramon";
    cout << e << f << endl;
    char g[14];
    strcat(g, e);
    strcat(g, "R");
    cout << g << endl;
    puts(g);

    return 0;
}