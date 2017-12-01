#include <string>
#include <vector>
#include <iostream>
#include <cctype>

using namespace std;

std::string capitalize(std::string s, std::vector<int> idxs)
{  
	for (vector<int>::iterator iter = idxs.begin(); iter < idxs.end(); ++iter)
	{
		s[*iter]  = toupper(s[*iter]);
	}
  	return s;
}



int main()
{	
	vector<int> newVector;
	newVector.push_back(1);
	newVector.push_back(2);
	newVector.push_back(5);
	string newString = capitalize("abcdef", newVector);
	cout << "This is the new string " << newString;
	cout << endl;
	return 0;	
}