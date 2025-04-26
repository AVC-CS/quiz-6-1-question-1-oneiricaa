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

int getPrevPrime(int end)
{
    int prime2, flag=0;

	prime2 = end - 1;

	while(true)
	{
		flag=0;
		for (int div=2; div<prime2; div++)
		{
			if (prime2 % div == 0)
            {
                flag = 1;
                prime2 -= 1;
				break;
            }
		}
			if (!flag)
            {
                return prime2;
            }       
	}  
}