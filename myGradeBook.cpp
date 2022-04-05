/****************************************************************************
*																			*
*	File:		myGradeBook.cpp												*
*																			*
*	Author:		Michael Davis												*
*																			*
*	Date:		Jan. 28, 2020												*
*																			*
*																			*
*																			*
****************************************************************************/
#include "myGradeBook.h"
#include <iostream>
#include <chrono>
#include <random>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::fixed;

const int numRows = 100;
const int numCols = 100;

GradeBook::GradeBook(string courseName, int numStudents, int numGradedEvents)
{
	setCourseName(courseName);
	setNumStudents(numStudents);
	setGradedEvents(numGradedEvents);
}

void GradeBook::setNumStudents(int students)
{
	num_of_students = students;
}

int GradeBook::getNumStudents()
{
	return num_of_students;
}

void GradeBook::setGradedEvents(int events)
{
	gradedEvents = events;
}

int GradeBook::getGradedEvents()
{
	return gradedEvents;
}

void GradeBook::setCourseName(string name)
{
	courseName = name;
}

string GradeBook::getCourseName()
{
	return courseName;
}
double getRowAvg(double a[][numCols], int ns, int ge)
{
	double total = 0;
	double avg = 0;
	for (int i = 0; i < ge - 1; i++)		// Caculates the row avg. 
	{
		total += a[ns][i];
	}

	avg = total/ ge;
	return avg; 
}

void printArray(double a[][numCols], int nr, int nc)
{
	for (int Ge = 0; Ge < nc; Ge++)			// This function prints each array postion with the according varabiles of students and event grade 
	{
		while (Ge == 0)
		{
			cout << "               Event " << Ge + 1 << " ";
			Ge++;
		}
		cout << " Event " << Ge + 1 << "  ";
	}
	cout << "Average" << endl;

	for (int r = 0; r < nr; ++r)
	{
		for (int c = 0; c < nc; ++c)
		{
			if (c == nc - 1)
			{
				cout << "     " << setw(5) << left << getRowAvg(a, r, nc);
			}
			while (c == 0)
			{
				cout << setprecision(2) << fixed;
				cout << "Student" << " " << r + 1 << "      " << setw(5) << left << a[r][c];
				c++;
			}
			cout << setprecision(2) << fixed;
			cout << "     " << setw(5) << left << a[r][c];
		}

		cout << endl;
	}

}
double getColAvg(double a[][numCols], int ns, int g)
{
	double total = 0;
	double avg = 0;
	for (int i = 0; i < ns; i++)			// Checks the averages of all the cololums
	{
		total += a[i][g];
	}

	avg = total / ns;
	return avg;
}

void GradeBook::displayMessage()
{
	cout << "Welcome to the Grade Book for " << getCourseName() << endl;
	cout << " " << endl;
	cout << "Grades for course: " << getCourseName() << endl;
}
void GradeBook::outputGrades()
{
	displayMessage();
		unsigned int seed =
			(unsigned int)chrono::system_clock::now().time_since_epoch().count();
		default_random_engine generator(seed);
		normal_distribution<double> normalDistribution(70.00, 20.00);			// Creates Random generated numbers for each postion of the 2D array 
		double nr = num_of_students, nc = gradedEvents, i = 0;
		for (int r = 0; r < nr; ++r)
			for (int c = 0; c < nc; ++c)
				myArr[r][c] = (double)normalDistribution(generator);
		printArray(myArr, nr, nc);
	
		for (int i = 0; i < nc; i++)
		{
			if (i == 0)
			{
				cout <<"Event Average  " << setw(10) << getColAvg(myArr, num_of_students, i); // Caculates the Event Average after all postions have been outputed 
			}
			cout << setw(10)<< getColAvg(myArr, num_of_students, i);
		}
		cout << endl; 

		cout << " " << endl; 

		cout << "\nOverall grade distribution:" << endl;

		cout << " 0-9: ";
		for (int num = 0; num < num_of_students; num++)
		{
			for (int count = 0; count < gradedEvents; count++)
			{
				if (myArr[num][count] > 0 && myArr[num][count] < 9)		// Each of these for loops checks each array postion to check if that position is in the scope of each number 
																		// from 0-9 to 100
				{
					cout << setw(2) << "*";
				}
			}
		}
		cout << endl;

		cout << " 10-19: ";
		for (int num = 0; num < num_of_students; num++)
		{
			for (int count = 0; count < gradedEvents; count++)
			{
				if (myArr[num][count] > 10 && myArr[num][count] < 19)
				{
					cout << setw(2) << "*";
				}
			}
		}
		cout << endl;
		cout << " 20-29: ";
		for (int num = 0; num < num_of_students; num++)
		{
			for (int count = 0; count < gradedEvents; count++)
			{
				if (myArr[num][count] > 20 && myArr[num][count] < 29)
				{
					cout << setw(2) << "*";
				}
			}
		}
		cout << endl;
		cout << " 30-39: ";
		for (int num = 0; num < num_of_students; num++)
		{
			for (int count = 0; count < gradedEvents; count++)
			{
				if (myArr[num][count] > 30 && myArr[num][count] < 39)
				{
					cout << setw(2) << "*";
				}
			}
		}
		cout << endl;
		cout << " 40-49: ";
		for (int num = 0; num < num_of_students; num++)
		{
			for (int count = 0; count < gradedEvents; count++)
			{
				if (myArr[num][count] > 40 && myArr[num][count] < 49)
				{
					cout << setw(2) << "*";
				}
			}
		}
		cout << endl;
		cout << " 50-59: ";
		for (int num = 0; num < num_of_students; num++)
		{
			for (int count = 0; count < gradedEvents; count++)
			{
				if (myArr[num][count] > 50 && myArr[num][count] < 59)
				{
					cout << setw(2) << "*";
				}
			}
		}
		cout << endl;
		cout << " 60-69: ";
		for (int num = 0; num < num_of_students; num++)
		{
			for (int count = 0; count < gradedEvents; count++)
			{
				if (myArr[num][count] > 60 && myArr[num][count] < 69)
				{
					cout << setw(2) << "*";
				}
			}
		}
		cout << endl;
		cout << " 70-79: ";
		for (int num = 0; num < num_of_students; num++)
		{
			for (int count = 0; count < gradedEvents; count++)
			{
				if (myArr[num][count] > 70 && myArr[num][count] < 79)
				{
					cout << setw(2) << "*";
				}
			}
		}
		cout << endl;
		cout << " 80-89: ";
		for (int num = 0; num < num_of_students; num++)
		{
			for (int count = 0; count < gradedEvents; count++)
			{
				if (myArr[num][count] > 80 && myArr[num][count] < 89)
				{
					cout << setw(2) << "*";
				}
			}
		}
		cout << endl;
		cout << " 90-99: ";
		for (int num = 0; num < num_of_students; num++)
		{
			for (int count = 0; count < gradedEvents; count++)
			{
				if (myArr[num][count] > 90 && myArr[num][count] < 99)
				{
					cout << setw(2) << "*";
				}
			}
		}
		cout << endl;
		cout << " 100: ";
		for (int num = 0; num < num_of_students; num++)
		{
			for (int count = 0; count < gradedEvents; count++)
			{
				if (myArr[num][count] == 100)
				{
					cout << setw(2) << "*";
				}
			}
		}
}


   








