#include <iostream>
using namespace std;
void generateRandomGroups(int totalStudents, int groupSize, int** groups, int& numGroups) {
    // Generate random groups
    int remainingStudents = totalStudents;
    while (remainingStudents >= groupSize) {
        int* group = new int[groupSize];
        for (int i = 0; i < groupSize; ++i) {
            int student = rand() % totalStudents + 1; // Random student ID
            group[i] = student;
        }
        groups[numGroups] = group;
        numGroups++;
        remainingStudents -= groupSize;
    }

    // Print leftover students (if any)
    if (remainingStudents > 0) {
        cout << "Leftover students: " << remainingStudents << endl;
    }
}

void assignQuestionsToGroups(int totalQuestions, int** groups, int numGroups) {
    // Assign questions to groups
    int questionCounter = 1;
    for (int i = 0; i < numGroups; ++i) {
        cout << "Group: ";
        for (int j = 0; j < 5; ++j) {
            int questionsPerStudent = totalQuestions / 5;
            int extraQuestions = totalQuestions % 5;

            int studentQuestions = questionsPerStudent + (extraQuestions > 0 ? 1 : 0);
            if (extraQuestions > 0) {
                extraQuestions--;
            }

            cout << "Student " << groups[i][j] << " (Questions: " << studentQuestions << ") ";
            for (int k = 0; k < studentQuestions; ++k) {
                cout << "Q" << questionCounter << " ";
                questionCounter++;
            }
             cout << "| ";
        }
        cout << "\n";

        delete[] groups[i]; // Free allocated memory
    }
    delete[] groups; // Free the array of group pointers
}

int main() {
    int totalStudents, totalQuestions;
    cout << "Enter the total number of students: ";
    cin >> totalStudents;

    cout << "Enter the total number of questions: ";
    cin >> totalQuestions;

    int groupSize = 5;
    int** groups = new int*[totalStudents / groupSize]; // Array to store pointers to groups
    int numGroups = 0;

    generateRandomGroups(totalStudents, groupSize, groups, numGroups);
    assignQuestionsToGroups(totalQuestions, groups, numGroups);

    return 0;
}

