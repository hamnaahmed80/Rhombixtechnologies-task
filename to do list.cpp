#include <iostream>
#include <string>

using namespace std;

int main()
{
    string tasks[100];
    bool completed[100] = {false};
    int totalTasks = 0;
    int choice;

    do{
        cout << "\n===== TO-DO LIST =====\n";
        cout << "1. Add Task\n";
        cout << "2. View Tasks\n";
        cout << "3. Mark Task as Completed\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
        case 1:
            if (totalTasks < 100){
                cout << "Enter task: ";
                getline(cin, tasks[totalTasks]);
                completed[totalTasks] = false;
                totalTasks++;
                cout << "Task added successfully!\n";
            }
            else{
                cout << "Task list is full!\n";
            }
            break;

        case 2:
            if (totalTasks == 0){
             cout << "No tasks available.\n";
            }
            else{
	            cout << "\nCurrent Tasks:\n";
                for (int i = 0; i < totalTasks; i++){
                    cout << i + 1 << ". ";
                    if (completed[i])
                        cout << "[Completed] ";
                    else
                        cout << "[Pending] ";

                    cout << tasks[i] << endl;
                }
            }
            break;

        case 3:
            if (totalTasks == 0){
                cout << "No tasks available.\n";
            }
            else {
                int taskNo;
                cout << "Enter task number: ";
                cin >> taskNo;

                if (taskNo >= 1 && taskNo <= totalTasks){
                    completed[taskNo - 1] = true;
                    cout << "Task marked as completed!\n";
                }
                else{
                    cout << "Invalid task number!\n";
                }
            }
            break;

        case 4:
            cout << "Exiting program...\n";
            break;

        default:
            cout << "Invalid choice!\n";
        }

    } while (choice != 4);

    return 0;
}
