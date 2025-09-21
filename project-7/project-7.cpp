#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Template Student class

template <class T>
class Student
{
    T id;
    string name;

public:

    Student(T i, string n)
    {
        id = i;
        name = n;
    }

    void display()
    {
        cout << "ID: " << id << " | Name: " << name << endl;
    }

    T getId() 
    {
        return id;
    }
};

int main()
{
    vector<Student<int> > students; 
    int choice;

    do
    {
        cout << "\n--- Student Management System ---" << endl;
        cout << "1. Add Student " << endl;
        cout << "2. Display All Students " << endl;
        cout << "3. Remove Student by ID " << endl;
        cout << "4. Search Student by ID " << endl;
        cout << "5. Exit " << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) 
        {
            int id;
            string name;

            cout << "Enter Student ID: ";
            cin >> id;

            cout << "Enter Student Name: ";
            cin >> name;

            students.push_back(Student<int>(id, name));
            cout << "Student Added Successfully!" << endl;
        }
        else if (choice == 2) 
        {
            cout << "\n--- All Students ---" << endl;
            for (int i = 0; i < students.size(); i++)
            {
                students[i].display();
            }
        }
        else if (choice == 3) 
        {
            int id;

            cout << "Enter ID to Remove: ";
            cin >> id;

            bool found = false;

            for (int i = 0; i < students.size(); i++)
            {
                if (students[i].getId() == id)
                {
                    students.erase(students.begin() + i);
                    cout << "Student Removed Successfully!" << endl;
                    found = true;
                    break;
                }
            }
            if (!found)
                cout << "Student Not Found!" << endl;
        }
        else if (choice == 4) 
        {
            int id;

            cout << "Enter ID to Search: ";
            cin >> id;

            bool found = false;

            for (int i = 0; i < students.size(); i++)
            {
                if (students[i].getId() == id)
                {
                    cout << "Student Found:" << endl;
                    students[i].display();
                    found = true;
                    break;
                }
            }
            if (!found)
                cout << "Student Not Found!" << endl;
        }
        else if (choice == 5)
        {
            cout << "Exiting..." << endl;
        }
        else
        {
            cout << "Invalid Choice! Try Again." << endl;
        }

    } while (choice != 5);

    return 0;
}
