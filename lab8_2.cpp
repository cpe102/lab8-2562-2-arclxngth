#include<iostream>
using namespace std;

void printO (int N, int M){

	int x,y;

	if(N>0 && M>0){

		for(y=1; y<=N; y++){
			for(x=1; x<=M; x++){

			cout<<'O';

			}
			cout<<endl;
			x=1;
		}
	}
	else cout<<"Invalid Value";
}

int main(){

	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
}
