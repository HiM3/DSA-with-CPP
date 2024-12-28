#include <iostream>
using namespace std;
int main() {
	int score;
	char grade;
	cout << "Enter your score (0-100): ";
	cin >> score;
	grade = (score >= 90)?'A':(score >= 80) ?'B':(score >= 70)?'C':(score >= 60)?'D':'F';
	cout << "Your grade is: " << grade << endl;
	switch (grade) {
		case 'A':
			cout << "Excellent work!" << endl;
			break;
		case 'B':
			cout << "Well done!" << endl;
			break;
		case 'C':
			cout << "Good job!" << endl;
			break;
		case 'D':
			cout << "You passed, but you could do better." << endl;
			break;
		case 'F':
			cout << "Sorry, you failed." << endl;
			break;
		default:
			cout << "Invalid grade!" << endl;
	}
	if (grade == 'A' || grade == 'B' || grade == 'C' || grade == 'D') {
		cout << "Congratulations! You are eligible for the next level." << endl;
	} else if (grade == 'F') {
		cout << "Please try again next time." << endl;
	}
}

