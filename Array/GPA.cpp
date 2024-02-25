#include <iostream>
#include <fstream>
#include <string>
#include <vector>

struct Student {
    std::string name;
    int grades[4][3];
    double average_grades[4];
    char letter_grades[4];

    double calculateAverage(int* grades) {
        double sum = 0.0;
        for (int i = 0; i < 3; i++) {
            sum += grades[i];
        }
        return sum / 3;
    }

    char calculateLetterGrade(double average) {
        if (average >= 90) {
            return 'A';
        } else if (average >= 80) {
            return 'B';
        } else if (average >= 70) {
            return 'C';
        } else if (average >= 60) {
            return 'D';
        } else {
            return 'F';
        }
    }
};

int main() {
    const int num_students = 20;
    const int num_courses = 4;
    const int num_exams = 3;
    std::vector<Student> students(num_students);

    std::ifstream batch_file("students_batch.txt");
    if (!batch_file) {
        std::cerr << "Error opening file." << std::endl;
        return 1;
    }

    for (int i = 0; i < num_students; i++) {
        batch_file >> students[i].name;
        for (int j = 0; j < num_courses; j++) {
            for (int k = 0; k < num_exams; k++) {
                batch_file >> students[i].grades[j][k];
            }
            students[i].average_grades[j] = students[i].calculateAverage(students[i].grades[j]);
            students[i].letter_grades[j] = students[i].calculateLetterGrade(students[i].average_grades[j]);
        }
    }

    // Additional code for GPA calculation can be added here

    return 0;
}