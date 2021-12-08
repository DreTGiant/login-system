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
    cin >> pw;

    ifstream read("data\\" + username + ".txt");
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

    cout << "1. Login" << endl;
    cout << "2.Register" << endl;
    cout << "Your choice: ";
    cin >> choice;

    if (choice == 1)
    {
        string username, password;

        cout << "Select a username: ";
        cin >> username;
        cout << "Select a string password: ";
        cin >> password;
    }
}