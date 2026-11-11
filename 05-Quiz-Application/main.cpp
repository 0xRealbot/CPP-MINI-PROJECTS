
#include <iostream>
using namespace std;

int main() {
    char answers[5] = {'B', 'A', 'C', 'B', 'D'};
    char userAnswer;
    int score = 0;

    cout << "===== C++ QUIZ APPLICATION =====\n";

    // Question 1
    cout << "\n1. Which language are we learning?\n";
    cout << "A. Python\nB. C++\nC. Java\nD. HTML\n";
    cout << "Your answer: ";
    cin >> userAnswer;

    if (userAnswer == answers[0] || userAnswer == 'b') {
        score++;
    }

    // Question 2
    cout << "\n2. Which symbol ends a C++ statement?\n";
    cout << "A. ;\nB. :\nC. .\nD. ,\n";
    cout << "Your answer: ";
    cin >> userAnswer;

    if (userAnswer == answers[1] || userAnswer == 'a') {
        score++;
    }

    // Question 3
    cout << "\n3. Which loop runs at least once?\n";
    cout << "A. for\nB. while\nC. do-while\nD. none\n";
    cout << "Your answer: ";
    cin >> userAnswer;

    if (userAnswer == answers[2] || userAnswer == 'c') {
        score++;
    }

    // Question 4
    cout << "\n4. Which keyword is used for multiple choices?\n";
    cout << "A. if\nB. switch\nC. break\nD. return\n";
    cout << "Your answer: ";
    cin >> userAnswer;

    if (userAnswer == answers[3] || userAnswer == 'b') {
        score++;
    }

    // Question 5
    cout << "\n5. Which header provides cout and cin?\n";
    cout << "A. string\nB. cstdlib\nC. ctime\nD. iostream\n";
    cout << "Your answer: ";
    cin >> userAnswer;

    if (userAnswer == answers[4] || userAnswer == 'd') {
        score++;
    }

    cout << "\n===== QUIZ RESULT =====\n";
    cout << "Your score: " << score << "/5\n";

    if (score == 5) {
        cout << "Excellent! Perfect score!\n";
    } else if (score >= 3) {
        cout << "Good job! Keep learning!\n";
    } else {
        cout << "Keep practicing! You can do it!\n";
    }

    return 0;
}
