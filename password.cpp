#include<bits/stdc++.h>
using namespace std;
string generatePassword(int length)
{
    string chars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*";
    string password = "";

    for (int i = 0; i < length; i++) {
        password += chars[rand() % chars.size()];
    }

    return password;
}

int main()
{
    srand(time(0));

    int length;
    char choice;

    cout << "Enter password length: ";
    cin >> length;
    bool ok=true;

    while (ok)
        {
        string password = generatePassword(length);

        cout << "Generated Password: " << password << endl;

        cout << "Do you want another password (yes or no)?: "<<endl;
        cin >> choice;

        if (choice == 'y' || choice == 'Y') {
          cout<<"New Length:";
          cin>>length;
            continue;
        }
        else if (choice == 'n' || choice == 'N')
        {
            cout << "End"<<endl;
            ok=false;

        }
    }

    return 0;
}
