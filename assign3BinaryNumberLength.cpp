#include <iostream>
#include <cmath>
using namespace std;


/*
Logic used is:
        the bit length is just 1 more than the highest power of 2 which is less than the number

That is:
        For what power of 2 is 2^power less than 25 (say)?
        Ans. = 4   (because    2^4 = 16 <= 25 ,       2^5 = 32  not < 25)
        Then bit length for binary of n is (4+1) = 5.
*/

// function definition
int binaryLength(int n) {
  int i = 1;      // loop iterator

  while (pow(2,i) <= n) {
    i++;
  }

  return (i);
}


// main function
int main() {
    // Test case 1: length of 0 should be 1
    int res = binaryLength(0);
    if (res == 1)
    {
        cout << "Test case 1 OK" << endl;
    }
    else
    {
        cout << "Test case 1 FAIL: calculated " << res << " instead of 1" << endl;
    }
    
    // Test case 2: length of 1 should be 1
    res = binaryLength(1);
    if (res == 1)
    {
        cout << "Test case 2 OK" << endl;
    }
    else
    {
        cout << "Test case 2 FAIL: calculated " << res << " instead of 1" << endl;
    }
	
	// Test case 3: length of 3 should be 2
    res = binaryLength(3);
    if (res == 2)
    {
        cout << "Test case 3 OK" << endl;
    }
    else
    {
        cout << "Test case 3 FAIL: calculated " << res << " instead of 2" << endl;
    }
    
    // Try some more test cases yourself...


    res = binaryLength(15);
    if (res == 4)
    {
        cout << "Test case 4 OK" << endl;
    }
    else
    {
        cout << "Test case 4 FAIL: calculated " << res << " instead of 4" << endl;
    }


    res = binaryLength(25);
    if (res == 5)
    {
        cout << "Test case 5 OK" << endl;
    }
    else
    {
        cout << "Test case 5 FAIL: calculated " << res << " instead of 5" << endl;
    }

    // Program done
    return 0;
}
