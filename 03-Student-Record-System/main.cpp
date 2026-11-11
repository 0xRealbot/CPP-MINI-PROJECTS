
#include <iostream>
#include <string>
using namespace std;

struct Student {
    int id;
    string name;
    int age;
    double marks;
};

int main() {
    Student students[50];
    int count = 0;
    int choice;

    do {
        cout << "\n===== STUDENT RECORD SYSTEM =====\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Search Student by ID\n";
        cout << "4. Calculate Average Marks\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                if (count >= 50) {
                    cout << "Student limit reached!\n";
                    break;
                }

                cout << "Enter student ID: ";
                cin >> students[count].id;

                cout << "Enter student name: ";
                getline(cin >> ws, students[count].name);

                cout << "Enter age: ";
                cin >> students[count].age;

                cout << "Enter marks: ";
                cin >> students[count].marks;

                count++;
                cout << "Student added successfully!\n";
                break;
            }

            case 2:
                if (count == 0) {
                    cout << "No student records found.\n";
                } else {
                    for (int i = 0; i < count; i++) {
                        cout << "\nStudent " << i + 1 << "\n";
                        cout << "ID: " << students[i].id << "\n";
                        cout << "Name: " << students[i].name << "\n";
                        cout << "Age: " << students[i].age << "\n";
                        cout << "Marks: " << students[i].marks << "\n";
                    }
                }
                break;

            case 3: {
                int searchID;
                bool found = false;

                cout << "Enter ID to search: ";
                cin >> searchID;

                for (int i = 0; i < count; i++) {
                    if (students[i].id == searchID) {
                        cout << "Student found!\n";
                        cout << "Name: " << students[i].name << "\n";
                        cout << "Age: " << students[i].age << "\n";
                        cout << "Marks: " << students[i].marks << "\n";
                        found = true;
                        break;
                    }
                }

                if (!found) {
                    cout << "Student not found.\n";
                }
                break;
            }

            case 4:
                if (count == 0) {
                    cout << "No marks available.\n";
                } else {
                    double total = 0;

                    for (int i = 0; i < count; i++) {
                        total += students[i].marks;
                    }

                    cout << "Average marks: "
                         << total / count << "\n";
                }
                break;

            case 5:
                cout << "Exiting Student Record System...\n";
                break;

            default:
                cout << "Invalid choice! Try again.\n";
        }

    } while (choice != 5);

    return 0;
}
