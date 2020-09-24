/**
 * @file main.cpp
 * @author Govind Ajith KUmar (UID 11699488)
 * @date 14 September 2020
 * @version 1.0
 * @section DESCRIPTION
 * The program takes user inputs regarding the marks of the student and then adds it to a
 * vector.It returns a list of students and their respective grades. The program also
 * calculates the final cumulative grade of the entire class.
 */
#include <iostream>
#include <vector>
#include <string>
using std::cout;
using std::endl;
using std::vector;
using std::cin;
using std::string;

/**
 * @class CourseGrading
 * @brief The class is responsible for calculating the student grades. It
 * displays the roster of all the students in the class and the CGPA of the class.
 *
 */
class CourseGrading {
 private:
  double student_grades[100];
 public:
  void GetGrades(int student_index);
  void SetGrades(int student_index, double marks);
  void ViewRoster(int max_students);
  void CalculateCgpa(int max_students);
  CourseGrading();
};

/**
 * @fn void GetGrades(int)
 * @brief Gets the value of the grades from the private variables.
 * @param student_index The index of the student in the class roster
 */
void CourseGrading::GetGrades(int student_index) {
  std::cout << student_grades[student_index] << std::endl;
}
/**
 * @fn void SetGrades(int, double)
 * @brief Sets the value of the grades in the private variables.
 * @param student_index The index of the student in the class roster
 * @param marks The marks of each student
 */
void CourseGrading::SetGrades(int student_index, double marks) {
  student_grades[student_index] = marks;
}
/**
 * @fn void ViewRoster(int)
 * @brief Helps view all the students and their grades in the class
 * @param max_students Number of students in the class
 */

void CourseGrading::ViewRoster(int max_students) {
  std::cout << "All the students are as follows >> " << std::endl;
  for (int idx = 0; idx < max_students; idx++) {
    std::cout << student_grades[idx] << std::endl;
  }
}

/**
 * @fn void CalculateCgpa(int)
 * @brief Calculates the CGPA of all the students
 * @param max_students Number of students in the class
 */
void CourseGrading::CalculateCgpa(int max_students) {
  std::cout << " The Cumulative Grade point of the class : " << std::endl;
  double sum { 0.0 };
  for (int idx = 0; idx < max_students; idx++) {
    sum += student_grades[idx];
  }
  double cgpa;
  cgpa = sum / max_students;
  std::cout << cgpa << std::endl;
}
/**
 * @fn  CourseGrading(void)
 * @brief User defined Constructor
 *
 */
CourseGrading::CourseGrading(void) {
  cout << "CONSTRUCTOR CALLED" << endl;
}

/**
 * @fn int main()
 * @brief Main function takes user inputs of all the student grades and returns the
 * cumulative grade point of the entire class.
 *
 * @return
 */
int main() {
  CourseGrading course_grading;
  int num_of_students;
  std::cout << "Enter the number of students" << std::endl;
  std::cin >> num_of_students;
  for (int idx = 0; idx < num_of_students; idx++) {
    std::cout << "Enter the marks of student number " << idx << " : "
              << std::endl;
    double marks;
    std::cin >> marks;
    course_grading.SetGrades(idx, marks);
    course_grading.GetGrades(idx);
  }
  course_grading.ViewRoster(num_of_students);
  course_grading.CalculateCgpa(num_of_students);

  return 0;
}
