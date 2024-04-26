#include <iostream>
#include <climits>
#include <vector>
#include <string>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

/*
 Appraoch 1  - My approch and inplace approach
 No extra string is required

*/
string replaceSpaces(string &str)
{

	string s = "@40";
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == 32)
		{
			str.erase(str.begin() + i); // erasing space from original string
			str.insert(i, s);			// inserting @40 at the index i
			i += 3;						// increment to i by 3
		}
	}
	return str;
}

// Approach -2 using extra string

string replaceSpaces1(string &str)
{

	string temp = "";

	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == ' ')
		{
			temp.push_back('@');
			temp.push_back('4');
			temp.push_back('0');
		}
		else
		{
			temp.push_back(str[i]);
		}
	}

	return temp;
}

int main()
{

	string s = "sgsdsfhgs bshshsh";
	string str = replaceSpaces(s);
	cout << str << endl;
}
