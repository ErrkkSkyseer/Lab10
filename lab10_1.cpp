#include <iostream>

using namespace std;

int main()
{
	int count[5] = {}; // Declare array count for counting A,B,C,D,F and initialize all element = 0
	cout << "Please input grade of each student (A-F) or input 0 to exit. \n";
	char grade = ' ';
	int i = 1;
	do
	{
		cout << "Student [" << i << "]: ";
		cin >> grade; // The loop must be terminated when grade = '0'
		switch (grade)
		{
		case 'A':
			count[0]++;
			i++;
			break;
		case 'B':
			count[1]++;
			i++;
			break;
		case 'C':
			count[2]++;
			i++;
			break;
		case 'D':
			count[3]++;
			i++;
			break;
		case 'F':
			count[4]++;
			i++;
			break;
		case '0':
			break;
		default:
			cout << "Wrong input. Please input again.\n";
			break;
		}
	} while (grade != '0');

	cout << "In total " << i - 1 << " students." << endl;

	cout << "A = " << count[0] << ", ";
	cout << "B = " << count[1] << ", ";
	cout << "C = " << count[2] << ", ";
	cout << "D = " << count[3] << ", ";
	cout << "F = " << count[4];

	return 0;
}
