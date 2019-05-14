#include <iostream>
#include <string>

using namespace std;

int main()
{
	
	string username;
	int code;
	const int _23E = 574;
	int EAX = 0;
	int EBX = 0;
	int ECX = 0;
	int EDX = 0;
	int EBP_8 = 0;
	int EBP_C = 0;
	int EBP_10 = 574;
	int EDI = 0;
	while(1) {
		system("cls");
	while (1)
	{
		cout << "(nhap x de thoat)";
		cout << "\nName > ";
		cin >> username;
		if(username=="x") {
			return 0;
		}
		if (username.length() > 4)
			break;
		else {
			system("cls");
			cout << "Nhap Name tren 4 ki tu ";
		}
	}
	int len;
	if (username.length() <= 6)
		len = username.length();
	else
		len = 6;
	for (EBP_8 = 0; EBP_8 < len; EBP_8++)
	{
		EBX = EBP_8;
		EAX = username[EBP_8];
		ECX = 5;
		EAX = EAX / ECX;
		EBX = EAX;
		ECX = EBX;
		ECX = ECX >> 31;
		EAX = EBP_10;
		EDX = EBP_C;
		ECX = ECX * EAX;
		EDX = EDX * EBX;
		ECX = ECX + EDX;
		EAX = EAX * EBX;
		EDX = EDX + ECX;
		EBP_10 = EAX;
		EBP_C = EDX;
		EDI = username[EBP_8];
		EDX = EDI;
		EDX = EDX >> 31;
		EBP_10 = EBP_10 + EDI;
		EBP_C = EBP_C + EDX;
		code = EAX;
	}
	code = code + username[len - 1];
	cout << endl << "Key > " << code << endl;
	system("pause");
	}
	system("pause");
	return 0;
}