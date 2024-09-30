// CSC1061_Test_Hash
// Demonstrate unordered_map and hash
//    STL templates 
// Kathy Geise
// Date 9/29/24

#include<iostream>
#include<string>
#include<unordered_map>

using namespace std;

int main() {

	unordered_map<string, int> testMap;

	string string1 = "hello";
	string string2 = "world";
	string string3 = "abcde";
	int num1 = 1;
	int num2 = 2;
	int num3 = 3;

	// Instantiation of string hash Object
	hash<string> mystdhash;

	// Using operator() to get hash value
	cout << "String hash values for " << string1 << " : " 
		<< mystdhash(string1)
		<< endl;

	// Using operator() to get hash value
	cout << "String hash values for " << string2 << " : "
		<< mystdhash(string2)
		<< endl;

	// Using operator() to get hash value
	cout << "String hash values for " << string3 << " : "
		<< mystdhash(string3)
		<< endl;

	pair<string, int> p1;
	p1 = make_pair(string1, num1);

	testMap.insert(p1);
	testMap.insert(make_pair(string2, num2));
	testMap.insert(make_pair(string3, num3));


	cout << "\nPrint test map" << endl;
	for (auto tu = testMap.begin(); tu != testMap.end(); ++tu) {
		cout << tu->first << " " << tu->second << endl;
	}

	return 0;
}