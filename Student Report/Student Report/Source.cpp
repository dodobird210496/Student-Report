#include<iostream>
#include<string>
#include<fstream>

using namespace std;

int main()
{
	string name, sur_name ;
	float marks;
	int roll_no;
	float subjects[90] = {};

	cout << "Enter the name :" << endl;
	cin >> name;
	cout << "Enter the last name :" << endl;
	cin >> sur_name;


	cout << "Enter the roll number of the student :" << endl;
	cin >> roll_no;


	cout << "Enter the marks obtained in English out of 100 :" << endl;
	cin >> subjects[0];
	cout << "Enter the marks obtained in Maths out of 100 :" << endl;
	cin >> subjects[1];
	cout << "Enter the marks obtained in Urdu out of 100 :" << endl;
	cin >> subjects[2];
	cout << "Enter the marks obtained in Computer Science out of 100 :" << endl;
	cin >> subjects[3];
	cout << "Enter the marks obtained in Chemistry out of 100 :" << endl;
	cin >> subjects[4];

	float total;
	total = subjects[0] + subjects[1] + subjects[2] + subjects[3] + subjects[4];
	cout << "The total marks of the student is :" << total << endl;

	double avg;
	avg = total / 5.0;
	cout << "Teh average of the student is :" << avg << endl;

	if (avg >= 85)
	{
		cout << "You have obtained A+ grade. Congratulations!!" << endl;

	}
	else if (avg >= 75)
	{
		cout << "You have obtained A grade. Congratulations!!" << endl;

	}
	else if (avg >= 65)
	{
		cout << "You have obtained B grade." << endl;

	}
	else if (avg >= 50)
	{
		cout << "You have obtained C grade." << endl;
	}
	else
	{
		cout << "You are below the average that is 50%. Work Harder." << endl;

		main();
	}
	
	ofstream out_file;
	out_file.open("data.txt");
	out_file << "Name of the student" << name << " " << sur_name << endl << "Roll Number" << roll_no << endl << "English :" << subjects[0] << endl << "Maths :" << subjects[1] << endl << "Urdu :" << subjects[2] << endl << "Computer :" << subjects[3] << endl << "Chemistry :" << subjects[4] << endl;
	out_file.close();
	
	
	return(0);
		

}