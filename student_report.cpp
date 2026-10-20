#include <iostream>
using namespace std;
class Student {
    private :
    string name; 
    int roll_number;
    double marks; 

    public:
    Student (string n = "guest", int roll = 0, double m = 0.0) {
        name = n;
        roll_number = roll;
        marks = m;
    }
    void setDetails(string n, int roll, double marks) {
        cout<<"Name:"<<n<<endl;
         cout<<"Roll no:"<<roll<<endl;
          cout<<"marks:"<<marks<<endl;
        
    }
char getMarks () {
    if (marks >80) {
            cout<<"Grade A"<<endl;
        }
            else if (marks>70) {
cout<<"Grade B"<<endl;
            }
            else if (marks >60) {
                cout<<"Grade C"<<endl;
            }
            else {
                cout<<"Grade D"<<endl;
            }
} 
void displayResult() {
        cout << "-----------------------\n";
        cout << "Name: " << name << "\n";
        cout << "Roll Number: " << roll_number << "\n";
        cout << "Marks: " << marks << "\n";
        cout << "Grade: " << getMarks() << "\n";
        cout << "-----------------------\n";
}
};
int main () {
    Student s1;
    s1.setDetails("Swapnil",453,80);
    s1.getMarks();
    s1.displayResult();
    return 0;
}