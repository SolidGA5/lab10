#include<iostream>
using namespace std;

int main(){
	int count[5] = {}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	char grade;
	int id = 1;
	cout << "Please input grade of each student (A-F) or input 0 to exit." << "\n";
	do{
		cout << "Student [" << id << "]: ";
		cin >> grade; 
		if(grade == '0'){
			break;
		}	
		if(grade == 'A'){
			count[0]++;
			id++;
		}else if (grade == 'B'){
			count[1]++;
			id++;
		}
		else if (grade == 'C'){
			count[2]++;
			id++;
		}else if (grade == 'D'){
			count[3]++;	
			id++;
		}else if (grade == 'F'){
			count[4]++;
			id++;
		}else{ cout << "Wrong input. Please input again." << "\n";}
		 
	}while(true);
	
	
	cout << "In total " << id-1 << " students." << "\n";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";
	cout << "F = " << count[4];
	
	return 0;
}
