#include "Tree.h"
#include "Student.h"
#include "Faculty.h"
#include <fstream>
#include <iostream>
#include <string>
#include <algorithm>


using namespace std;

class Program {
public:
  string newLineCharacter;
  int userChoice;
  string response;
  int tempStudentID;
  int tempFacultyID;
  int tempAdvisorID;
  int tempNumberOfAdvisees;
  string studentFile;
  string studentLine;
  string studentID;
  int studentIntID;
  string facultyFile;
  string facultyLine;
  string facultyID;
  int facultyIntID;
  TreeNode<Student>* tempSRoot;
  TreeNode<Faculty>* tempFRoot;
  Tree<Student> studentTable;
  Tree<Faculty> facultyTable;
  Program(string sF, string fF);
  ~Program();
  void processFile(); //initialize trees here
  void programSimulation();
  void printStudents();
  void printFaculty();
  void displayStudent(int sID);
  void displayFaculty(int fID);
  void displayAdvisor(int sID);
  void displayAdvisees(int fID);
  void addStudent(int i, string n, string l, string m, double g, int aID);
  void deleteStudent(int sID);
  void addFaculty(int i, string n, string l, string d, int nOA, int* aIDs);
  void deleteFaculty(int fID);
  void changeAdvisor(int sID, int fID);
  void removeAdvisee(int fID, int sID);
  void exitProgram();
};

Program::Program(string sF, string fF) {
  userChoice = 0;
  response = "";
  tempStudentID = 0;
  tempFacultyID = 0;
  tempAdvisorID = 0;
  tempNumberOfAdvisees = 0;
  studentFile = sF;
  studentLine = "";
  studentID = "";
  studentIntID = 0;
  facultyFile = fF;
  facultyLine = "";
  facultyID = "";
  facultyIntID = 0;
}

Program::~Program() {
  return;
}

void Program::processFile() {
  ifstream in_file1;
  in_file1.open(studentFile, ios::in);
  Student s = Student();
  ifstream in_file2;
  in_file2.open(facultyFile, ios::in);
  Faculty f = Faculty();


  if ((in_file1.fail()) && (in_file2.fail())) {
    cout << "Files don't exist. Please add students and faculty." << endl;
    programSimulation();
  }
  else {
    while (getline(in_file1, studentID, ':')) {
      studentID.erase(remove_if(studentID.begin(), studentID.end(), ::isspace), studentID.end());
      if (studentID.empty()) {
        break;
      }
      else {
        studentIntID = stoi(studentID);
        in_file1 >> s.name >> s.level >> s.major >> s.gpa >> s.advisorID;
        studentTable.insert(new TreeNode<Student> (s, studentIntID));
      }
    }

    in_file1.close();

    while (getline(in_file2, facultyID, ':')) {
      facultyID.erase(remove_if(facultyID.begin(), facultyID.end(), ::isspace), facultyID.end());
      if (facultyID.empty()){
        break;
      }
      else {
        facultyIntID = stoi(facultyID);
        in_file2 >> f.name >> f.level >> f.department >> f.numberOfAdvisees;
        for (int i = 0; i < f.numberOfAdvisees; i++){
          in_file2 >> f.adviseeIDs[i];
        }
        facultyTable.insert(new TreeNode<Faculty> (f, facultyIntID));
      }
    }

    in_file2.close();
    programSimulation();
  }
}

