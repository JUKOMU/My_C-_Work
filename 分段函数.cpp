#include <iostream>
using namespace std; 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	double x;
	double y;
	cout << "����x��ֵ:";
	cin >> x;
	while ((x<=0)||(x>=10)){
		cout <<"����x��ֵӦ����0��10֮�䣡"<<endl;
		cout << "����x��ֵ:";
		cin >> x;
	}
	if ((x>0)&&(x<1)){
		y = 3 - 3 * x;
		cout <<"����ֵΪ:"<< y <<endl;
	} 
	else if ((x>=1)&&(x<5)){
		y = 1/(2 * x) + 1;
		cout <<"����ֵΪ:"<< y <<endl; 
	}
	else if ((x>=5)&&(x<10)){
		y = x * x;
		cout <<"����ֵΪ:"<< y <<endl;
	}	
	system("pause");
	return 0;
}
