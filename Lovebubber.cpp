#include<iostream>
using namespace std;
/*access element with the help of index. we are store the thouands of  
value within single variable .multiple values store in single variable .*/
/*
int main(){
	int arr[5]={34,45,76,89,23};
	for(int i=0; i<5; i++ ){
		cout<<arr[i]<<endl;
	}
}
*/
//indexing  start in array 0 to (n-1) ,
/*
int main(){
	int num;
	cout<<"Enter the number  : ";
	cin>>num;
	float arr[num],i;
	for(float i=0; i<num; i++){
		cin>>arr[i];
	}
	cout<<"your array is "<<endl;
	for(float i=0; i<num; i++){
		cout<<i<<"="<<arr[i]<<endl;
	}
	return 0;
}
*/
/*An array is the series of elements of the same type placed in 
contigious  memory location that can be individually referenced by 
adding an index to a unique identifire */

/*
int main(){
	//int number[10];
	//cout<<"Every thing is fine : "<<number[10]<<endl;
	int arr[20]={};
	for(int i=1; i<=20; i++){
	cout<<arr[i]<<endl;
	}
	return 0;
}
*/
 /* 
 This is dedicated to love bubber 
  * *  * *
*    *     *
*          * 
 *        *
   *   *
     *
this code is last code of pattern     
     */
     
 //int main(){
 	
//declared a array
//int number[15];

//cout<<endl<<"Every thing is fine"<<endl<<endl;
//accesing a array
//cout<<"access the array index"<<number[10];

//inicilize a array
//int second[5] = {2,5,7,9,4};
//cout<<"value of second index  : "<<second[2]<<endl;

// int third[10]={20,56,34,25};
//int n=10;
 //for(int i=1; i<=n+5; i++){
 //	cout<<third[i]<<endl;
 //}
 //return 0;}
 
 /* Book alloacaton problem 
 1)each student gets allocate one book
 2)Each book should be allocated 
 3)each book should be contineous */
 
/* 
 bool ispossible(int vector<int>arr,int n,int m,int mid){
 	int studentcount =1;
 	int pagesum = 0;
 	for(int i=0; i<n; i++){
 		if(pagesum+=arr[i] <= mid){
 			pagesum += arr[i];
		 }else{
		 	studentcount++;
		 	if(studentcount>>m||arr[i]>mid){
		 		return false;
			 }
			 pagesum = arr[i];
		 }
	 }
	 return true;
 }
 int allocatedBooks(int vector<int>arr,int n,int m,int mid){
 	int s=0;
 	int sum=0;
 	for(int i=0; i<n; i++){
 		sum += arr[i];
	 }
	 int e=sum;
	 int ans=-1;
	 int mid=s+(e-s)/2;
	 while(s<=e){
	 	if(isposible(arr,n,m,mid)){
	 		ans = mid;
	 		e=mid-1;
		 }else{
		 	s=mid-1;
		 }
		 mid = s+(e-s)/2;
	 }
	 return ans;
}
 */ 
 /*
 int main(){
 	int num ;
 	cout<<"Enter the number : ";
 	cin>>num;
 	bool flag=0;
 	for(int i=2; i<num; i++){
 		if(num%i==0){
 			cout<<num<<" Non prime number : ";
 			flag=1;
 			break;
		 }	 
	 }
	 if(flag==0){
	 cout<<num<<"  prime number";
   }
return 0;
}
*/
/*
int main(){
int num; 
cout<<"Enter the number :";	
cin>>num;
int reverse = 0;
while(num>=0){
	int reminder = num%10;
    reverse = reverse*10+reminder;
	num = num / 10;
  }
  cout<<"Reverse number : "<<reverse;
}
*/
/* 
//this program is wrong so check its
#include<Math.h>
int main(){
	int num,rem;
	cout<<"Enter the number : ";
	cin>>num;
	int digit = num;
 int sum = 0;
 while(0<=digit){
 	 rem = digit%10;
 	int sum =+ pow(rem,3);
 	digit = digit/10;
 }
  if(sum==num){
  	cout<<"armstrom number : " ;
  }else{
  	cout<<"unarmstrom number : ";
  }
}
*/
/*
int main(){
	int num1 ,num2 ;
	cout<<"Enter the first number :"<<endl;
	cin>>num1;
	cout<<"enter the second number :"<<endl;
	cin>>num2;
	cout<<"sum of two numbers :"<<num1+num2;
	return 0;
}
*/
/*Class= a class is the blueprint for creating an object 
object= object is an entity that has state and behaviour Here state means data 
and behaviour means funtionality.
member function = methode
data member = instance variable
you can access the function outside the class by use of scope resulation operater
(::).you can pass the parameter in function.
 */
/*
class sum{
	public :
		int x,y;
};
int main(){
	sum obj;
	obj.x =10;
	obj.y =20;
	cout<<"Addition : "<<obj.x+obj.y;
	return 0;
	
}*/

