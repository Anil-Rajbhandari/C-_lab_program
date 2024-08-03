#include <iostream>
#include <fstream>
using namespace std;

struct Student {
    char name[50];
    int roll;
    float marks;
    char address[100];
};

int main() {
    ofstream outFile("students.dat", ios::binary);
    if (!outFile) {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    int n;
    cout << "Enter the number of students: ";
    cin >> n;

    Student student;
    for (int i = 0; i < n; ++i) {
        cout << "Enter details for student " << i + 1 << endl;
        cout << "Name: "; cin >> ws; cin.getline(student.name, 50);
        cout << "Roll: "; cin >> student.roll;
        cout << "Marks: "; cin >> student.marks;
        cout << "Address: "; cin >> ws; 
         cin.getline(student.address, 100);
        outFile.write(reinterpret_cast<char*>(&student), sizeof(Student));
    }

    outFile.close();

    ifstream inFile("students.dat", ios::binary);
    if (!inFile) {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    cout << "\nStored Records:" << endl;
    while (inFile.read(reinterpret_cast<char*>(&student), sizeof(Student))) {
        cout << "Name: " << student.name << endl;
        cout << "Roll: " << student.roll << endl;
        cout << "Marks: " << student.marks << endl;
        cout << "Address: " << student.address << endl;
        cout << "-----------------------------" << endl;
    }

    inFile.close();
    return 0;
}
