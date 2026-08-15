#include <iostream>
#include <string>
using namespace std;

int main()
{
    string username;
    string password;

    cout << "===== QUIZ GAME =====\n\n";

    // Registration
    cout << "Create Username: ";
    cin >> username;

    cout << "Create Password: ";
    cin >> password;

    cout << "\nRegistration Successful!\n";
    // Login
    string user;
    string pass;

    cout << "\n===== LOGIN =====\n";

    cout << "Enter Username: ";
    cin >> user;

    cout << "Enter Password: ";
    cin >> pass;

    if(user != username || pass != password)
    {
        cout << "\nWrong Username or Password!\n";
        return 0;
    }

    cout << "\nLogin Successful!\n";
    cout << "Welcome " << username << "!\n\n";

    int score = 0;
    char answer;

    cout << "1. What is the capital of Pakistan?\n";
    cout << "A. Lahore\n";
    cout << "B. Karachi\n";
    cout << "C. Islamabad\n";
    cout << "D. Peshawar\n";

    cout << "Your answer: ";
    cin >> answer;

    if(answer == 'C' || answer == 'c')
        score++;

    cout << "\n2. Which language is used for this program?\n";
    cout << "A. C++\n";
    cout << "B. HTML\n";
    cout << "C. CSS\n";
    cout << "D. SQL\n";

    cout << "Your answer: ";
    cin >> answer;

    if(answer == 'A' || answer == 'a')
        score++;

    cout << "\n3. Which planet is known as the Red Planet?\n";
    cout << "A. Earth\n";
    cout << "B. Mars\n";
    cout << "C. Venus\n";
    cout << "D. Jupiter\n";

    cout << "Your answer: ";
    cin >> answer;

    if(answer == 'B' || answer == 'b')
        score++;

    cout << "\n4. How many bits are in one byte?\n";
    cout << "A. 4\n";
    cout << "B. 8\n";
    cout << "C. 16\n";
    cout << "D. 32\n";

    cout << "Your answer: ";
    cin >> answer;

    if(answer == 'B' || answer == 'b')
        score++;

    cout << "\n5. Which device is used to enter data?\n";
    cout << "A. Monitor\n";
    cout << "B. Printer\n";
    cout << "C. Keyboard\n";
    cout << "D. Speaker\n";

    cout << "Your answer: ";
    cin >> answer;

    if(answer == 'C' || answer == 'c')
        score++;

    cout << "\n===== RESULT =====\n";

    cout << "Your Score: " << score << "/5\n";

    cout << "\nCorrect Answers:\n";
    cout << "1. C - Islamabad\n";
    cout << "\n2. A - C++";
    cout << "\n3. B - Mars";
    cout << "\n4. B - 8 bits";
    cout << "\n5. C - Keyboard\n";

    if(score >= 4)
        cout << "\nExcellent!\n";
    else if(score >= 3)
        cout << "\nGood Job!\n";
    else
        cout << "\nNeed More Practice!\n";

    return 0;
}
