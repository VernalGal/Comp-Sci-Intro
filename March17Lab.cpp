#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
	//This program will read data from a file and return output to 
	//a file and the monitor.

	//To calculate a student score.(avg of 3 quizzes)

	ifstream in;
	ofstream out;

	in.open("myData.txt");
	out.open("outData.txt"); //system will create this file for us.

	string name;
	int q1, q2, q3, avg;
	//to input student's name and three quiz scores.
	in >> name >> q1 >> q2 >> q3;
	cout << name << " " << q1 << " " << q2 << " " << q3 << endl;
	avg = (q1 + q2 + q3) / 3;
	
	cout << name << " " << avg << endl;

	//out << "Name " << " " << "AVG" << endl;
	out << name << " " << avg << endl;
							 
	in >> name >> q1 >> q2 >> q3;
	avg = (q1 + q2 + q3) / 3;
	cout << name << " " << avg << endl;

	//out << "Name " << " " << "AVG" << endl;
	out << name << " " << avg << endl;



	/*if (!in)
		cout << "error." << endl;
	else
		cout << "so far so good." << endl;*/

	
	return 0;
}


Jakub 86
Fatima 76