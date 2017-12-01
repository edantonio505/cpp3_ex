#include <string>
#include <vector>
#include <iostream>


using namespace std;



bool isUniqueChars(const string &str)
{		
	// if str is greater than 128 ascii characters. then It is imposible for it to be unique
	if(str.length() > 128)
	{
		return false;
	}
	// create a vector of 128 bool characters space
	vector<bool> char_set(128);
	for (int i = 0; i < str.length(); i++)
	{	
		//loop through each character
		int val = str[i]; //ascii integer value for each letter
		// check if this character key is True in the vector previously set
		if(char_set[val]) //check if it is true
		{
			return false;
		}
		char_set[val] = true;
	}	
	//only if all characters returned are true
	return true;
}	







int main()
{
	string word = "abcde";

	if (isUniqueChars(word))
	{
		cout << "Yay is Unique!";
	} else {
		cout << "It is not unique yet";
	}

	return 0;
}