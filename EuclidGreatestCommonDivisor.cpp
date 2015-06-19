/*
	Date		:	Thursday, June 18, 2015
	Author		:	QualiP (https://github.com/QualiP)
	Objective	:	This algorithm is based off Algorithm E ("The Art of Computer Programming Vol.1" by Knuth).
					Algorithm E is Euclid's Greatest Common Divisor.
						Given two positive integers m and n, find their greatest common divisor,
						that is, the largest positive integer that evenly divides both m and n.
					This derivation includes the pre-swap and provides output for each iteration.
	Version		:	1.0
	Todo		:	Better formatting for the output.
					istream for unsigned int.
						Use regex to sanitize.
*/

#include <iostream>
#include <utility>  // Provides the swap() function.

unsigned int EuclidGCD(unsigned int m, unsigned int n) 
{
	for (unsigned int r{ 0 }, i{ 0 };; ++i) {
		std::cout << i << ". "
			<< "m = " << m << "\t"
			<< "n = " << n << '\n';

		if (m < n) { 
			std::swap(m, n); 
			std::cout << "m is less than n. Perform swap()\n"; 
		}
		else 
		{
			r = m % n;
			if (r != 0) 
			{ 
				m = n;
				n = r;
			}
			else 
			{
				std::cout << "Greatest common divisor = " << n << '\n';
				return n;
			}
		}
	}
}

int main() {
	unsigned int m{22222};
	unsigned int n{9999999};
	EuclidGCD(m, n);
}
