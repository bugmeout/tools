#include <iostream>
#include <string>
using namespace std;

int main(int argc,char **argv)
{
	
	string HexString;
	
	while (1)
	{	cout<<
	"enter the hex number without space:"<<endl;
	cin>>HexString;
	int str_len = HexString.length();
	for (int i =0 ; i <str_len;i=i+2)
	{
		int ten_num=HexString[i]-'0';
		int base_num= HexString[i+1]-'0';
		int asci_num = ten_num*16+base_num;
		cout <<(char)asci_num;
	}
	cout<<endl;
	}
	
	return 0;
}