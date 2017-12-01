#include <vector>
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

bool intPalindrome(int x)
{	
	if (x < 0){return false;}
	int y = x;
	int rev = 0;
	while (y != 0)
	{
		rev = rev * 10 + y%10;
		y = y/10;
	}
	return x == rev;
}


int main()	
{	
	int palindromNumber = 12321;
	if (intPalindrome(palindromNumber))
	{
		cout << "Number is palidndrome!" << endl;
	} else {
		cout << "The number is not palindrome." << endl;
	}
	return 0;
}