#include <iostream>
#include <cstdlib>
#include <ctime>

const int scoreAt0 = 74; // change this number

// Project 2 — Joshua Van Brunt
// CIS 5 Week 08
// Do not edit the boilerplate. It randomly generates 30 elements into the array.
// One main only. No vector. No extra functions. No files.

int main() {
    const int N = 30;
    int scores[N];
    const int scoreAt10 = 79; // change this number

    // Do not edit this boilerplate. It randomly generates 30 elements into the array.
    srand(static_cast<unsigned>(time(nullptr)));

    const int scoreAt20 = 67; // change this number

    for (int i = 0; i < N; ++i) {
        scores[i] = rand() % 100;
    }

    scores[0] = scoreAt0;
    const int scoreAt27 = 46; // change this number
    scores[10] = scoreAt10;
    scores[20] = scoreAt20;
    scores[27] = scoreAt27;

    // TODO: print each index and scores[i]
	std::cout << "Scores:" << std::endl;

    // TODO: one for loop. Count A, B, C, D, and failing.
    int countA = 0, countB = 0, countC = 0, countD = 0, countF = 0;

    for (int i = 0; i < N; ++i) {
        std::cout << "Index " << i << ": " << scores[i] << std::endl;
        if (scores[i] >= 90) {
            ++countA;
        }
        else if (scores[i] >= 80) {
            ++countB;
        }
        else if (scores[i] >= 70) {
            ++countC;
        }
        else if (scores[i] >= 60) {
            ++countD;
        }
        else {
            ++countF;
        }
    }


    while (countF > 0) {
        for (int i = 0; i < N; ++i) {
            if (scores[i] < 60) {
                std::cout << "Student at index " << i << " needs to come to office hours." << std::endl;
                --countF; 
            }
        }
    }

 

    // 90 and up is A. 80 to 89 is B. 70 to 79 is C. 60 to 69 is D.
    // Below 60 is failing. A score of 60 is a D.
    // Print A:, B:, C:, D:, and F:. The five totals add up to 30.

    // TODO: one while loop. If scores[i] is under 60, print:
    // Student at index i needs to come to office hours.
    // Put ++i in the loop or it never ends.

    return 0;
}