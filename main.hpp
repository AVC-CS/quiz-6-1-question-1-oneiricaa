#include <iostream>
using namespace std;

void getTwoValues(int &begin, int &end)
{
    begin = 1;
    end = 0;
    while(begin > end)
    {
        cout << "Enter two integers: ";
        cin >> begin >> end;
    }
}

int getNextPrime(int begin)
{
	int prime1, flag=0;

	prime1 = begin + 1;

	while(true)
	{
		flag=0;
		for (int div=2; div<prime1; div++)
		{
			if (prime1 % div == 0)
            {
                flag = 1;
                prime1 += 1;
				break;
            }
		}
			if (!flag)
            {
                return prime1;
            }       
	}
}
// // Find the closest next prime number to the given parameter
// // In other words, prime number > begin and the closest to the "begin"
// // Return the prime number

// getPrevPrime(end)
// // Find the prime number which is closest to and less than the given parameter
// // prime number < end
// // Return the prime number