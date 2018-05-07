/* P
 * N R S
 * i是P(确定),a是N(确定),b&c是R,s是S(确定),d是s的index */
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s[20];
    int i, a, b, c, d;
    cin >> i;
    for (; i > 0; i--)
    {
        cin >> a >> b;          // 可以不按enter，空格就行
        cin.getline(s, 20);
        cout << a << " ";
        for (d = 1; s[d] != '\0'; d++)
        {
            c = b;
            for (; b > 0; b--)  // 需要复位
            {
                cout << s[d];
            }
            b = c;
        }
        cout << endl;
    }
}