/*
class sub{
	public:
		int a,b;
};
int main(){
	sub obj;
	cout<<"Enter the first number : "<<endl;
	cin>>obj.a;
	cout<<"Enter the second number: "<<endl;
	cin>>obj.b;
	cout<<"Substraction of two number : "<<obj.a-obj.b;
	return 0;
}
*/
/*
class cube{
	public:
		int x,y;
		int cubic(){
   cube obj;
	  obj.x =10;
    	obj.y =20;
	return obj.x+obj.y;
  }
};

int main(){
	cube obj;
	cout<<obj.cubic();
	return 0;
}
*/
/*
class myself{
	public:
		void my_function(){
			cout<<" Dashing Devang kartik Suryavanshi  ";
		}
};
int main(){
	myself obj;
	obj.my_function();
}
*/
/*
class Myclass{
	public:
		int x,y;
		my_function();
};
Myclass::my_function(){
		Myclass obj;
		cout<<"Enter the first number :"<<endl;
	    cin>>obj.x ;
	    cout<<"Enter the second number :"<<endl;
		cin>>obj.y ;
	return obj.x+obj.y;	
}
int main(){
		Myclass obj;
	cout<<"sum : "<<obj.my_function();
}
*/
/*
class cube{
	public:
		int cubic(int x);
};
int cube::cubic(int x){
	return x*x*x;
	x++;
}
int main(){
   cube obj;
   cout<<"cube : "<<obj.cubic(5)<<endl;
return 0;
}
*/
/*A construster is the special methode  that is automatically called when
 object of the class is created .construster name and class name must be same.
 A construster is the member function used to initilized the object of the class.
 */
 /*
 class Myclass{
 	public:
 		Myclass(){
 			cout<<"Devang Kartik";
		 }
 };
 int main(){
 	Myclass obj;
 	return 0;
 }
 */
 /*
 class programing{
 	public:
 		string Language_name;
 		string founder;
 		int year;
 		programing(string x,string y,int z){
 			Language_name=x;
 			founder=y;
 			year=z;
		 }
 };
 int main(){
 	programing obj1("java","james gosling",1995);
	programing obj2("c++","Bajarne stostruph",1989);
	
	cout<<"Name of the language : "<<obj1.Language_name<<endl
	<<"name of the founder : "<<obj1.founder<<endl
	<<"year of releasing : "<<obj1.year<<endl;
		cout<<"Name of the language : "<<obj2.Language_name<<endl
	<<"name of the founder : "<<obj2.founder<<endl
	<<"year of releasing : "<<obj2.year<<endl;
	return 0;
 }
 */
 /*
 class collage{
 	public:
 	string name;
 	string course;
 	string collage_name;
 	int roll_no;
 	float fees;
 	collage(string a,string b, string c,int e,float f);
 };
 collage::collage(string a,string b, string c,int e,float f){
 	name=a;
 	course=b;
 	collage_name=c;
 	roll_no=e;
 	fees=f;
 }
 int main(){
 	collage student1("DevangKartik","Bachelor of computer application",
	 "virendra swaroop collage of management studies",16,37000);
	 
	collage student2("om jaiswal","Bachelor of computer application",
	 "virendra swaroop collage of management studies",20,32000);
	 
	collage student3("kartik aryan","Bachelor of business administration",
	 "virendra swaroop collage of management studies",25,35000);
	 
	  cout<<"name of the student : "<<student1.name<<endl<<"Name of the course : "<<student1.course
	 <<endl<<"Collage name : "<<student1.collage_name<<endl<<"Roll_number of the student :"
	 <<student1.roll_no<<endl<<"Collage fees within a year : "<<student1.fees<<endl<<endl;
	 
	  cout<<"name of the student : "<<student2.name<<endl<<"Name of the course : "<<student2.course
	 <<endl<<"Collage name : "<<student2.collage_name<<endl<<"Roll_number of the student :"
	 <<student2.roll_no<<endl<<"Collage fees within a year : "<<student2.fees<<endl<<endl;
	 
	  cout<<"name of the student : "<<student3.name<<endl<<"Name of the course : "<<student3.course
	 <<endl<<"Collage name : "<<student3.collage_name<<endl<<"Roll_number of the student :"
	 <<student3.roll_no<<endl<<"Collage fees within a year : "<<student3.fees<<endl;
	 return 0;
 }
 */
 /*
 class Date{
 	int month,day,year;
 	public:
 		Date(int m,int d, int y);
 };
 Date::Date(int m,int d, int y ){
 	month=m;
 	day=d;
 	year=y;
 	friend ostream& operater<<(ostream& os,const Date& dt);
 }
 ostream& operater<< (ostream& os,const Date& dt){
 	os<<dt.month<<'/'<<dt.day<<'/'<<dt.year;
 	return os;
 }
 int main(){
 	Date dt(2,12,2022);
 	cout<<dt;
 }
 */
 /*the public keyword is th e access specifire.there are type of access specifire .
  public:public means its accessible outside of the class.
 private :member function cannot be accessed from outside the class.
 protected:member function cannot be accessed from outside the class but it can be accessed
 inherited class.
 Note:by default member function of the class are private access specifier. 
 Encapsulation:the meaning of Encapsulation,is to make sure ""senstive data is hidden from 
 user ,to achive this you must declared class varianle as private.
 to access a private atribute "get" and "set" methode in public;
 */
 /*
 class Employee{
 	private :
 		//private attribute
 		int salary;
 		public :
 			//setter
 			void setsalary(int s){
 				salary=s;
			 }
			 //getter
			 int getsalary(){
			 	return salary;
			 }
 };
 int main(){
 
 	Employee myobj;
 myobj.setsalary(50000);
 cout<<"Employee salary is : "<<myobj.getsalary();
 	return 0;
 }
 */
 /*Inheritance : Inhiritence is the machenism through which a child class may inherit
 all the properties  and behaviour of its parent class.
 base class(parent)= the class being inherited from. 
 drived class(child class)= the class inherits another class.
 the inherits a class ,use the (:) symbol
 its useful for code resuability .reuse attributes and methods an existing class when
  you create new class*/
 /*
 class calculate1{
 	public:
 	void sum(int a ,int b){
 		cout<<"Addtion : "<<a+b<<endl;
	 }
	 void sub(int a,int b){
	 	cout<<"substraction : "<<a-b<<endl;
	 }
 };
 class calculate2{
 	public :
 		void mul(int a,int b){
 			cout<<"multiplication : "<<a*b<<endl; 
		 }
		 void div(int a,int b){
		 	cout<<"division : "<<a/b<<endl;
		 }
 };
 int main(){
 	calculate1 obj;
 	obj.sum(45,56);
 	obj.sub(100,30);
 	calculate2 ob;
 	ob.mul(12,12);
 	ob.div(120,6);
 	return 0;
 }
*/
/*
class Myclass{
	public:
		void show(){
			cout<<"welcome to my show : ";
		}
};
class yourclass:public Myclass{
public:
	void display(){
		int x=10;
		cout<<x<<"X"<<endl;
	}
};  
int main(){
	yourclass obj;
	obj.show();
	obj.display();
	return 0;
}
*/
/*
class Vechile{
	public:
	string brand = "ford";
	void honk(){
		cout<<"Tuut  ,  Tuut !\n";
	}
};
//derived class(child class)
class car : public Vechile{
	public:
	string model = "Mustang";
};
int main(){
	car mycar;
	mycar.honk();
	cout<<mycar.brand+" "+mycar.model;
	return 0;
}
*/
/*Methode overloding = Same methode name and different parameters (Either in there 
datatype or number of argument) is known as methode overloding
construster overloding = Same construster name but different parameter (either in data 
type or number of argument ) is known as construster overloding.*/
/*
class calculation{
	public:
	void sum(int a,int b ,int c){
		cout<<"result : "<<a+b+c<<endl;
	}
	void sum(float x,float y){
		cout<<"results : "<<x+y<<endl;	
	}
		void sum(int p,int q ){
		cout<<"result : "<<p+q<<endl;
	}
};
int main(){
	calculation obj;
	obj.sum(23,45,68);
	obj.sum(1.2f,2.5f);
	obj.sum(23,45);
	return 0;
}
*/
/*
class privatedemo{
	int a;
	public:
		void setter(int x){
			a=x;
		}
		getter(){
			return a*a*a;
		}
};
int main(){
	privatedemo obj;
	obj.setter(5);
	cout<<"cube is : "<<obj.getter();
	return 0;
}
*/
/*
class adiction{
	int x;
	int y;
	public :
		int setadd(int a,int b){
			x=a;
			y=b;
		}
		getadd(){
			return x+y;
		}
};
int main(){
	adiction obj;
	obj.setadd(23,79);
	cout<<"Sum of two numbers : "<<obj.getadd();
}
*/
/*
class protecteddemo{
	protected:
		int num;
};
class protector : public protecteddemo{
	public:
		int square(){
			cout<<"Enter the number : ";
			cin>>num;
			cout<<"Square of the number :"<<num*num;
		}
};
int main(){
	protector obj;
	obj.square();
	return 0;
}
*/
/*
class iteam{
	private:
		string name;
		int version;
		float price;
		string color;
		public:
         int setiteam(string p,int q,float r,string s){
			name = p;
			version = q;
			price = r;
			color = s;			
	cout<<"Name of the mobile : "<<name<<endl<<"name of version : "<<version
	<<endl<<"price of the mobile phone :"<<price<<endl<<"colour of the mobile : "<<color;             
		}
		getiteam(){
     return 0; 	
   }
};
int main(){
    iteam code;
    code.setiteam("redmi_9",2023,17000,"bright golden");
    cout<<code.getiteam();
return 0;
}
*/
/*
class calculation{
	protected:
		int x;
		int y;
};
class calculate : public calculation{
	public:
	 int sum(){
		cout<<"Enter the first number : ";
		cin>>x;
		cout<<"Enter the second number : ";
		cin>>y;
		return x+y;
	}
};
int main(){
	calculate obj;
	cout<<"sum of two numbers :"<<obj.sum();
	return 0;
}
*/
/*MULTILEVEL INHERITANCE : CAN ALSO BE DRIVED FROM ONE CLASS WHICH IS WHICHIS 
	ALREADY DRIVED FROM ANOTHER CLASS My Grandchild is derived from class mychild (which
	is derived by my class. 
MULTIPLE INHERITENCE :Aclass can alsobe drived from more Than one base class , 
using a comma separated list)*/
/*
class Employee{
	protected:
		int salary;
};	
class Programer : public Employee{
	public :
		int bonus ;
		int setsalary(int x){
			salary=x;
		}
		getsalary(){
			return salary;
		}
};
int main(){
	Programer obj;
	obj.setsalary(20000);
	obj.bonus=10000;
	cout<<"Salary of the Employee : "<<obj.getsalary()<<endl;
	cout<<"Bonus of the programmer : "<<obj.bonus;
	return 0;
}
*/
/*POLYMORPHISM INHERITANCE : uses of methode to perform different task .this allow to use a 
single action different ways.its use to code reausibility : reuse attributes and methode 
of an existing class when you creat a new class.*/
/*
class Animal{
	public :
		void animalsound(){
			cout<<"The animal make sound : \n"<<endl;
		}
};
class dog : public Animal{
	public:
	void animalsound(){
		cout<<"The dog  is says : bow bow bow"<<endl;
	}
};
class pig : public Animal{
	public:
	void animalsound(){
	cout<<"The pig is says : weee weee weee"<<endl;
   }
}; 
int main(){
	Animal myanimal;
	pig mypig;
	dog mydog;
	
	myanimal.animalsound();
	mypig.animalsound();
	mydog.animalsound();
	return 0;
}
*/
/*fstream is the library allows us to work with files.Some classes include in fstream 
library.ofstream : Creates and write a file .
ifstream : reads from file .
fstream : A combination of the if stream and of stream:creates ,read and write to file .
Note : that we also use the while loop together with the getline() function (which belongs to 
ifstream class)to read the file line by line ,and to print the content of the file. */
/*
#include<fstream>
int main(){
	ofstream
	myfile("lovebites.text");
	myfile<<"file can be tricky,but it is the fun enough :";
	myfile.close();
	return 0;
}*/
/*
int main(){
	string firstname = "Devang";
	string lastname = " kartik";
	string fullname = firstname + lastname;
	cout<<"My name is "<<fullname;
	return 0;
}
/
/*Exception handling in c++ cosist of three keywords : try ,thow and catch:
The try statement allows you to define a block code to be tested for errors while it is being executed.
The thow keyword throws an exception when a problem  is detected,which let us creat a custem error .
The catch  statements allows you to define a block of code to be executed ,if an error occurs in the try block.
try and catch keywords come in pairs:
*/
/*
int main(){
	try{
		int age = 10;
		if(age>=18){
			cout<<"Access granted  : you are old enough .";
		}else{
			throw(age);
		}
	}
	catch(int mynum){
		cout<<"age is : "<<mynum;
	}
	return 0;
}
*/