void Program::programSimulation() {
  while (userChoice != 14) {
    cout << endl;
    cout << "Menu: " << endl;
    cout << "1. Print all students and their information (sorted by ascending id #)." << endl;
    cout << "2. Print all faculty and their information (sorted by ascending id #)." << endl;
    cout << "3. Find and display student information given the students id." << endl;
    cout << "4. Find and display faculty information given the faculty id." << endl;
    cout << "5. Given a student’s id, print the name and info of their faculty advisor." << endl;
    cout << "6. Given a faculty id, print ALL the names and info of his/her advisees." << endl;
    cout << "7. Add a new student." << endl;
    cout << "8. Delete a student given the id." << endl;
    cout << "9. Add a new faculty member." << endl;
    cout << "10. Delete a faculty member given the id." << endl;
    cout << "11. Change a student’s advisor given the student id and the new faculty id." << endl;
    cout << "12. Remove an advisee from a faculty member given the ids." << endl;
    // cout << "13. Rollback" << endl;
    cout << "14. Exit" << endl;
    cout << endl;
    cout << "Please enter which menu option you would like." << endl;
    cin >> userChoice;
    cout << endl;

    if (userChoice == 1) {
      printStudents();            // still need to finish this function
    }
    else if (userChoice == 2) {
      printFaculty();             // still need to finish this function
    }
    else if (userChoice == 3) {
      cout << "Please enter the student's id." << endl;
      cin >> tempStudentID;

      displayStudent(tempStudentID);
    }
    else if (userChoice == 4) {
      cout << "Please enter the faculty member's id." << endl;
      cin >> tempFacultyID;

      displayFaculty(tempFacultyID);
    }
    else if (userChoice == 5) {
      cout << "Please enter the student's id." << endl;
      cin >> tempStudentID;

      displayAdvisor(tempStudentID);
    }
    else if (userChoice == 6) {
      cout << "Please enter the faculty member's id." << endl;
      cin >> tempFacultyID;

      displayAdvisees(tempFacultyID);
    }
    else if (userChoice == 7) {
      Student s = Student();
      cout << "Please enter the new student's id." << endl;
      cin >> tempStudentID;
      cout << "Please enter the new student's name. Don't add spaces." << endl;
      cin >> s.name;
      cout << "Please enter the new student's level." << endl;
      cin >> s.level;
      cout << "Please enter the new student's major. Don't add spaces." << endl;
      cin >> s.major;
      cout << "Please enter the new student's GPA." << endl;
      cin >> s.gpa;
      cout << "Please enter the new student's advisor's id." << endl;
      cin >> s.advisorID;

      addStudent(tempStudentID, s.name, s.level, s.major, s.gpa, s.advisorID);

      cout << "Would you like to rollback (undo) the addition of this student? (Yes/No)" << endl;
      cin >> response;

      if (response == "Yes") {
        deleteStudent(tempStudentID);
      }
    }
    else if (userChoice == 8) {
      cout << "Please enter the student's id whom you'd like to remove." << endl;
      cin >> tempStudentID;

      Student s = studentTable.search(tempStudentID);

      deleteStudent(tempStudentID);

      cout << "Would you like to rollback (undo) the removal of this student? (Yes/No)" << endl;
      cin >> response;

      if (response == "Yes") {
        addStudent(tempStudentID, s.name, s.level, s.major, s.gpa, s.advisorID);
      }
    }
    else if (userChoice == 9) {
      Faculty f = Faculty();
      cout << "Please enter the new faculty member's id." << endl;
      cin >> tempFacultyID;
      cout << "Please enter the new faculty member's name." << endl;
      cin >> f.name;
      cout << "Please enter the new faculty member's level." << endl;
      cin >> f.level;
      cout << "Please enter the new faculty member's department." << endl;
      cin >> f.department;
      cout << "Please enter the new faculty member's number of advisees." << endl;
      cin >> f.numberOfAdvisees;
      for (int i = 0; i < f.getNumberOfAdvisees(); i++) {
        cout << "Please enter the new faculty member's advisee id." << endl;
        cin >> f.adviseeIDs[i];
      }

      addFaculty(tempFacultyID, f.name, f.level, f.department, f.numberOfAdvisees, f.adviseeIDs);

      cout << "Would you like to rollback (undo) the addition of this faculty member? (Yes/No)" << endl;
      cin >> response;

      if (response == "Yes") {
        deleteFaculty(tempFacultyID);
      }
    }
    else if (userChoice == 10) {
      cout << "Please enter the faculty member's id whom you'd like to remove." << endl;
      cin >> tempFacultyID;

      Faculty f = facultyTable.search(tempFacultyID);

      deleteFaculty(tempFacultyID);

      cout << "Would you like to rollback (undo) the removal of this faculty member? (Yes/No)" << endl;
      cin >> response;

      if (response == "Yes") {
        addFaculty(tempFacultyID, f.name, f.level, f.department, f.numberOfAdvisees, f.adviseeIDs);
      }
    }
    else if (userChoice == 11) {
      cout << "Please enter the student's id." << endl;
      cin >> tempStudentID;
      cout << "Please enter the student's new advisor's id." << endl;
      cin >> tempAdvisorID;

      cout<<"TempStudentID: "<<tempStudentID<<endl;
      cout<<"TempFacultyID: "<<tempFacultyID<<endl;

      changeAdvisor(tempStudentID, tempFacultyID);
    }
    else if (userChoice == 12) {
      cout << "Please enter the faculty member's id." << endl;
      cin >> tempFacultyID;
      cout << "Please enter the faculty member's advisee's id." << endl;
      cin >> tempStudentID;

      removeAdvisee(tempFacultyID, tempStudentID);
    }
  }

  exitProgram();
}

