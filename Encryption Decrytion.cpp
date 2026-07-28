#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int choice, key;
    char ch;

    cout << "1. Encrypt File" << endl;
    cout << "2. Decrypt File" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter key: ";
    cin >> key;

    ifstream infile("input.txt");
    ofstream outfile;

    if (choice == 1)
    {
        outfile.open("encrypted.txt");

        while (infile.get(ch))
        {
            ch = ch + key;
            outfile.put(ch);
        }

        cout << "File Encrypted Successfully!" << endl;
    }
    else if (choice == 2)
    {
        infile.close();
        infile.open("encrypted.txt");

        outfile.open("decrypted.txt");

        while (infile.get(ch))
        {
            ch = ch - key;
            outfile.put(ch);
        }

        cout << "File Decrypted Successfully!" << endl;
    }
    else
    {
        cout << "Invalid Choice!" << endl;
    }

    infile.close();
    outfile.close();

    return 0;
}