/*
class Baseclass{
private:
	  
      	string name;
		int age;
		string adderess;
		 int mobile_no;
		 
		 public:
		 int setpartner(string w,int x, string y , int z){
		 	name=w;
		 	age=x;
		 	adderess=y;
		 	mobile_no=z;
		
	cout<<"*****************************Room mates details****************************************"<<endl;
		 	cout<<" \nPlease give me details about your partner : "<<endl;
		 	cout<<" \nSorry sir I can not tell you any thing about my partner :\n\n"
		 	    <<"Name : "<<name<<endl
		 	    <<"Age : "<<age<<endl
		 	    <<"Adderess : "<<adderess<<endl
		 	    <<"Mobile Number  : "<<mobile_no<<endl;
		 	    
		 }
		 getpartner(){
		 	return 0;
		 }
	protected:
		string cname;
		int cage;
		string cadderess;
		 long int cmobile_no;
	public:
    	float charges;
		int room_no;
	int custemer(){
cout<<"*********************************************Welcome to (FIVE)5Star Hotel***********************************************"<<endl;
		cout<<"Welcome sir : Glorious hotel of Knapur \nHow can I help you Sir .\n"<<endl;
		cout<<"I want to stay here from one Night with my Partner :\n";
		cout<<"What is the charges of room for one Night : ";
		cin>>charges;
		cout<<"what is my room_no : ";
		cin>>room_no;
		cout<<"Thank you sir ."<<endl;
cout<<"------------------------------------------------------welcome--------------------------------------------------\n";
cout<<"**********************************************Sir This is your Bill***************************************"<<endl;
	    cout<<"You deposite the money ........................."<<charges<<endl;
	    cout<<"This is your key_no ................................ 67*\n";
		cout<<"Fifth floor of the Hotel \n Yours Room Number : "<<room_no<<endl;
		return 0;
	}			
};
 class Myclass : public Baseclass{
	public:
	int counsler(){
cout<<"\n*****************************************Counsler of the hotel**********************************************"<<endl;		
		cout<<"sir can I know your name and other details."<<endl;
		cout<<"why not \n";
		cout<<"What is your name Sir : \n";
		cin>>cname;
		cout<<"How old are you Sir: \n";
		cin>>cage;
		cout<<"where are you from Sir : \n";
		cin>>cadderess;
		cout<<"what is your mobile number Sir :  \n";
		cin>>cmobile_no;
		cout<<endl<<endl;
	cout<<"-------------------------------MY Datails sir-----------------------------------------\n";
	cout<<"My name is : "<<cname<<endl;	
	cout<<"My age is : "<<cage<<endl;	
	cout<<"My Adderess is : "<<cadderess<<endl;
	cout<<"My Mobile Number is : "<<cmobile_no<<endl;
	return 0;
	}	
};
int main(){
	Myclass arrived2;
	Baseclass arrived;
    cout<<arrived.custemer();
    cout<<arrived2.counsler();
	arrived.setpartner("khushi",23,"9/50 Mali quarter,kanpur",639252242);
	cout<<arrived.getpartner();
return 0;	
}
*/


