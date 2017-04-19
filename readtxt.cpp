#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main (){
	string line;

	ifstream myfile ("example.txt"); //name of the file

	if (myfile.is_open()) //if it was open with succed
	{
		while(!myfile.eof()) //while it is not the "end of file" continue
		{
			getline (myfile, line); //file get the line of myfile, 
									//in the next loop, line get the next

			cout << line << endl; //test if it is correct
		}
		myfile.close();
	}

	else cout << "Unable open the file\n";

	return 0;
} 