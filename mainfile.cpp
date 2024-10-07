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

    cout << "Here's the following things you can see as a teacher: \n" << endl;
    cout << "1) Average student scores" << endl;
    cout << "2) Highest score" << endl;
    cout << "3) Lowest score" << endl;
    cout << "4) Above average scores" << endl;

    short input;
    cout << "\nEnter a number to see your desired statistic -> ";
    cin >> input;

    switch (input) {
        case 1:
            cout << "The average score in your class was " << scoreAverage(studentScores[]);
            break;

        case 2:
            cout << "The highest score in your class was " << highestScore(studentScores[]);
            break;

        case 3:
            cout << "The lowest score in your class was " << lowestScore(studentScores);
            break;

        case 4:
            cout << "Here's the student(s) in your class who scores above average: \n";
            aboveAverage(studentScores[]);
            break;

        default:
            cout << "You didn't enter a valid choice..try again."
    }

    return 0;
}