/*
#include<conio.h>
#include<string.h>
class collage{
	public:
		char name[20];
		int roll_no;
		string collage_name;	
		
};

int main(){
	collage collegue;
	collegue.roll_no=101;
	collegue.collage_name="Ragenra swroop collage of higher studies : ";
	strcpy(collegue.name,"Devang kartik");
	collage collegue1;
	collegue1.roll_no=102;
	collegue1.collage_name="vrendra swaroop collage of management studies : ";
	strcpy(collegue.name,"Rahul sankrityayn");
	
	cout<<"Student Name :"<<collegue.name<<endl<<"Student Roll_Number :"<<collegue.roll_no<<endl;
	   cout<<"Collage of the student : "<<collegue.collage_name<<endl;
	    
	    cout<<"Student Name :"<<collegue1.name<<endl<<"Student Roll_Number :"<<collegue1.roll_no<<endl;
	   cout<<"Collage of the student : "<<collegue1.collage_name<<endl;
	    return 0;
}
*/
/*
class abstractdemo{
	public:
		virtual void sum(int a,int b) = 0;
};
class absdemo : public abstractdemo{
	public:
		void sum(int a,int b){
			cout<<a+b<<endl;
		}
};
int main(){
	absdemo obj;
	obj.sum(9,7);
	return 0;
}
*/
/*
class printer{
	public:
		virtual void print_table(int num)=0;
};
class table : public printer{
	public :
		void print_table(int num){
		int i;
		for(i =1; i<=10; i++){
			cout<<num<<"*"<<i<<"="<<num*i<<endl;
		}
	}
};
int main(){
	table obj;
	obj.print_table(5);
	return 0;
}
*/
//class and object :

/*
class Room{
	private:
		double length;
		double breadth;
		double height;
	public:
		void initeData(double len,double brth,double hgt){
			length = len;
			breadth = brth;
			height = hgt;
		}
		double calculateArea(){
			return length*breadth;
		}
		double calculateVolume(){
			return length*breadth*height;
		}
};
int main(){
	Room room1;
	room1.initeData(42.5,30.8,19.2);
	cout<<"Area of the room = "<<room1.calculateArea()<<endl;
	cout<<"Volume of room = "<<room1.calculateVolume()<<endl;
	return 0;
}
*/

/*The construster is the special type of member function its called when object is created .
its has the same name as the class ,
does not have return type ,and is public:Access specifire
A construster have no parameter is called default construster.*/
/*
class Wall{
	private:
		double length;
	public:
	    Wall(){
	    	length = 10.5;
	    	cout<<"Creating a wall : "<<endl;
	    	cout<<"Length = "<<length<<endl;
		}
};
int main(){
	Wall wall1;
    return 0;
}
*/

/*
class Wall{
	private:
		double length;
		double height;
	public:
		 Wall(double len,double hgt){
		 	length = len;
		 	height = hgt;
		 }
		 
	 int CalculateArea(){
	 	return length*height;
	 }
};
int main(){
Wall wall1(10.5,8.6);
Wall wall2(8.5,6.3);
cout<<"Area of the wall1 :"<<wall1.CalculateArea()<<endl;
cout<<"Area  of the wall2 : "<<wall2.CalculateArea();
return 0;
}
*/
/*
class Room{
	private: 
	double length;
	double height;
	public:
		Room(double len,double hgt){
			length=len;
			height=hgt;
		}
		Room(Room &obj){
			length=obj.length;
			height=obj.height;
		}
	double calculateArea(){
		return length*height;
	}
};
int main(){
	Room room1(8.9,5.7);
	Room room2 = room1;
	
	cout<<"Area of the room1 : "<<room1.calculateArea()<<endl;
	cout<<"Area of the room2 : "<<room2.calculateArea()<<endl;
	return 0;
}
*/

