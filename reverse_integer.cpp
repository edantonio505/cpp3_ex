#include <vector>
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

	
int reverseInt(int x) {
    int rev = 0;
    while(x != 0){
        rev = rev*10 + x%10;
        x = x/10;
    }
    return rev;
}


string reverseString(const string& x)
{	
	string newString;
	for(int i = x.length() -1; i >= 0; --i)
	{
		newString += x[i];
	}
	return newString;
}


int main()
{		
	string word = "something";
	cout << "original string " << word << endl;
	string reversedString = reverseString(word);
	cout << "reversed string " << reversedString << endl;


	int originalInt = 123;
	cout << "Original Integers " << originalInt << endl;
	int newInteger = reverseInt(originalInt);
	cout << "Reversed Integer " << newInteger << endl;
	return 0;
}