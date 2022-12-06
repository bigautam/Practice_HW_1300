// CSCI 1300 Fall 2022
// Author: Bianca Gautam
// Recitation: 303 – Xuefei Sun
// Par - Problem # 1


//include headers
#include <iostream>
using namespace std;




double gpa(double grade_1, double grade_2, double grade_3, double grade_4, double grade_5)
{
    // set up variables
    int numClass = 5;
    double gpa = 0;

    //grade_1
    if (grade_1 <= 100 && grade_1 >= 90)
    {
        gpa = gpa + 4;
    }
    else if (grade_1 < 90 && grade_1 >= 80)
    {
        gpa = gpa + 3;
    }
    else if (grade_1 < 80 && grade_1 >= 70)
    {
        gpa = gpa+ 2;
    }
    else if (grade_1 < 70 && grade_1 >= 60)
    {
        gpa = gpa + 1;
    }
    else if (grade_1 < 60 && grade_1 >= 0)
    {
        gpa = gpa + 0;
    }
    else if( grade_1== -1)
    {
        numClass = numClass-1; 
    }

    // grade_2 
    if (grade_2 <= 100 && grade_2 >= 90)
    {
        gpa = gpa + 4;
    }
    else if (grade_2 < 90 && grade_2 >= 80)
    {
        gpa = gpa + 3;
    }
    else if (grade_2 < 80 && grade_2 >= 70)
    {
        gpa = gpa+ 2;
    }
    else if (grade_2 < 70 && grade_2 >= 60)
    {
        gpa = gpa + 1;
    }
    else if (grade_2 < 60 && grade_2 >= 0)
    {
        gpa = gpa + 0;
    }
    else if( grade_2== -1)
    {
        numClass = numClass-1; 
    }

    // grade 3 
    if (grade_3 <= 100 && grade_3 >= 90)
    {
        gpa = gpa + 4;
    }
    else if (grade_3 < 90 && grade_3 >= 80)
    {
        gpa = gpa + 3;
    }
    else if (grade_3 < 80 && grade_3 >= 70)
    {
        gpa = gpa+ 2;
    }
    else if (grade_3 < 70 && grade_3 >= 60)
    {
        gpa = gpa + 1;
    }
    else if (grade_3 < 60 && grade_3 >= 0)
    {
        gpa = gpa + 0;
    }
    else if( grade_3== -1)
    {
        numClass = numClass-1; 
    }

    // for class 4 
    if (grade_4 <= 100 && grade_4 >= 90)
    {
        gpa = gpa + 4;
    }
    else if (grade_4 < 90 && grade_4 >= 80)
    {
        gpa = gpa + 3;
    }
    else if (grade_4 < 80 && grade_4 >= 70)
    {
        gpa = gpa+ 2;
    }
    else if (grade_4 < 70 && grade_4 >= 60)
    {
        gpa = gpa + 1;
    }
    else if (grade_4 < 60 && grade_4 >= 0)
    {
        gpa = gpa + 0;
    }
    else if( grade_4== -1)
    {
        numClass = numClass-1; 
    }

    //class 5 
    if (grade_5 <= 100 && grade_5 >= 90)
    {
        gpa = gpa + 4;
    }
    else if (grade_5 < 90 && grade_5 >= 80)
    {
        gpa = gpa + 3;
    }
    else if (grade_5 < 80 && grade_5 >= 70)
    {
        gpa = gpa+ 2;
    }
    else if (grade_5 < 70 && grade_5 >= 60)
    {
        gpa = gpa + 1;
    }
    else if (grade_5 < 60 && grade_5 >= 0)
    {
        gpa = gpa + 0;
    }
    else if( grade_5== -1)
    {
        numClass = numClass-1; 
    }

    //calc gpa
    if (numClass == 0 )
    {
        return 0 ; 
    }
    return gpa = gpa/numClass;; 
}

int main()
{
    //set up variables
    double grade_1;
    double grade_2;
    double grade_3;
    double grade_4;
    double grade_5;

    cout << "Please enter your first grade." << endl;
    cin >> grade_1;

    cout << "Please enter your second grade." << endl;
    cin >> grade_2;

    cout << "Please enter your third grade." << endl;
    cin >> grade_3;

    cout << "Please enter your fourth grade." << endl;
    cin >> grade_4;

    cout << "Please enter your fifth grade." << endl;
    cin >> grade_5;

    cout<< "Your GPA is "<< gpa(grade_1, grade_2, grade_3,grade_4,grade_5)<< endl;
    return 0;

}