/*
class Mobile{
	private:
		string codeNumber;
	public:
		string name;
		string model;
		double price;
		Mobile(string n,string m,double p){
			name=n;
			model=m;
			price=p;
		}
		void setcodeNumber(string str){
			codeNumber = str;
		}
		string getcodeNumber(){
			return codeNumber;
		}
		Mobile(Mobile &obj){
			name=obj.name;
			model=obj.model;
			price=obj.price;
		
		}
	void display_info(){
	cout<<"Brand of the mobile : "<<name<<endl;
	
	cout<<"Model of the mobile : "<<model<<endl;

	cout<<"Price of the mobile : "<<price<<endl;

	}
};
int main(){
Mobile mobile1("Relme pro"," Proxy 5G",26000.00);
mobile1.display_info();
return 0;
}
*/

/*
class Base;
class Derived;
class Base {
	public:
	Base(){
		cout<<"Construster isof Base is called"<<endl;
	};
	~Base(){
		cout<<"Destruster of Base is called "<<endl;
	};
	
};
class Derived : public Base{
	public:
	Derived(){
		cout<<"Destruster of Derived is called :"<<endl;
	};
	~Derived(){
	    cout<<"Destruster of Derived is called :"<<endl;	
	};
};
int main(){
	Base *pBase = new Derived();
	delete pBase;
	pBase = nullptr;
}
*/

/*
class apple{
	public:
		int roll_no;
		apple(){
			roll_no = 5;
			cout<<"Roll_no is : "<<roll_no<<endl;
		};
		~apple(){
		 roll_no=-5;
		 cout<<"Roll_no is "<<roll_no<<endl;
	 };
};
int main(){
	apple obj1;
return 0;
}
*/

/*
class Student{
	private:
		std::string name;
		int age;
	public:
		Student(std::string name,int age){
			this->name=name;
			this->age=age;
		}
		void show_data(){
			std::cout<<"Name of the student : "<<name<<endl;
			std::cout<<"Age of the student : "<<age<<endl;
		}
};
int main(){
	Student* s1 = new Student("Devang kartik",20);
	s1->show_data();
	std::cout<<"First data of student : "<<s1<<"\n\n";
	
	Student* s2 = new Student("Satyam Agnihotri",21);
	s2->show_data();

return 0;	
}*/

/*
int main(){
	char option;
	int x,y;
	cout<<"Enter the operator : +,-,/,*,=,>,<"<<endl;
	cin>>option;
	cout<<"Enter two numbers : "<<endl;
	cin>>x>>y;
	switch(option){
		    case'+':
			cout<<x<<"+"<<y<<"="<<x+y<<endl;
		    break;
			case'-':
			cout<<x<<"-"<<y<<"="<<x-y<<endl;
		    break;
		    case'*':
			cout<<x<<"*"<<y<<"="<<x*y<<endl;
		    break;
		    case'/':
			cout<<x<<"/"<<y<<"="<<x/y<<endl;
		    break;
		    case'%':
			cout<<x<<"%"<<y<<"="<<x%y<<endl;
		    break;
		    case'=':
			 if(x==y){
			 	cout<<x<<"is equal to "<<y<<endl;
		       }else{
			 	cout<<x<<" is equal not to "<<y<<endl;
			   }
		    break;
		    case'>':
		    	if(x>y){
		    		cout<<x<<" is greater than "<<y<<endl;
				}else{
					cout<<y<<" is greater than "<<x<<endl;
				}
		    break;
		    default:
		    	cout<<"Error! the operator you entered is encorrect: "<<endl;
		    	break;
	}
	return 0;
}
*/

/*This : this pointer is used to refer current object when instance 
variable and argument both are same than we use this pointer 
to diferenciate instance variable and argument.*/

/*
class Area{
	public:
		int w,h;
		Area(int w,int h){
			this->w=w;
			this->h=h;
		}
		void area(){
			cout<<"Area : "<<2*w*h;
		}
};
int main(){
	Area obj(2,3);
	obj.area();
	return 0;
}
*/
/*Friend: friend function of the class granted permision to access private and 
protected member in c++ . they are define globly outside of the class scope 
friend function not methode function of the class .
A friend function is a function  that is declared  outside of the class and access 
private and protected access specifire.*/
/*
class box{
	private: 
	int length ;
	public:
		box(){
			length=0;
		}
	friend int print = length_box();
};
int print length (box obj){
	obj.length = 10;
	return length;
}
int main(){
	box ob;
	cout<<ob.length;
	return 0;
}
*/
/*
class Box{
	public:
	double length;
	double width;

 double Volume(double length, double width){
 	return length*width;
 }
};
int main(){
	Box package;
	package.length = 2.0;
	package.width = 2.0;

	cout<<package.Volume(package.length,package.width)<<endl;	
}
*/
/*
int main(){
	string name;
	string color;
	cout<<"Please Enter your name : "<<endl;
	getline(cin,name);
	cout<<"That's a long name !"<<endl;
	cout<<"Hello!!! "<<name<<endl;
	cout<<"Nice to meet you ! "<<endl;
	cout<<"What is your favorite color ?"<<endl;
	getline(cin,color);
	cout<<" that's is the great color "<<endl;
	cout<<"Namastey!! &bye bye";
	return 0;
}
*/
/**/

