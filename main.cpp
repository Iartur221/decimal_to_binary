#include <iostream>
#include <string>

using namespace std;
string convert(int decimal, string& g)
{
    int x = decimal % 2;
    int y = decimal / 2;
    g += to_string(x);
    if (y == 0)
        return g;
    return convert(y, g);
}

void reverseStr(string& str)
{
    int n = str.length();

    // Swap character starting from two
    // corners
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
}

int main() {

    int number = 2137;
    string g;
    g = convert(number, g);
    reverseStr(g);

    cout << g;
}