void Program::printStudents() {
  studentTable.inOrder(studentTable.root);
}

void Program::printFaculty() {
  facultyTable.inOrder(facultyTable.root);
}

void Program::displayStudent(int sID) {
  Student tempS = studentTable.search(sID);
  tempS.print();
}

void Program::displayFaculty(int fID) {
  Faculty tempF = facultyTable.search(fID);
  tempF.print();
}

void Program::displayAdvisor(int sID) {
  Student tempS = studentTable.search(sID);
  tempAdvisorID = tempS.getAdvisorID();
  Faculty tempF = facultyTable.search(tempAdvisorID);
  tempF.print();
}

void Program::displayAdvisees(int fID) {
  Faculty tempF = facultyTable.search(fID);
  tempNumberOfAdvisees = tempF.getNumberOfAdvisees();
  for (int i = 0; i < tempNumberOfAdvisees; i++) {
    tempStudentID = tempF.adviseeIDs[i];
    Student tempS = studentTable.search(tempStudentID);
    tempS.print();
  }
}

void Program::addStudent(int i, string n, string l, string m, double g, int aID) {
  Student temp(n, l, m, g, aID);
  studentTable.insert(new TreeNode<Student> (temp, i));
}

void Program::deleteStudent(int i) {
  studentTable.remove(i);
}

void Program::addFaculty(int i, string n, string l, string d, int nOA, int* aIDs) {
  Faculty temp(n, l, d, nOA, aIDs);
  facultyTable.insert(new TreeNode<Faculty> (temp, i));
}

void Program::deleteFaculty(int i) {
  facultyTable.remove(i);
}

void Program::changeAdvisor(int sID, int aID) {
  Student tempS = studentTable.search(sID);
  int oldAID = tempS.getAdvisorID();
  if (!(facultyTable.contains(aID))) {
    cout << "This faculty advisor doesn't exist. Would you like to enter a new faculty advisor ID? (Yes/No)" << endl;
    cin >> response;
    if (response != "Yes") {
      return;
    }
    else {
      cin >> aID;
    }
  }
  tempS.setAdvisorID(aID);
  cout << tempS.getAdvisorID() << endl;
  Faculty oldTempF = facultyTable.search(oldAID);
  Faculty newTempF = facultyTable.search(aID);
  cout<<"New AID: "<<aID<<endl;
  oldTempF.deleteAdvisee(sID);
  //cout<< "New id: "<<aID<<endl;

  Student temp(temp.name, temp.level, temp.major, temp.gpa, temp.advisorID);
  studentTable.insert(new TreeNode<Student> (sID, temp));
}

void Program::removeAdvisee(int fID, int sID) {
  if (!(studentTable.contains(sID))) {
    cout << "This student advisee doesn't exist. Would you like to enter a new student advisee ID? (Yes/No)" << endl;
    cin >> response;
    if (response != "Yes") {
      return;
    }
    else {
      cin >> sID;
    }
  }
  Faculty tempF = facultyTable.search(fID);
  tempF.deleteAdvisee(sID);

  cout << "Please change the advisor for the student." << endl;
  cout << "Please enter the student's new advisor's id." << endl;
  cin >> fID;

  changeAdvisor(sID, fID);
  cout << studentTable.search(sID).getAdvisorID() << endl;

}

void Program::exitProgram() {
  ofstream outFile_1;
  ofstream outFile_2;
  outFile_1.open("studentTable.txt");
  outFile_2.open("facultyTable.txt");

  tempSRoot = studentTable.getRoot();
  studentTable.inOrderFile(tempSRoot, studentFile);

  tempFRoot = facultyTable.getRoot();
  facultyTable.inOrderFile(tempFRoot, facultyFile);

  outFile_1.close();
  outFile_2.close();
}
