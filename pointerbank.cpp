#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
class bank{
	char name[100],address[100],y;
	int balance,amount,ch;
	public:
		void open_account();
		void deposite_money();
		void withdraw_accouny();
		void display_account();
};
void bank::open_account(){
	cout<<"Enter your full name :: ";
	cin.ignore();
	cin.getline(name,100);
	cout<<"Enter your address :: ";
	cin.ignore();
	cin.getline(address,100);
	cout<<"which type of account you want to open \n";
	cin>>y;
	cout<<"Enter amount for deposite :: ";
	cin>>balance;
	cout<<"your account has been created \n";
}
void :: diposite_money(){
	cout<<" Enter deposite amount : ";
	cin>>amount;
	balance+=amount;
	cout<<"Tatal balance is : \t"<<balance;
}
void bank :: display_account(){
	cout<<"your full name :: \t"<<name;
	cout<<"your address :: \t"<<address;
	cout<<"type of account :: \t"<<y;
	cout<<"Amount you deposite :: \t"<<balance;
}
void bank :: withdraw_money(){
	cout<<"\n withraw :: ";
	cout<<"Enter amount to withraw :: \t ";
	cin<<amount;
	balance-=amount;
	cout<<"now your total amount :: "<<balance;	
}
int main()
{
	do{
	
	cout<<"1)  open account \n" ;
	cout<<"2)  deposite money \n";
	cout<<"3)  widraw money \n";
	cout<<"4)  Display account \n";
	cout<<"5)  Exit";
	cout<<"select the option from above";
	cin>>ch;
	switch(ch){
		case 1:"1)open acccount \n";
		obj.open_account();
		break;
		case 2:<<"2) deposite money  \n";
		obj.deposite_money();
		break;
		case 3:<<"3) withdraw money : \n" ;
		obj.withdraw_accouny();
		break;
		case 4:<<"4)display account \n";
		Display_account();
		break;
		default:
		cout<<"\n do you want to select next option : : y \n";
    	}
	}
	getch();
	return 0;
}
