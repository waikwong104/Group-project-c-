#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
	ifstream inputFile;
	inputFile.open("Text.txt");

	string str[8][1000];
	string content;
	string file_contents;
	string ID[1000];
	string Job_Title[1000];
	string Email_Address[1000];
	string Last_Name[1000];
	string First_Name[1000];
	string Phone_Number[1000];
	string Skill[1000];
	string Country[1000];
	int loop = 0;
	/*for (int i = 1; i < 8; i++) {

		for (int j = 1; j < 1000; j++)

			inputFile >> str[i][j];
	}*/
	/*
		while (getline(file, str))
		{
			for (int i = 0; i < 1000; i++) {
				if (str == " ") {
					ID[i] = str;
				}
				if (str == " ") {
					Job_Title[1000] = str;
				}
				if (str == " ") {
					Email_Address[i] = str;
				}
				if (str == " ") {
					Last_Name[i] = str;
				}
				if (str == " ") {
					First_Name[i] = str;
				}
				if (str == " ") {
					Phone_Number[i] = str;
				}
				if (str == " ") {
					Skill[i] = str;
				}
				if (str == " ") {
					Country[i] = str;
				}
			}
		}
	*/
	//for (int i = 1; i < 8; i++) {

	//	for (int j = 1; j < 1000; j++)

	//		inputFile >> str[i][j];
	//}
	/*	file_contents += str;
		file_contents.push_back('\n');
		cout << str<<endl;*/


	system("pause");
	return 0;
}