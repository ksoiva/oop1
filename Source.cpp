#include <iostream>
#include <string>
using namespace std;


class UkrString {
private:
	string str;
	int num;
	string substr;
public:
	UkrString(string valuestr) {
		str = valuestr;
		num = str.size();
	}
	
	void Input();
	void Output();
	int CheckSubstring();
	void Conkat();

	~UkrString() {
	}
};

void UkrString::Input(){
	getline(cin, substr);
}

void UkrString::Output() {
	cout << str;
}

int UkrString::CheckSubstring(){
	return str.find(substr);
}

void UkrString::Conkat(){
	str += ' ';
	str += substr;
}

int main() {
	system("chcp 1251");

	string str;
	cout << "\n������ ���������� �����:  ";
	getline(cin,str);
	UkrString sent(str);

	cout << "������ ���������� �������:  ";
	sent.Input();

	
	if (sent.CheckSubstring() == string::npos) {
		cout << "\n\tϳ������ �� ������� � �����."<<endl;
		sent.Conkat();
		cout << "\n����� ���� ������������:  ";
		sent.Output();
		cout << endl;
	}
	else {
		cout << "\n\tϳ������ ������� � �����."<<endl;
		cout << "\n������������ �� �����������."<<endl;
	}
	return 0;
}