/*
string arr1[20],arr2[20],arr3[20],arr4[20],arr5[20];
int total = 0,choice;
string roll_no;
void enter(){
	cout<<"How many student do you want to enter : Sir "<<endl;
	cin>>choice;
	if(total==0){
	
	total=total+choice;
	for(int i=0; i<=choice; i++){
		cout<<"\n Enter data of student : "<<i+1<<endl<<endl;
		cout<<"Enter student name : Sir "<<endl;
		cin>>arr1[i];
		cout<<"Enter the roll no. : sir "<<endl;
		cin>>arr2[i];
		cout<<"Enter course : Sir "<<endl;
		cin>>arr3[i];
		cout<<"Enter the class : Sir "<<endl;
		cin>>arr4[i];
		cout<<"Enter contact : Sir "<<endl;
		cin>>arr5[i];
		
	}
 }else{
 		for(int i=total; i<=total+choice; i++){
		cout<<"\n Enter data of student : "<<i+1<<endl<<endl;
		cout<<"Enter student name : Sir "<<endl;
		cin>>arr1[i];
		cout<<"Enter the roll no. : sir "<<endl;
		cin>>arr2[i];
		cout<<"Enter course : Sir "<<endl;
		cin>>arr3[i];
		cout<<"Enter the class : Sir "<<endl;
		cin>>arr4[i];
		cout<<"Enter contact : Sir "<<endl;
		cin>>arr5[i];
		
	}
	total=total+choice;
 }
}
void show_data(){
	for(int i=0; i<total; i++){
		cout<<"Data of student :"<<i+1<<endl<<endl;
		cout<<"Name : "<<arr1[i]<<endl;
		cout<<"Roll_no : "<<arr2[i]<<endl;
		cout<<"Course : "<<arr3[i]<<endl;
		cout<<"Class : "<<arr4[i]<<endl;
		cout<<"Contact : "<<arr5[i]<<endl;
	
    }
}
void search(){

	cout<<"Enter roll_no of the student " ;
	cin>>roll_no;
	for(int i=0; i<total;i++){
		if(roll_no == arr2[i]){
			
			cout<<"Data of student :"<<i+1<<endl<<endl;
	    	cout<<"Name : "<<arr1[i]<<endl;
	    	cout<<"Roll_no : "<<arr2[i]<<endl;
		    cout<<"Course : "<<arr3[i]<<endl;
	    	cout<<"Class : "<<arr4[i]<<endl;
	    	cout<<"Contact : "<<arr5[i]<<endl;
		
		
		}
	}
}
void update(){
		cout<<"Enter roll_no of the student " ;
	cin>>roll_no;
	for(int i=0; i<total;i++){
		if(roll_no == arr2[i]){
			cout<<"previous data "<<endl<<endl;
			cout<<"Data of student :"<<i+1<<endl<<endl;
	    	cout<<"Name : "<<arr1[i]<<endl;
	    	cout<<"Roll_no : "<<arr2[i]<<endl;
		    cout<<"Course : "<<arr3[i]<<endl;
	    	cout<<"Class : "<<arr4[i]<<endl;
	    	cout<<"Contact : "<<arr5[i]<<endl;
			cout<<"\n Enter new data :"<<endl;
			cout<<"\n Enter name : ";
			cin>>arr1[i];
					cout<<"Enter the roll no. : sir "<<endl;
		cin>>arr2[i];
		cout<<"Enter course : Sir "<<endl;
		cin>>arr3[i];
		cout<<"Enter the class : Sir "<<endl;
		cin>>arr4[i];
		cout<<"Enter contact : Sir "<<endl;
		cin>>arr5[i];
		}
	}
}
void delete_record(){
	int a;
	cout<<"press 1 to delete full record : "<<endl;
	cout<<"press to delete specific record :"<<endl;
	cin>>a;
	if(a==1){
		total=0;
		cout<<"All record is deleted"<<endl;
	}else if(a==2){
		cout<<"Enter the rool_no :which data you want to delete :"<<endl;
		cin>>roll_no;
		for(int i=0; i<total; i++){
			if(roll_no==arr2[i]){
				for(int j=i; j<total; j++){
					
					arr1[j]=arr1[j+1];
					arr2[j]=arr2[j+1];
					arr3[j]=arr3[j+1];
					arr4[j]=arr4[j+1];
					arr5[j]=arr5[j+1];
				}
				total--;
				cout<<"your required record deleted...!! : ";
			}
		}
	}
}
void exit(){
}
main(){
cout<<"*********************************Vrendre Swroop Collage of management studies Kanpur***********************************************************"<<endl;
cout<<"|||||||||||||||||||||||||||||||||||||||||||STUDENT MANAGEMENT SYSTEAM||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"<<endl<<endl;
while(true){
	cout<<"press 1 to enter the data "<<endl;
	cout<<"press 2 to show the data "<<endl;
	cout<<"press 3 to search data "<<endl;
	cout<<"press 4 to update the data"<<endl;
	cout<<"press 5 to delete the data"<<endl;
	cout<<"press 6 to exit "<<endl<<endl;
	
	cout<<"what you want to press !!!!!!!!! "<<endl;
	int value;
	cin>>value;
	switch(value){
		        case 1 :
			enter();
			break;
				case 2 :
			show_data();
			break;
				case 3 :
			search();
			break;
				case 4 :
			 update();
			break;
				case 5 :
			 delete_record();
			break;
				case 6 :
			 exit();
			break;
			default:
				cout<<"Error! please press correct value : ";
				break;
       	}
    }
 return 0;
}
*/
/*Encapsulation : */
/*
class rectangle{
	private:
		int height;
		int width;
		public:
			int area();
			int perimeter(){
				return 2*(height+width);
			}
		 setheight(int x){
			height=x;
		}
		int getheight(){
			return height;
		}
		 setwidth(int y){
			width=y;
		}
		int getwidth(){
			return width;
		}
		
};
int rectangle::area(){
	return height*width;
}
int main(){
	rectangle x;
	x.setheight(17);
	x.setwidth(7);
	cout<<"perimeter : "<<x.perimeter()<<endl;
	cout<<"Area      : "<<x.area();
	return 0;
}
*/

