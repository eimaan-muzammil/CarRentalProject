#include <iostream>
using namespace std;


int main()
{

  string name;
  int rollno;
  float cgpa;

  cout << "Enter the name" << endl;
  cin >> name;
  cout << "Enter the rollno" << endl;
  cin >> rollno;
  cout << "Enter the cgpa" << endl;
  cin >> cgpa;

  Student s1(name, rollno, cgpa);

  s1.print_details();

  s1.study();

  cout << "Grade : " << s1.grade() << endl;

  cout << "Number of students: " << Student::countstudent << endl;

  int operation;
  char ans = 'Y';
  do
  {
    cout << "Select the Operation: " << endl;
    cout << "1. Change name" << endl;
    cout << "2. Change roll number" << endl;
    cout << "3. Change cgpa" << endl;
    cout << "Choosen Operation is: ";
    cin >> operation;

    switch (operation)
    {
    case 1:

      cout << "Enter the new name of the student: ";
      cin >> name;
      s1.set_name(name);
      cout << "The name of the student is changed to " << s1.get_name() << endl;
      s1.study();
      cout << "Grade " << s1.grade() << endl;
      cout << "Number of students: " << Student::countstudent << endl;
      break;
    case 2:

      cout << "Enter the new roll number of the student: ";
      cin >> rollno;
      s1.set_rollno(rollno);
      cout << "The roll number of the student is changed to " << s1.get_rollno() << endl;
      s1.study();
      cout << "Grade " << s1.grade() << endl;
      cout << "Number of students: " << Student::countstudent << endl;
      break;
    case 3:

      cout << "Enter the new cgpa of the student: ";
      cin >> cgpa;
      s1.set_cgpa(cgpa);
      cout << "The cgpa of the student is changed to " << s1.get_cgpa() << endl;
      s1.study();
      cout << "Grade " << s1.grade() << endl;
      cout << "Number of students: " << Student::countstudent << endl;
      break;
    default:
      cout << "Please enter a valid operation." << endl;
      break;
    }
    cout << "Do you want to continue (Y/N)?\n";

    cin >> ans;
  } while (ans == 'Y' || ans == 'y');

  return 0;
}
