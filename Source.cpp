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
	cout << "\nВведіть символьний рядок:  ";
	getline(cin,str);
	UkrString sent(str);

	cout << "Введіть символьний підрядок:  ";
	sent.Input();

	
	if (sent.CheckSubstring() == string::npos) {
		cout << "\n\tПідрядок не входить у рядок."<<endl;
		sent.Conkat();
		cout << "\nРядок після конкатенації:  ";
		sent.Output();
		cout << endl;
	}
	else {
		cout << "\n\tПідрядок входить у рядок."<<endl;
		cout << "\nКонкатенація не потребується."<<endl;
	}
	return 0;
}