/*polymorphism*/
/*
class Animal{
	public:
		void speed(){
			cout<<"who is more faster : ? "<<endl;
		}
};
class cheeta : public Animal{
	public:
		void speed(){
			cout<<"cheeta is more faster :Earth  "<<endl;
		}
};
class dolfine : public Animal{
	public:
		void speed(){
			cout<<"dolfine is most faster : water "<<endl;
		}
};
class baaj : public Animal{
	public:
		void speed(){
			cout<<"baaj is more faster :    air "<<endl;
		}
};
int main(){
Animal a;
baaj b;
cheeta c;
dolfine d;
a.speed();
b.speed();
c.speed();
d.speed();
return 0;
}
*/
/*Abstraction*/
/*
class Employee{
	protected:
		int wage;
		int extra;
		public: 
		virtual int wagePayment() = 0;
		virtual int rise()=0;
};
class Engineer : public Employee{
	public:
	 int wagePayment(){
		wage=7000;
		cout<<"Engineer wage is 7000$ "<<endl;
		return wage;
	}
	int rise(){
		wage =7000;
		extra=875;
		int x = this->wage+this->extra;
		return x; 
	}
};
int main(){
	Engineer employee1;
	employee1.wagePayment();
	employee1.rise();
	return 0;
}
*/

/*

#include<string.h>
#include<stdlib.h>
class Library{
	public:
	int id; 
	string name;
    string author;
     string student;   //	char student[100];
	int price;
	int pages;
};
int main(){
cout<<"||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"<<endl;
cout<<">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>Library Management sYstem<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<"<<endl;
cout<<"******************************************************************************************************************"<<endl;
	Library lib[20];
     int input;

	while(true){
		cout<<"\n\nEnter 1 to Input Details id ,name ,author ,student ,price page : "<<endl;
		cout<<"Enter 2 to Display the details : "<<endl;
		cout<<"Enter 3 to Exit the program :"<<endl<<endl;
		
		cout<<"Enter any option wihch is present above : "<<endl;
		cin>>input;
	int count=0;
		switch(input){
			case 1:
				    cout<<"Enter book id : Sir "<<endl;
			   	cin>>lib[count].id;
				    cout<<"Enter the book name : Sir "<<endl;
				cin>>lib[count].name;
				//cin.getline(lib[count].name,100);
					cout<<"Enter the author name : Sir "<<endl;
			       	cin>>lib[count].author;
				//cin.getline(lib[count].author,100);
					cout<<"Enter the student name : Sir "<<endl;
				cin>>lib[count].student;
				//cin.getline(lib[count].student,100);
				//cin>>student;
					cout<<"Enter the amount of book : Sir "<<endl;
				cin>>lib[count].price;
					cout<<"Enter the number of pages : Sir "<<endl;
				cin>>lib[count].pages;
				count++;
				
				break;
				case 2:
						cout<<"Book Id : "<<lib[count].id<<endl;
						cout<<"Book name : "<<lib[count].name<<endl;
						cout<<"Author name :"<<lib[count].author<<endl;
						cout<<"Book Student : "<<lib[count].student<<endl;
						cout<<"Book price : "<<lib[count].price<<endl;
						cout<<"Book pages : "<<lib[count].pages<<endl;
				
				break;
			case 3:
				exit(0);
				break;
			default:
				cout<<"Error! You have entered wrong value please try again"<<endl;
			input++;		
		}
	}	
}
*/

/*
#include<stdio.h>
#include<conio.h>
class Bank{
	public:
		char name[100],address[100];
		string type;
		int balance,rupees;
		void Open_account();
		void deposite_money();
		void withdraw_money();
		void display_account();
};
void Bank :: Open_account(){
	cout<<"Enter your full name :"<<endl;
	cin.ignore();   //clear perfomence
	cin.getline(name,100);
	cout<<"Enter your  address :"<<endl;
	cin.ignore();
	cin.getline(address,100);
	cout<<"Which type of account to open saving or current : "<<endl;
	cin>>type;
	cout<<"Enter amount for deposite : "<<endl;
	cin>>balance;
	cout<<"your account has  been created : "<<endl;
}
void Bank :: deposite_money(){
	cout<<"How much amount you want to deposite : "<<endl;
	cin>>rupees;
	balance += rupees;
	cout<<"Current balance in your account : "<<balance<<endl;	
}
void Bank :: display_account(){
	cout<<"Your full name : "<<name<<endl;
	cout<<"Your Address : "<<address<<endl;
	cout<<"Type of account that you open : "<<type<<endl;
	cout<<"Your deposite amount  : "<<balance<<endl;
	
}
void Bank :: withdraw_money(){
	float amount;
	cout<<"Enter amount to withdraw : "<<endl;
	cin>>amount;
	balance -= amount;
	cout<<"Current amount in your account :"<<balance;
	
}
int main(){
	Bank obj;
	int ch;
	do{
	cout<<"1) Open account \n";
	cout<<"2) Deposite money \n";
	cout<<"3) Withdraw money \n";
	cout<<"4) Display account \n";
	cout<<"5) Exit"<<endl<<endl;
	cout<<"Select any option on the above"<<endl;
	cin>>ch;
	
	switch(ch){
		case 1:
		    cout<<"\n1) Open account :";
		    obj.Open_account();
		break;
		case 2:
	    	cout<<"2)  Deposite money \n ";
	        obj.deposite_money();
	    break;
	    case 3:
	    	cout<<"3)  Withdraw money \n ";
	        obj.withdraw_money();
	    break;
	    case 4:
	    	cout<<"4)  Display account :  \n ";
	    	obj.display_account();
	    break;
	    case 5 :
	    	if(ch=5){
	    		exit(1);
			}
	    default:
	    	cout<<"Error! Enter the correct number try again !!!!!!!!!!";
	}
  }while(true);
  return 0;
}
*/

/*
class person{
	private:
		string name;
		
	public:
	
		person(string person_name){
			name=person_name;
		}
		
		string setName(string person_name){
			name=person_name;
		}
		
		     string  getName(){
			return name;
		}
};	
int main(){
	person setName("Devang kartik");
	cout<<"My name is : "<<person getName();
	return 0;
}
*/
/*
class hero{
	//properties
	//data members
	public:
	char level;
	string helth;
};
int main(){
	hero devang;
    devang.helth = "Good";
    devang.level = 'a';
	cout<<"devang health :"<<devang.helth<<endl;
	cout<<"level of devang : "<<devang.level;
	return 0;
}
*/

