#include <iostream>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	double x;
	double y;
	double z;
	cout << "�ֱ��������������ߵĳ���:";
	cin >> x >> y >> z ;
	while (((x+y)<=z)||((x+z)<=y)||((y+z)<=x)) {
		cout << "���߳����޷���������������������"<<endl;
		cout << "�ֱ��������������ߵĳ���:";
		cin >> x >> y >> z ;
	}
	cout <<"�������ܳ�Ϊ:";
	cout << (x+y+z);
	if ((x==y)||(x==z)||(y==z)){
		cout << ",��Ϊ���������Ρ�";
	}
	else{
		cout <<",���ǵ��������Ρ�";
	}
	system("pause"); 
	return 0;
}
