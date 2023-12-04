#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>
using namespace std;


int DoStuff (string fileName) {
	string line;
	ifstream myfile (fileName);
	string firstDigit;
	string lastDigit;
	int curFullNumber = 0;

	if (myfile.is_open()){
	    while(getline(myfile,line)){
	    	line.erase(remove_if(line.begin(), line.end(), (int(*)(int))isalpha), line.end());
			firstDigit = char(line.at(0));
			lastDigit = char(line[line.length()-1]);
			curFullNumber += stoi(firstDigit + lastDigit);
	    }
		myfile.close();
		cout << "Is nb : " << curFullNumber << endl;
	}else{
		cout << "Unable to open file" << endl;
	}
	return 0;
}

