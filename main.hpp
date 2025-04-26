#include <iostream>
using namespace std;

void getTwoValues(int begin, int end)
{
    begin = 1;
    end = 0;
    while(begin > end)
    {
        cout << "Enter two integers: ";
        cin >> begin >> end;
    }
}
// // Ask for two integer values to User
// // cin >> begin >> end ; 
// // The first input "begin" must be less than the second input "end"
// // Otherwise, you should retake two inputs repeatedly until begin < end.
// // Assign two input values to the parameters
// // No return value

// getNextPrime(begin)
// // Find the closest next prime number to the given parameter
// // In other words, prime number > begin and the closest to the "begin"
// // Return the prime number

// getPrevPrime(end)
// // Find the prime number which is closest to and less than the given parameter
// // prime number < end
// // Return the prime number