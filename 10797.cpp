#include <iostream>
using namespace std;

int main()
{
    int day;
    int carNum[5];
    int count = 0;

    cin >> day;
    if ((day >= 0 && day <= 9) != true)
        return 0;

    cin >> carNum[0] >> carNum[1] >> carNum[2] >> carNum[3] >> carNum[4];

    for (int i = 0; i < 5; i++)
    {
        if (day == carNum[i])
            count++;
    }

    cout << count << endl;
    return 0;
}