/****************************************************************************
*																			*
*	File:		classGrades.cpp												*
*																			*
*	Author:		Michael Davis												*
*																			*
*	Date:		Jan. 28, 2020												*
*																			*
*																			*
*																			*
****************************************************************************/
#include <iostream>
#include <ostream>
#include <chrono>
#include <random>
#include "myGradeBook.h"
using namespace std;

int main()
{	
	GradeBook Gbook("COMS 262", 10, 5);

	Gbook.outputGrades();

	cout << " " << endl;

	GradeBook Hbook("COMS 361", 15, 7);

	Hbook.outputGrades();

	cout << " " << endl;
		
	GradeBook Jbook("History", 12, 8);

	Jbook.outputGrades();

	cout << " " << endl;

	system("pause");
	return 0;

}

/*Welcome to the Grade Book for COMS 262

Grades for course: COMS 262
Event 1  Event 2   Event 3   Event 4   Event 5  Average
Student 1      75.92     65.68     67.36     44.85     50.76     50.44
Student 2      49.04     38.59     93.81     42.52     44.79     61.47
Student 3      44.74     78.59     48.75     58.61     46.14     82.21
Student 4      37.71     40.31     71.20     58.21     41.49     53.96
Student 5      21.25     29.70     52.91     46.14     30.00     62.96
Student 6      33.50     46.15     50.18     65.27     39.02     82.62
Student 7      44.38     39.96     55.78     26.01     33.22     72.93
Student 8      60.58     55.82     47.21     50.16     42.76     67.85
Student 9      59.94     65.29     49.52     24.05     39.76     11.65
Student 10      54.60     41.69     27.22     54.57     35.61     45.07
Event Average  48.16     48.16     50.18     56.39     47.04     59.12


Overall grade distribution :
    0 - 9 :
	10 - 19 : *
	20 - 29 : ** * *
	30 - 39 : ** *
	40 - 49 : ** * * * * * * * * *
	50 - 59 : ** * * * * * * * * *
	60 - 69 : ** * * * * * *
	70 - 79 : ** * *
	80 - 89 : **
	90 - 99 : *
	100 :
	Welcome to the Grade Book for COMS 361

	Grades for course : COMS 361
	Event 1  Event 2   Event 3   Event 4   Event 5   Event 6   Event 7  Average
	Student 1      39.33     39.64     50.84     52.43     59.19     63.87     43.61     19.85
	Student 2      72.56     25.54     59.07     46.13     86.43     67.50     51.03     56.33
	Student 3      50.91     53.86     39.63     25.16     3.95      35.33     29.84     59.43
	Student 4      37.39     39.95     45.15     37.80     34.55     49.70     34.93     62.83
	Student 5      83.77     52.13     60.94     29.60     83.93     83.92     56.33     21.82
	Student 6      53.90     24.26     67.89     42.51     21.99     92.59     43.30     31.53
	Student 7      62.28     74.76     49.19     66.69     57.21     79.08     55.60     53.01
	Student 8      81.24     35.38     66.41     18.69     40.85     38.13     40.10     54.13
	Student 9      72.86     46.62     51.45     57.51     31.74     82.55     48.96     39.31
	Student 10      32.66     35.80     46.67     80.77     65.90     38.61     42.92     21.24
	Student 11      44.03     68.63     56.88     70.57     34.77     66.01     48.70     51.37
	Student 12      55.65     45.28     35.16     72.91     64.86     43.24     45.30     76.89
	Student 13      34.96     31.06     39.73     47.48     60.41     75.58     41.32 - 2.63
	Student 14      77.44     79.58     67.38     35.65     60.61     3.53      46.31     47.15
	Student 15      53.21     13.64     24.92     35.49     49.63     45.08     31.71     60.61
	Event Average  56.81     56.81     44.41     50.75     47.96     50.40     57.65     43.53


	Overall grade distribution :
0 - 9 : **
10 - 19 : **
20 - 29 : ** * * * * *
30 - 39 : ** * * * * * * * * * * * * * * *
40 - 49 : ** * * * * * * * * * *
50 - 59 : ** * * * * * * * * * * * * * *
60 - 69 : ** * * * * * * * * * * * * * *
70 - 79 : ** * * * * * *
80 - 89 : ** * * * * *
90 - 99 : *
100 :
	Welcome to the Grade Book for History

	Grades for course : History
	Event 1  Event 2   Event 3   Event 4   Event 5   Event 6   Event 7   Event 8  Average
	Student 1      40.27     52.12     28.80     46.22     65.08     68.53     58.39     44.93     51.60
	Student 2      36.15     34.73     63.47     65.78     45.32     19.12     31.24     36.98     50.43
	Student 3      18.81     73.17     44.26     47.58     25.64     54.68     36.30     37.56     80.50
	Student 4      6.12      30.56     73.55     77.78     10.49     25.50     28.70     31.59     38.70
	Student 5      53.25     49.28     42.03     80.92     33.33     64.73     59.87     47.93     65.16
	Student 6      51.15     32.29     63.13     27.67     42.46     51.11     54.71     40.31     58.15
	Student 7      36.85     69.29     25.57     65.87     69.48     41.00     60.31     46.05     56.15
	Student 8      36.32     52.84     63.45     46.32     43.53     36.21     37.86     39.57     50.91
	Student 9      67.46     34.12     70.81     48.34     42.26     47.15     88.43     49.82     82.52
	Student 10      31.34     26.78     54.11     9.95      56.62     65.32     40.50     35.58     54.27
	Student 11      48.96     47.22     71.00     44.87     72.75     71.17     34.82     48.85     53.96
	Student 12      51.64     56.80     12.42     60.02     71.34     27.43     57.12     42.10     72.13
	Event Average  39.86     39.86     46.60     51.05     51.78     48.19     47.66     49.02     59.54


	Overall grade distribution :
0 - 9 : *
10 - 19 : ** *
20 - 29 : ** * * * * * *
30 - 39 : ** * * * * * * * * * * * * *
40 - 49 : ** * * * * * * * * * * * * * * *
50 - 59 : ** * * * * * * * * * * * * * * * * * *
60 - 69 : ** * * * * * * * * * * *
70 - 79 : ** * * * * * * *
80 - 89 : ** * *
90 - 99 :
	100 :
*/	Press any key to continue . . .
