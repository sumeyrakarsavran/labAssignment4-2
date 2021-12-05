#include <iostream>
using namespace std;

int main()
{
    
    int lines;
    cout << "enter number:";
    cin >> lines;

    for (int i = 1;i <= lines;++i)
    {
        for (int j = lines;j > i;--j)
        {
            cout << "  ";
        }

        for (int k = 1;k <= i;++k) {
            cout << "*";
        }
        cout << endl;
    }


    for (int i = lines-1;i >= 1;--i)
    {
        for (int j = lines;j > i;--j)
        {
            cout << "  ";
        }

        for (int k =1;k <= i;++k) {
            cout << "*";
        }
        cout << endl;
    }


    




}

