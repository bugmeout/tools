#include <iostream>
#include <string>
using namespace std;
//first you need fix the GetLine() bug. Using the URL below:
//http://segmentfault.com/blog/bugbug/1190000000705008
int main()
{
	string str;
	while(true)
	{

	
	cout<<"Enter the hex-need string:";
	//cin.getline(str);
	getline(cin,str);
	for (int i=0; i<str.length();i++)
	{
		cout<<hex<<(int)str[i]<<" ";  //
		//	cout<<binary()<<(int)str[i];
		if((i+1)%8==0)
			cout<<"  ";
		if ((i+1)%16==0)
			cout<<endl;
		
	}
	cout<<endl;
	}
	return 0;
}