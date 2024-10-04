#include <iostream>
#include <algorithm>
#include "scoreAverage_hpp"
#include "highestScore_hpp"
#include "lowestScore_hpp"
#include "aboveAverage_hpp"
using namespace std;

int main() {
    // list of 30 students
    int studentScores[30] = {65, 41, 7, 94, 23, 30, 6, 52, 45, 66, 48, 90, 81, 77, 72, 25, 26, 47, 73, 33, 46, 61, 36, 21, 29, 17, 16, 3, 96, 32}
    
    // sort the array from largest to smallest values
    sort(studentScores, studentScores + 30);

    cout << "The average score in your class was " << scoreAverage(studentScores[]);

    cout << "The highest score in your class was " << highestScore(studentScores[]);

    cout << "The lowest score in your class was " << lowestScore(studentScores);

    cout << "Here's the student(s) in your class who scores above average: \n";
    aboveAverage(studentScores[]);

    
    return 0;
}



