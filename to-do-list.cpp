#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    int choice;
    string task;

    do {
        cout <<" TO-DO LIST "<<endl;
        cout << "1. Add Task" <<endl;
        cout << "2. View Tasks" <<endl;
        cout << "3. Exit" <<endl;
        cout << "Enter choice: " <<endl;
        cin >> choice;
        cin.ignore();

        if (choice == 1) {
            cout << "Enter task: ";
            getline(cin, task);

            ofstream file("tasks.txt");
            file << task << endl;
            file.close();

            cout << "Task added successfully!" <<endl;
        }

        else if (choice == 2) {
            ifstream file("tasks.txt");
            string line;

            cout <<" Your Tasks " <<endl;
            while (getline(file, line)) {
                cout << "- " << line << endl;
            }
            file.close();
        }

    } while (choice != 3);

    cout << "Goodbye!"<<endl;

    return 0;
}

