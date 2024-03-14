#include<iostream>
using namespace std;

/*
#include<conio.h>
#include<string.h>

class Bazar{
	public:
	char type[20];
	char product[20];
	int Qty;
	float price;
	Bazar(){
		strcpy(type,"Electronic");
		strcpy(product,"calculator");
		Qty=10;
		price=225;
	}
	public:
		void disp(){
			std::cout<<type<<"_"<<product<<" : "<<Qty<<" @ "<<price;

		}
};
int main()
{
    Bazar B;
    B.disp();
getch();
}
*/

void print(int arr[],int n){
cout<<"Size of array is : "<<endl;
for(int i=0; i<5; i++){
  cout<<arr[i]<<" ";
}cout<<endl;
}
bool linearSearch(int arr[], int size ,int key){
	if(size==0){
		return false;
	}
	if(arr[0]==key){
	 return true;	
	}else{
		bool remainingpart = linearSearch(arr+1,size-1,key);
		return remainingpart;
	}
}
int main(){
	int arr[5] = {23,45,67,78,84};
	int size=5;
	int key=85;
	
	bool ans = linearSearch(arr,size,key);
	if(ans){
		cout<<ans<<" : "<<"present in this array  ";
	}else{
		cout<<ans<<" : "<<"not present in this array  ";
	}
	return 0;
}


/*
int sumofAll(int *arr , int size){
	if(size==0){
		return 0;
	}
	if(size==1){
	   return arr[0];	}
	   else{
	int sumAll =+ sumofAll(arr+1,size-1);
    	int total  = arr[0] + sumAll;
	return total;
	
	}
}
int main(){
	int arr[5] = {23,43,56,12,35};
	int size = 5;
	
	int ans = sumofAll(arr,size);
	cout<<"sum of all array element : "<<ans;
	return 0;
}
*/

