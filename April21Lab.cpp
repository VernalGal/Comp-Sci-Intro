//#include<iostream>
//#include<fstream>
//using namespace std;
//double getAvg(double midterm, double final);
//
//int main()
//{
////	ifstream fin;
////	ofstream fout;
////
////	//course_name, score of midterm and final
////	string course;
////	double midterm, final, avg;
////
////	fin.open("score.txt");
////	fout.open("result.txt");
////
////	//to find the end of data file, there are two ways.
////	//1. done by the input object.
////	//2. use eof()
////
////	fin >> course >> midterm >> final;
////
////	while (!fin.eof()) //return 0 if end is found
////	{
////
////		//avg = (midterm + final) / 2; //has been moved outside of the main 
////
////		avg = getAvg(midterm, final);
////
////		cout << "The average of course " << course << " is " << avg << endl;
////
////		fout << course << '\t' << avg;
////
////		fin >> course >> midterm >> final;
////
//	}
//	return 0;
////}
////
////double getAvg(double midterm, double final)
////{
////
////	return (midterm + final) / 2;
////}
//
//
//
//
////int a;
////cin >> ; //8 --> a = 8
////1. let user input. _ 
////2. store the input to memory or variable. 
////3. tells the OS the job is done successfully by sending a 1 to the OS.
//

#include <iostream>
using namespace std;
int main()
// The class work on array will be collected at the end of today's class.
// 1. declare an int type array with 50 elements
// 2. assign the first 20 values an odd number start from 1.
//3. assign the last 30 values an even number start from 2.
//4. print out all the elements of the array.

{
	//int ary[8] = { 4, 3, 11 ,0 ,4 ,5, 2, 9 }; //8 elements, [0]....[arySize-1]
	//double ary2[10]; 
	/*int a = 0;
	cout << a + 2;
	a = a + 2;
	cout << a;

	a = a + 2;*/

	//assignment statement can not combine with any other statement.





	//for (int i = 5; i < 8; i++) //out of bounds

	//{
	//	ary[i] = ary[i] + i; //5+5, 2+6, 9+7


	//}

	//for (int i = 0; i < 8; i++) //out of bounds

	//{

	//	cout << ary[i] << " ";

	//}




	int ary[50] = {0};
	for (int i = 0; i < 50; i++)
	{
		ary[i] + i;
		if (ary[i] % 2 != 0)
		{

			cout << ary[i] << " ";
		}
		else if (ary[i] % 2 == 0 && ary[i] != 0)
		cout << ary[i] << " ";
	}
	
	




C:\Users\17183\source\repos\April28lec1\Debug\April28lec1.exe(process 13428) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .














	return 0;
}