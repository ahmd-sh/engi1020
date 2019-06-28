// Included headers

#include <iostream>
using namespace std;


/**
 * Calculate student tuition for the fictitious discount program
 *
 * @param   t     the per-course tuition rate (CAD$), @pre >= 0
 * @param   n     the number of courses being taken, @pre >= 0
 *
 * @returns       the tuition amount (CAD$)
 */



/* You can define functions on top (before main function) and avoid function
 * declarations
 */


double discountTuition(double t, int n) 
{
	if (  n >= 1 and n <= 3  )      // 1, 2 or 3 courses, no discount
  {
    return (n*t);
  }

  else if (n == 4)                // 4 courses, discount is 10% on 1 course
  {
    return (  n*t - ( t * 0.1 )  );
  }

  else if (n == 5)                // 5 courses, discount is 15% on 2 courses
  {
    return (  n*t - ( 2 * t * 0.15 )  );
  }

  else if (n >= 6)                  
                                  // 6 or more courses, discount is 20% on courses beyond the 3rd one: i.e. "number of courses - 3"
  {
    return (  n*t - ( (n-3) *t * 0.20)  );
  }

  else 
  {
    return (  n*t  );
  }

}

// Main function
int main()
{
    // Test case 1: Newfoundland student, 3 courses
    double tuition = discountTuition(255, 3);
    if (tuition == 765)
    {
        cout << "Test case 1 OK" << endl;
    }
    else
    {
        cout << "Test case 1 FAIL: calculated " << tuition << " instead of $765" << endl;
    }
    
    // Test case 2: International student, 6 courses
    tuition = discountTuition(1146, 6);
    if (tuition == 6188.4)
    {
        cout << "Test case 2 OK" << endl;
    }
    else
    {
        cout << "Test case 2 FAIL: calculated " << tuition << " instead of $6188.4" << endl;
    }
    
    // Try some more test cases yourself...

    // Test case 3: Canadian student/PR, 4 courses
    tuition = discountTuition(333, 4);
    if (tuition == 1298.7)
    {
        cout << "Test case 3 OK" << endl;
    }
    else
    {
        cout << "Test case 3 FAIL: calculated " << tuition << " instead of $1298.7" << endl;
    }

    // Test case 4: Canadian/PR student, 5 courses
    tuition = discountTuition(333, 5);
    if (tuition == 1565.1)
    {
        cout << "Test case 4 OK" << endl;
    }
    else
    {
        cout << "Test case 4 FAIL: calculated " << tuition << " instead of $1565.1" << endl;
    }

    // Program done
    return 0;
}