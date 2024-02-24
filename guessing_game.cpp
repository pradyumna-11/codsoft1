#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main() {
	int rno,guessed_no,tries = 0;
	unsigned seed = static_cast<unsigned>(time(0)) + static_cast<unsigned>(__LINE__);
    srand(seed);
	rno = rand()%100;
	while(guessed_no!=rno) {
		cout<<"Enter a guess to match with random number b/w 10-100 : ";
		cin>>guessed_no;
		tries+=1;
		if(guessed_no==rno){
			cout<<"Congratulations! You have guessed correctly in "<<tries<<" tries";
			break;
		}
		if(guessed_no>rno) {
			cout<<"Your guess is too high"<<endl;
		}
		if(guessed_no<rno) {
			cout<<"Your guess is too low"<<endl;
		}
		
	}
	return 0;
}
