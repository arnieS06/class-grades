#include <iostream>

void AboveAverage(int studentScores[]) {
    int average = scoreAverage(studentScores[]);

    for (int i = 0; i < 30; i++) {
        if (studentScores[i] > average) {
            std::cout << "Student " << i << " had an above average score of " << studentScores[i];
        }
    }
}