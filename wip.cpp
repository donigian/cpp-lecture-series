#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

//Write a program to calculate a grade for CS 2
//
//10 Assignments
//1 Midterm
//1 Final
//10 attendance records
//
//Grading
//Attendance and participation at Lab and Lecture is expected and accounts
// for ten percent (10%) of your final grade. This course will have a midterm and
// final (40%) and homework (50%) covering key objectives.
//A >= 90%
//B >= 80%
//C >= 70%
//D >= 60%
//F < 60%

vector<int> read_input_data() {
    // open a file in read mode
    vector<int> data;

    cout << "Reading from the file" << endl;
    ifstream file("/Users/avd/ClionProjects/cs_2_grade_calculator/grades.txt");
    for (int n; file >> n;) {
        data.push_back(n);
    }
    return data;
}

void print_vector(vector<int> numbers) {
    cout << endl;
    for (int i = 0; i < numbers.size(); i++)
        cout << numbers[i] << " ";
}

double calculate_hw_grade(vector<int> grades){
    const double HW_RATIO = .5;
    double sum_hw = 0;
    for (int i = 0; i <= 9; i++) {
        sum_hw += grades[i];
    }
    return sum_hw * HW_RATIO;
}

void calculate_grade(vector<int> grades) {
    // grade_formula = (.50)*hw + (.2)*Midter + (.10)*Att + (.2)*final

    double hw_score = calculate_hw_grade(grades);
    cout << endl << "hw total is: " << hw_score << endl;
    
    
}

int main() {
    vector<int> data;
    data = read_input_data();
    print_vector(data);
    calculate_grade(data);
    return 0;
}
