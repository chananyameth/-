#include<iostream>
#include<windows.h>
using namespace std;
char revach(int n)
{
	for(int i=1; i<n; ++i)
		cout<<"  ";
	return '  ';
}
void main()
{
	cout<<(char)7;
	Sleep(300);
	cout<<(char)7;
	Sleep(300);
	cout<<(char)7;
	Sleep(300);
	for(int i=1; i<40; ++i)
	{
		cout<<revach(i)<<"          #####  #####                      "<<endl;
		cout<<revach(i)<<"            ####   ####                     "<<endl;
		cout<<revach(i)<<"              ###    ###                    "<<endl;
		cout<<revach(i)<<"               | |    | |                   "<<endl;
		cout<<revach(i)<<"               | |    | |                   "<<endl;
		cout<<revach(i)<<"       ________|_|____|_|___________        "<<endl;
		cout<<revach(i)<<"       v## # # ########## # # # ####v       "<<endl;
		cout<<revach(i)<<"        v##########################v        "<<endl;
		cout<<revach(i)<<"         v########################v         "<<endl;
		cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
		cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
		cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
		Sleep(10);
		system("CLS");
	}
	system("pause");
}