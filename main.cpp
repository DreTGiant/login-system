#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool isLoggedIn()
{
    string username, password, un, pw;

    cout << "Enter username: ";
    cin >> username;

    cout << "Enter password: ";
    cin >> password;

    ifstream read("c:\\" + username + ".txt");
    getline(read, un);
    getline(read, pw);

    if (un == username && pw == password)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int choice;

    cout << "1. Register" << endl;
    cout << "2. Login" << endl;
    cout << "Your choice: ";
    cin >> choice;

    if (choice == 1)
    {
        string username, password;

        cout << "Select a username: ";
        cin >> username;
        cout << "Select a string password: ";
        cin >> password;

        ofstream file;
        file.open("c:\\" + username + ".txt");
        file << username << endl
             << password;
        file.close();

        main();
    }
    else if (choice == 2)
    {
        bool status = isLoggedIn();

        if (!status)
        {
            cout << "Login Failed" << endl;
            return 0;
        }
        else
        {
            cout << "Succesfully Logged In!\n";
            return 1;
        }
    }
}