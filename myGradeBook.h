/****************************************************************************
*																			*
*	File:		myGradeBook.h												*
*																			*
*	Author:		Michael Davis												*
*																			*
*	Date:		Jan. 28, 2020												*
*																			*
*																			*
*																			*
****************************************************************************/

#include <string>;
using namespace std;
using std::array;

class GradeBook
	  {
 public:
	  

		// constructor initializes course name, number of students, and events
		GradeBook(string courseName, int numStudents, int numGradedEvents );

		void setNumStudents(int students);	// sets and gets number of students
		int getNumStudents();

		void setGradedEvents(int events);	// sets and gets the number of graded events 
		int getGradedEvents();

		void setCourseName(string name); // function to set the course name
	    string getCourseName(); // function to retrieve the course name
		
	    void displayMessage(); // display a welcome message
	    void outputGrades(); // perform various operations on the grade data
	
	   

 private:
	   string courseName; // course name for this grade book
	   int num_of_students; // number of students
	   int gradedEvents;
	   static const int numRows = 100;
	   static const int numCols = 100;
	   double myArr[numRows][numCols];
	   
	 }; // end class GradeBook


