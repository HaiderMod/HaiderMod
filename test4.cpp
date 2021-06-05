#include <iostream>
using namespace std;

int main()
{
    int age, toll, iif;
    char type;

    cout << "Enter Your Age" << endl;
    cin >> age;
    cout << "Enter Your Toll" << endl;
    cin >> toll;
    cout << "Enter Your Type  (m) or (f)  (male) or (female)" << endl;
    cin >> type;

    cout << endl
         << endl
         << endl
         << "Your Info : " << age << endl
         << toll << endl
         << type << endl;

    cout << ". . . . . . ." << endl;
    cin >> iif;

    if (true)
        cout << "Whait your full info" << endl;
    else
        cout << " bruh" << endl;
    {
        if (age < 18 && type == 'm')
            cout << endl
                 << "He is (Boy) and (Male) " << endl;
        else if (age > 18 && age < 50 && type == 'm')
            cout << "He is (Young) and (Male)" << endl;
        else if (age > 50 && type == 'm')
            cout << "He is (Old) and (Male)" << endl;
        else if (age < 18 && type == 'f')
            cout << "She is (Girl) and (Female)" << endl;
        else if (age > 18 && age < 50 && type == 'f')
            cout << "She is (Girl) and (Female)" << endl;
        else if (age > 50 && type == 'f')
            cout << "He is (Old) and (Female)" << endl;


        else cout << "bruh" << endl;
    }
            cout << endl
             << endl
             << endl
             << endl;
    return 0;
}