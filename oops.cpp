/*
#include<iostream>  
using namespace std;
/*
class piku{
	public:
		int x,y;     //x,y is the member function
};
int main(){
	piku ob;        //creat object of the class
	ob.x=10;
	ob.y=10;       //access data member through object
	cout<<"results : "<<ob.x + ob.y;   //perform operation
	return 0;
}
*/
/*
#include<iostream>  
using namespace std;
class square{
	public:
		int arms;
};
int main(){
	square ob;
	cout<<"Enter side of length ";
	cin>>ob.arms;
	cout<<"results : "<<ob.arms*ob.arms;
	return 0;
}*/

#include<iostream>
using namespace std;
 
class check{
	public:
		int a,b;
};
int main(){
	check ob;
	cout<<"Enter the first value : ";
	cin>>ob.a;	
	cout<<"Enter the second value : ";
	cin>>ob.b;
if(ob.a>ob.b){
	cout<<"greater number : "<<ob.a;
}else{
	cout<<"greater number is : "<<ob.b; 
}
}
