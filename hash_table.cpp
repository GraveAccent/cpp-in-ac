// author: 里克
#include <iostream>
using namespace std;
int main()
{
    char charr[27];
    char ch, gh;
    int i, k, arr[26] = {0};

    for(gh = 'a', i = 0; gh <= 'z'; gh++, i++)
        charr[i] = gh;
    while(1)
    {
        while(1)
        {
        //    cin.get(ch);
            ch = cin.get();
            if (ch == '\n')
                break;
            else if (!cin)
                return 0;
            if (ch >= 'a' && ch <= 'z')
                arr[ch - 'a']++;
        }

        if (!cin)
            return 0;
        for (i = 1; i < 26; i++)
        {
            cout << charr[i] << ":" << arr[i] << endl;
            arr[i] = 0;
        }
        cout << endl;
    }
}
