#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

class Student {
public:
    string name;
    int roll;
    float marks;
    string address;

    void getData() {
        cout << "Name: "; cin.ignore(); getline(cin, name);
        cout << "Roll: "; cin >> roll;
        cout << "Marks: "; cin >> marks;
        cout << "Address: "; cin.ignore(); getline(cin, address);
    }

    void displayData() const {
        cout << "Name: " << name << endl;
        cout << "Roll: " << roll << endl;
        cout << "Marks: " << marks << endl;
        cout << "Address: " << address << endl;
    }

    bool operator==(int rollNum) const {
        return roll == rollNum;
    }
};

void writeRecords(const vector<Student>& students, const string& filename) {
    ofstream outFile(filename, ios::binary);
    for (const auto& student : students) {
        outFile.write(student.name.c_str(), student.name.size() + 1);
        outFile.write(reinterpret_cast<const char*>(&student.roll), sizeof(student.roll));
        outFile.write(reinterpret_cast<const char*>(&student.marks), sizeof(student.marks));
        outFile.write(student.address.c_str(), student.address.size() + 1);
    }
}

vector<Student> readRecords(const string& filename) {
    vector<Student> students;
    ifstream inFile(filename, ios::binary);
    Student student;
    while (inFile) {
        getline(inFile, student.name, '\0');
        inFile.read(reinterpret_cast<char*>(&student.roll), sizeof(student.roll));
        inFile.read(reinterpret_cast<char*>(&student.marks), sizeof(student.marks));
        getline(inFile, student.address, '\0');
        if (inFile) {
            students.push_back(student);
        }
    }
    return students;
}

void updateRecord(vector<Student>& students, int roll) {
    auto it = find_if(students.begin(), students.end(), [roll](const Student& s) { return s.roll == roll; });
    if (it != students.end()) {
        cout << "Enter new details:" << endl;
        it->getData();
    } else {
        cout << "Record not found!" << endl;
    }
}

void searchRecord(const vector<Student>& students, int roll) {
    auto it = find_if(students.begin(), students.end(), [roll](const Student& s) { return s.roll == roll; });
    if (it != students.end()) {
        it->displayData();
    } else {
        cout << "Record not found!" << endl;
    }
}

void deleteRecord(vector<Student>& students, int roll) {
    auto it = remove_if(students.begin(), students.end(), [roll](const Student& s) { return s.roll == roll; });
    if (it != students.end()) {
        students.erase(it, students.end());
        cout << "Record deleted." << endl;
    } else {
        cout << "Record not found!" << endl;
    }
}

int main() {
    vector<Student> students;
    string filename = "students.dat";

    while (true) {
        cout << "\nMenu:\n1. Write Records\n2. Read Records\n3. Update Record\n4. Search Record\n5. Delete Record\n6. Count Records\n7. Exit\n";
        int choice;
        cin >> choice;

        switch (choice) {
        case 1: {
            int n;
            cout << "Enter number of students: ";
            cin >> n;
            students.clear();
            for (int i = 0; i < n; ++i) {
                Student student;
                student.getData();
                students.push_back(student);
            }
            writeRecords(students, filename);
            break;
        }
        case 2: {
            students = readRecords(filename);
            for (const auto& student : students) {
                student.displayData();
                cout << "-----------------------------" << endl;
            }
            break;
        }
        case 3: {
            int roll;
            cout << "Enter roll number to update: ";
            cin >> roll;
            students = readRecords(filename);
            updateRecord(students, roll);
            writeRecords(students, filename);
            break;
        }
        case 4: {
            int roll;
            cout << "Enter roll number to search: ";
            cin >> roll;
            students = readRecords(filename);
            searchRecord(students, roll);
            break;
        }
        case 5: {
            int roll;
            cout << "Enter roll number to delete: ";
            cin >> roll;
            students = readRecords(filename);
            deleteRecord(students, roll);
            writeRecords(students, filename);
            break;
        }
        case 6: {
            students = readRecords(filename);
            cout << "Total records: " << students.size() << endl;
            break;
        }
        case 7:
            return 0;
        default:
            cout << "Invalid choice!" << endl;
        }
    }
    return 0;
}
