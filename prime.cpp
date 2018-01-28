#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    bool flag = true;
    for (int i = 2; i < a; i ++)
    {
        if (a%i == 0)
        {
            flag = false; 
            break;
        }
    }
    if (flag == true)
        cout << "SNT";
    else
        cout << "not SNT";
    return 0;
    


}
