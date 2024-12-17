#include <fstream>
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    ifstream source("score.txt");

    string s;
    int count = 0;
    double sum = 0, squareSum = 0, mean, sd;
    while (getline(source, s))
    {
        double num = stod(s);
        sum += num;
        squareSum += num * num;
        count++;
    }

    mean = sum / count;
    sd = sqrt(((1.0 / count) * squareSum) - (mean * mean));

    cout << "Number of data = " << count << endl;
    cout << setprecision(3);
    cout << "Mean = " << mean << endl;
    cout << "Standard deviation = " << sd;
}

// cout << "Number of data = ";
// cout << "Mean = ";
// cout << "Standard deviation = ";
