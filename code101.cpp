#include <iostream>

using namespace std;

int main() {
    // Input the total number of students and questions
    int N, Q;
    cout << "Enter the total number of students: ";
    cin >> N;
    cout << "Enter the total number of questions: ";
    cin >> Q;

    // Calculate the number of complete groups and remaining students
    int completeGroups = N / 5;
    int studentsLeft = N % 5;

    // Create an array to store student names
    string students[N];

    // Input all student names in a single line
    cout << "Enter the names of all students separated by spaces: ";
    for (int i = 0; i < N; i++) {
        cin >> students[i];
    }

    // Define excluded names
    string excludedNames[] = {
        "Srivathsav Kyatham",
        "Prem Thakare",
        // Add more excluded names here...
    };

    int validStudentCount = 0;
    string validStudents[N];

    // Filter out excluded names
    for (int i = 0; i < N; i++) {
        bool isExcluded = false;
        for (const string& excludedName : excludedNames) {
            if (students[i] == excludedName) {
                isExcluded = true;
                break;
            }
        }
        if (!isExcluded) {
            validStudents[validStudentCount] = students[i];
            validStudentCount++;
        }
    }

    // Shuffle the valid students using a simple algorithm
    for (int i = validStudentCount - 1; i > 0; i--) {
        int j = i - rand() % (i + 1);
        swap(validStudents[i], validStudents[j]);
    }

    int remainingQuestions = Q;
    int studentIndex = 0;

    for (int group = 1; group <= completeGroups; group++) {
        cout << "Group " << group << ":" << endl;
        for (int i = 0; i < 5; i++) {
            cout << "  " << validStudents[studentIndex] << ": ";
            int questionsInGroup = remainingQuestions / (5 - i);
            for (int j = 0; j < questionsInGroup; j++) {
                cout << "Question " << Q - remainingQuestions + 1 << " ";
                remainingQuestions--;
            }
            cout << endl;
            studentIndex++;
        }
        cout << endl;
    }

    // Handle any remaining valid students and questions
    if (studentsLeft > 0) {
        cout << "Last Group:" << endl;
        for (int i = 0; i < studentsLeft; i++) {
            cout << "  " << validStudents[studentIndex] << ": ";
            if (remainingQuestions > 0) {
                cout << "Question " << Q - remainingQuestions + 1 << " ";
                remainingQuestions--;
            }
            cout << endl;
            studentIndex++;
        }
    }

    return 0;
}