/*
class Student{
	private:
		std::string name; 
		int* age;
		public:
			Student(){
				age = new int;
			}
			void newStudent(std::string name,int age){
				this->name = name ;
				*this -> age = age; 
			}
			void show_data(){
				std::cout<<"Name : "<<name<<std::endl;
				 std::cout<<"Age : "<<age<<std::endl;
			}
			Student(Student &other){
				name = other.name;
				age = new int;
				*age = *(other.age);
			}
			~Student(){
				delete age;
				std::cout<<std::endl;
				std::cout<<"Destruster is called : "<<endl;
			}
};
int main(){
	Student student_one;
	student_one.newStudent("devang",19);
	student_one.show_data();
	std::cout<<"Memory adderess of student One : "<<&student_one<<std::endl;
	
	std::cout<<std::endl;
	Student student_two = student_one;
	student_two.show_data();
	std::cout<<"Memory addess of Student two : "<<&student_two<<std::endl;
	return 0;
}
*/

/*pointers in c++ : in memory have a symble table which have follow mapping.
stre the address of another variable.ptr is the pointer of double.
 */
 /*
 int main(){
 	int num = 5;
 //	int *ptr = &num;
 //	cout<<"Address of number : "<<ptr<<endl;
 //	cout<<"number : "<<*ptr<<endl;
 	
 //	cout<<"number : "<<num<<endl;
//	cout<<"Adderss of num"<<&num<<endl;	
	
//	 cout<<"size of integer : "<<sizeof(num)<<endl;
//	 cout<<"size of pointer : "<<sizeof(ptr)<<endl;
	  
	return 0;
	
 }
*/
/*
	int *big(int &,int &);
int main(){
int a,b;
cout<<"Enter two integers \n";
cin>>a>>b;
int *c=big(a,b);
cout<<"the bigger value is : "<<*c<<"\n";
return 0;
}
int *big(int &x,int &y){
	if(x>y){
		return (&x);
	}else{
		return (&y);
	}	
}
*/


/*
int main(){
	cout<<"                        *WELCOE TO INDIAN CRICKET CLUB*                                  "<<endl;
cout<<"||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"<<endl;
cout<<"::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
string Ind[100];
string Pak[100];
int num;
cout<<"Enter the player numbers in both teams:"<<endl;
cin>>num;
cout<<"Enter the indian player :"<<endl; 
for(int i=0; i<num; i++){
	cin>>Ind[i];
}
cout<<"Enter other country player : "<<endl;
for(int i=0; i<num; i++){
	cin>>Pak[i];
}
cout<<"Both team player : "<<endl;
for(int i=0; i<num; i++){
	cout<<Ind[i]<<"           :             "<<Pak[i]<<endl;
	}

}
*/
/*recursion : f(n):big problem =n*f(n-1)small problem=factorial(n-1);
big problem =n*small problem
 ,f(n)=2*f(n-1); we want to need a base caese  or a recursive
relation  of the program.
*/
/*
int factorial(int x){
     
	if(x==0){
		return 1;
	}
	if(x>0){
	int choti = factorial(x-1);
	int badi = x*choti;
	return badi; 
   }
}
int main(){
int num;
cout<<"Enter the number :"<<endl;
cin>>num;
int factro= factorial(num);	
cout<<"factorial of the number : "<<factro<<endl;
return 0;
}
*/

/*
//counting with the use of recursion  

int print(int x){
	if(x==0){
		return 0;
}
    //cout<<x<<endl;
	print(x-1);
	cout<<x<<endl;
}
int main(){
	int number;
	cout<<"Enter the number : "<<endl;
	cin>>number;
	cout<<"\n\n";
     print(number);
     return 0;
} 
*/

/*
int Solution(int num){
    if(num==0){
    	return num;
	}
	if(num==1){
    	return num;	 
  }else{
  	return  Solution(num-1)+Solution(num-2);
  }
  
}
int main(){
	int number,i;
	cout<<"Enter the number  for fibo series :"<<endl;
	cin>>number;
	cout<<"\n\n";
	for( i=0; i<number; i++){
		cout<<Solution(i)<<endl;
	}
 
	return 0;
}
*/

/*
class Solution{
	public:
		int fib(int num){
			//base case
			if(num==0){
				return 0;
			}
			if(num==1){
				return 1;
				
			return fib(num-1)+fib(num-2);
		
			}
			
		}
};
*/

/*
int count(int num){
	if(num==0){
	return 0;
	}
    //	cout<<num<<endl;
	count(num-1);
    cout<<num<<endl;
  return num;
}
int main(){
	int num;
	cout<<"Enter the number : "<<endl;
	cin>>num;
	cout<<"\n\n";
	count(num);
	return 0;
}
*/
/*
int addNumber(int num){
	if(num == 0){
		return 0;
	}
	
return	num+addNumber(num-1);
		
}
int main(){
	int num;
	cout<<"Enter the number : ";
	cin>>num;
  int ans = addNumber(num);
	cout<<"add of natural number : "<<ans<<endl;
	return 0;
}
*/
/*
bool isSorted(int *arr,int size){
	if(size==0||size==1){
		return true;
	}
	if(arr[0]>arr[1]){
		return false;
	}else{	
 bool reaminingPart	= isSorted(arr+1 , size-1);
 return reaminingPart;
 }	
}
int main(){
	int arr[5] = {34,47,62,79,81};
	int size = 5;
 bool ans =	isSorted( arr, size);
    if(ans){
    	cout<<"array is sorted : "<<endl;
    }else{
	    cout<<"array is not sorted :"<<endl;
   }	
  return 0;	
}
*/

int facto(int number){
	if(number==1){
		return 1;
	}else{
     return (number*facto(number-1));
  }
 
}

int main (){
	int num;
	cout<<"Enter the number : "<<endl;
	cin>>num;
	cout<<"\n\n";
 int ans =  facto(num);
	cout<<ans<<endl;
	return 0;
}
