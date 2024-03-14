 #include<stdio.h>
 /*
void fun(){
 	auto int a = 15;
 	++a;
 	printf("  %d", a);
 }
 int main(){
 	fun();
 	fun();
 	fun();
 	return 0;
 }
 */
/* 
int main()
{
	int a=10,b=20;
	{
	    int a=30, c=40;
	    printf(" %d %d %d",a,b,c);
	    {
	    	int b=60,d=70;
	    	printf(" %d %d %d %d",a,b,c,d);
		}
	
	}
	
	return 0;
} 
*/
/*
void fun(){
 	static int a = 15;  //static is not reinicilize
 	++a;
 	printf("  %d", a);
 }
 int main(){
 	fun();
 	fun();
 	fun();
 	return 0;
 }
 */
 /*
 int f(int n)
 {
 	static int i=1;
 	if(n>=5)
	 return n;
	n=n+i;
   return f(n);
 }
 */
 /*
 int main(void)
 {
 	int x=5 ,y=2;
 	float p,q;
 	p=x/y;
 	printf("p=%f\n",p);
 	q=(float)x/y;
 	printf("q=%f\n",q);
 	return 0;
 }
 */
 /*
 int main(void)
 {
 	int x,y,quo,rem;
 	printf("Enters two number : ");
 	scanf("%d%d",&x,&y);
 	if(y==0){
 		printf("divide by zero eror : " );
	 }else{
	 	rem=x%y;
	 	quo=x/y;
	 	printf("quotient=%d reminder=%d/n",quo,rem);
	 }
	 return 0;
 }
 */
 /*
 int main()
 {
 	int num; 
 	printf("Enter the number");
 	scanf("%d",&num);
 	for(int i=1; i<=num; i++){
 		for(int j=1; j<=i; j++){
 			printf("*");
		 }
		printf("\n"); 
	 }
  return 0;
}
*/
/*
int main()
{
	int n=5;
	for(int i=n; i>=1; i--){
		for(int j=1; j<=i; j++){
			printf("%d",j);
		}
	  printf("\n");
	}
	return 0;
}
*/
/*
int main()
{
	int num;
	printf("Enter the number : ");
	scanf("%d",&num);
  for(int i=1; i<=num; i++){
  	for(int j=1;j<=(num*1)-i+1; j++){
  		printf(" *");
	  }
  	printf("\n");
  }
  return 0;
}
*/
/*
int main(){
	int num;
	printf("Enter the number : ");
	scanf("%d",&num);
	for(int i=1; i<=num; i++){
		for(int j=1; j<=num; j++){
	    	printf("%d",num-j);   //(num-j),j,i
		}
		printf("\n");
	}
}
*/
/* 
int main(){
	int num;
printf("Enter the number : ");
 scanf("%d",&num);
  for(int i=1; i<=num; i++){
  	for(int j=1; j<=num-i; j++){
  		printf(" ");
	  }
	for(int k=1; k<=(2*i)-1; k++){
		printf("*");
	}
	printf("\n");
}
//int main(){
//int num;
//printf("Enter the number :");
//scanf("%d",&num);
  for(int i=1; i<=num; i++){
  	for(int j=1; j<=i-1; j++){
  		printf(" ");
	  }
	for(int k=1; k<=num*2-(2*i-1); k++ ){
		printf("*");
	}
	printf("\n");
   }
   return 0; 
 }
 */
 /*
 int main(){
 	int num;
 	printf("Enter the number : ");
 	scanf("%d",&num);
 	for(int i=1; i<=num; i++){
 		for(int j=1; j<=num; j++){
 			if(i==j||num==i+j){
 				printf("*");
			}else{
				printf(" ");
			}
		 }
		 printf("\n");
	 }
 }

*/
/*
int main(){
	int num;
	printf("Enter the number : ");
	scanf("%d",&num);
	for(int i=1; i<=num; i++){
		for(int j=1; j<=i; j++){
			printf("*");
		}
		printf("\n");
	}
	for(int i=1; i<=num; i++){
		for(int j=1; j<=num-i; j++){
			printf("*");
		}
		printf("\n");
	}
}
*/
/*
int main(){
	int num;
	printf("Enetr the number : ");
	scanf("%d",&num);
	for(int i=1; i<=num; i++){
		for(int j=1; j<=i; j++){
			printf("*");
		}
		for(int k=1; k<=num*2-(2*i-1); k++){
			printf(" ");
		}
		for(int l=1; l<=num; l++){
			for(int m=1; m<num-i; m++){
				printf(" ");
			}
			for(int n=1; n<=i; n++){
				printf("*");
			}
			printf("\n");
		}
		printf("\n");
	}
	
}*/
/*
int main(){
	int n; 
	printf("Enter the number : ");
	scanf("%d",&n);
	for(int i=1; i<=n; i++){
		for(int j=1; j<=i; j++){
			printf("*");
		}
		for(int k=1; k<=n*2-(2*i-1); k++){
			printf("a");
		}
		for(int j=1; j<=i; j++){
			printf("*");
		}
		printf("\n");
	}
}
*/
/*
int main (){
int num;
printf("Enter the number : ");
scanf("%d",&num);
for(int i=i; i<=num; i++){
	for(int j=1; j<=i-1; j++){
		printf(" ");
	}
	for(int k=1; k<=num-1+1; k++){
		printf("*");
	   }
	}
	printf("\n");
	return 0;
  }
*/

/*
int main(){
	
	int n;
	char ch ='A';
	printf("Enter the number :");
	scanf("%d",&n);
		for(int i=1; i<n*2; i++){
			printf("%c",ch);
			ch++;
		}
		printf("\n");
	for(int i=1; i<=n; i++){
	ch='A';
		for(int j=1; j<=n-i; j++){
			printf("%c",ch);
			ch++;
		}
		for(int k=1; k<=2*i-1; k++){
			printf(" ");
		}
		ch='A';
		for(int j=1; j<=n-i; j++){
			printf("%c",ch);
			ch++;
		}
		printf("\n");
	}
return 0;
}
*/

/*
int main(){
	int num;
  printf("Enter the number : ");
  scanf("%d",&num);
  for(int i=1; i<=num; i++){
  	for(int j=1; j<=i-1; j++){
  		printf(" ");
	  }
	  	for(int j=1; j<=num-i+1; j++){
  		printf("*");
	  }
	  printf("\n");
   }
}
*/

/*
int main(){
	int num;
	printf("Enter the number : ");
	scanf("%d",&num);
	for(int i=1; i<=num; i++){
		for(int j=1; j<=i; j++){
			if(i==num||j==1||i==j){
				printf("*");
			}else{
				printf(" ");
			}
		}
		printf("\n");
	}
}
*/
/*
 int main(){
 	int num ;
 	printf("Enetr the number : ");
 	scanf("%d",&num);
 	for(int i=1; i<=num; i++){
 		for(int j=1; j<=num; j++){
 			if(i==num||j==num||i+j==num+1){
 				printf("*");
			 }else{
			 	printf(" ");
			 }
		 }
		 printf("\n");
	 }
 }
 */
 
 /*
 int main(){
    	int num;
    printf("Enter the number : ");
 	scanf("%d",&num);
 	for(int i=1; i<=num; i++){
 		for(int j=1; j<=i; j++){
 			printf(" ");
		 }
		 for(int k=1; k<=num*2-(2*i-1); k++){
		 	printf("%d",k);
		 }
		 printf("\n");	
	 }
}
 */
 
 /*
 int sqr(int x);
 int cube(int x);
 int func(int n);
 int main(void)
 {
 	int n=5;
 	printf("%d",func(n));
 	return 0;
 }
 	int sqr(int x){
 		return x*x;
	 }
	int cube(int x){
		return x*x*x;
	}
	int func(int n){
		return n+sqr(n-2)+cube(n-3);
	}
*/ 	
/*Life is like a station .crowed is too much but nobody own.....
 COMBACK kal nhi bhuloge to kal kaise banaaoge...
 akele khade hone ki sahas rakho chahe puri kayanat aapke virodh me kyo na ho...
 baat sirph najariye ka hai "kaphi akela hu " "aakela hi kaphi hu " ...
 peace of mind"ab tabiyat phale jaisi nhi rhi galtiya na bhi ho to maan leta hu"...
 jalaaoo vo samaa jise aadhi bughha na ske bno voo chehara jise koi mita na ske...
 tashli se pada hota to samagh me aa jaate kuchh panne bina pade hi palat diye
 hoge tumne...
 itna aashan nhi hai aapne dang se jindgi gina apano ko bhi khatkane lagate hai
 jab hum aapne liye jine lagte hai....
 */
 /*
int main(){
  int n; 
  printf("Enter the number : ");
  scanf("%d",&n);
  int arr[n];
  for(int i=0; i<n; i++){
  	scanf("%d",&arr[i]);
  }
 for(int i=0; i<n; i++){
 	for(int k=0; k<arr[i]; k++){
 		printf("*");
	 }
	 printf("\n");
 }
}
*/

//Dynamic memory allocation 
/*
int main(){
	int i = 5;
	int &j = i;
	i++;
	printf("%d",i);
	j++;
	printf("%d",j);
}
*/

/*A file is a sequence of bytes on th edisk where a related data store.
we give the path of the  file in the  program then file is open and we are update 
it . closed () function is done permanent store(disk) of the store value.
Some function which is used in c programming fopen(),fprintf(),
 fscanf(), fputc(),fgetc(),fclose(),fputw(),fgetw(),ftell(),rewind()*
 fopen os a c library function used to open thexisting file or creat a new 
 file as well as  creating a file . 
 FILE *fopen(const char *filename/filepath,const char *mode)
 metadata = data about data. some mode of file if we work on binary file 
 than modes are rb,wb+, ab otherwise r,w,w+,a,a+.
 the library function fclose(FILE *fp) close the file if we are not used fclosed
 it may lead to loss of data 
 int  fclose(FILE *fp);
 this methode is return zero if the strea is successfully store if fail than EOF is 
 returned .*/
 
/* 
 int main(){
 	FILE *fp;
 	fp=fopen("file.text","r");
 	return 0;
 }
 */
 /*
 int main(){
 	FILE *fp;
 	fp = fopen("feeling.txt","w");
 	fprintf(fp,"%s","welcome to gate smester");
 	fclose(fp);
 	return 0;
 }
 */
 
 /*
 int main(){
 	int num;
 	printf("Enter the number : ");
 	scanf("%d",&num);
	 	for(int i=1; i<=num; i++){
 		printf("%d\n",i);
	 }
 }
*/
/*
 int main(){
 	int a,b;
printf("Enter the numbers : ");	
scanf("%d%d",&a,&b);
printf("before swpping two numbers \n a = %d  b = %d",a,b) ;
     a = a + b;
     b = a - b;
	 a = a - b;
printf("\nafter swapping two number \n a = %d  b = %d",a,b); 
 }*/
 /*
  int main(){
  	int num;
  	printf("print table just for fun");
  	scanf("%d",&num);
  	for(int i=1; i<=num; i++){
  		for(int j=1; j<=10; j++){
  		       printf("%d\t",i*j);
		  }
		  printf("\n");
	  }
  }
  */
  
/*
  	int check(int a,int b){
  		if(a>b){
  			return a;
  		}
  		else{
  			return b;
  		}
	}
int main(){
	int x,y;
	printf("Enter the two numbers :");
	scanf("%d%d",&x,&y);
	int check(x,y);
	printf("%d is greater than %d ",x,y);
}
*/
/*
int checkout(int x,int y, int z){
	if(x>y){
		if(x>z){
			return x;
		}else{
			return z;
		}
	}else{
		if(y>z){
			return y;
		}else{
			return z;
		}
	}
}

int main(){
	int a,b,c;
	printf("Enter the first number :");
	scanf("%d",&a);
	printf("Enter second number : ");
	scanf("%d",&b);
	printf("Enter third number : ");
	scanf("%d",&c);
	
	int find = checkout(a,b,c);
	
	printf ("all amigth %d",find);
}
*/
/* this is the ATM project ocn C language */
/*
int main(){
	float x,y;
	char ch;
	printf("Enter your initial amount\n");
	scanf("%f",&x);
	printf("Enter\nc for credit\nd for debit\nb for balance\n");
	scanf("\n%c",&ch);
	switch(ch){
		case 'c':
			printf("Enter credit amount\n");
			scanf("%f",&y);
			x=x+y;
			printf("New amount is %f",x);
			break;
			case 'd':
				printf("Enter your debit amount\n");
				scanf("%f",&y);
				if(x>=y){
	    		x=x-y;
				printf("new amount is %f : ",x);
			}else{
				printf("insufficient amount in your account : ");
			}
			break;
			case 'b':
				printf("amount in your account = %f",x);
				break;
			default: 
			printf("chose correct option in above given up");
	}
}
*/
/*1. Algorithm is the step by step approach to solve a particular problem. 
it gives a crisp solution. 
it can be understood by nontecnical people as well 
their can be multiple possible algorithm to solve a given problem.
 there are different type of algorithm analysis 
 1  Best case.
 2  Average case.
 3  worst case.
 TIME COMPLEXITY : it determines the total number of unit operation to be undertaken
 solve a particular problem.
 unit operation is an operation that is independent and can not be broken down 
 in simpler operation.
 it is indepedent of artitecture .
 SPACE COMPLEXITY : tit determines the total space to be allocated in order to solve a 
 particular problem.
 it is the extra memory that an algorithm need to its impletion .
 it involves the memory of computer it is low priority criteria in optimal 
 algorithm selection.
*/
/*
int g;                //global variable
Q(){
	int a;
	printf("world is beautiful :\n ");
}
p(){
	int x;
	printf("love is beutiful\n");
	Q();
}
int main(){
	int static k;
	p();
	printf("mother is the sign of love :\n ");	
}
*/
/* the name "malloc" is stands for "memory allocation" syntax is 
 void *malloc(sizeof());*/
/*
int main(){
	int num;
	int rows,cols;
	char ch;
	printf("Enter the rows number : ");
	scanf("%d",&num);
	rows=1;
	while(rows<=num){
		cols=1;
		while(cols<=rows){
			cols++;
			printf("%d",rows);
		}
		rows++;
		printf("\n");
	}
} 
 */
 /*
 int main(){
 int num ;
 printf("Enter the number : ");
 scanf("%d",&num);
 int i=1;
 do{
 	int j=1;
 	do{
 	   	printf("*");
 	   	j++;
	 }while(j<=i);
 printf("\n");
 i++;
 }while(i<=num);
return 0;  
*/
/*
int main(){
	int num;
	printf("Enter the number :");
		scanf("%d",&num);
		int sp = 0;
		int st = num;
	for(int i=1; i<=num; i++){
		for(int j=1; j<=sp; j++){
			printf(" ");
         }
			for(int j=1; j<=st; j++){
			printf("*");
		}
		sp++;
		st--;
		printf("\n");
	}
}
 */
 /*
 struct student
 {
 	char name[20];
 	int rollno;
 	int marks;
 };
  int main(){
  struct student stu={"Devangkartik" ,25,68};
  struct student *ptr=&stu;
  printf("Name   - %s\n", ptr->name);
  printf("Rollno   - %d\n", ptr->rollno);
  printf("Marks   - %d\n", ptr->marks);
  return 0;
  }*/
  
 /* 
  struct student{
  	char name[20];
  	int rollno;
  	int marks;
  	int age;
  };
    void display(struct student);
  int main(){
  	struct student stud1={"Devangkartik",16,95,20};
  	struct student stud2={"Suryavanshi",20,80,21};
	 display(stud1) ;
	 display(stud2) ;
	 return 0;
  } 
  void display(struct student stud){
  	printf("Name   -  %s\n",stud.name);
  	printf("RollNo.    - %d\n",stud.rollno);
  	printf("Marks       -%d\n",stud.marks);
  	printf(" Age       - %d\n",stud.age);
  }*/
  /*
  struct employee{
  	char name[20];
  	char id[10];
  	int salary;
  };
  int main(){
  	 struct employee emp={"Deva321","indian",9000};
  	 printf("Name    - %s\n",emp.name);
  	 printf("Nationality     - %s\n",emp.id);
  	 printf("salary   -  %d\n",emp.salary);
  	 return 0;
  }*/
  
 /*
 int main(){
 int n;
 printf ("Enter the number : ");
 scanf("%d",&n); 
 for(int i=0; i<=n; i++){
 	for(int k=n; k>=i; k--){
 		printf(" ");
	 }
	for(int j=1; j<=i; j++){
		printf("* ");
	}
	printf("\n");
  }
 } 
 */
 /*
 struct student{
 	char name[20];
 	int rollno;
 	int marks;
 };
 void display(struct student);
 void dec_marks(struct student stuarr[]);
 int main(){
 	int i;
 	struct student stuarr[9]={
 		{"devang",16,87},{"kaveri",1,84},{"kanchani",2,87},
 		{"jaiswal",18,82},{"ilma",8,86},{"vansh",4,80},
 		{"Aryan",20,80},{"parthna",7,88},{"samar",10,81}
 	};
 	void dec_marks(struct student stuarr[]);
 		for(i=0; i<9; i++){
 			display(stuarr[i]);	
		 }	
	return 0;
 }
 void dec_marks(struct student stuarr[])
 {
 	int i;
 	for(i=0; i<9; i++){
 		stuarr[i].marks=stuarr[i].marks-10;
	 }
 }
 void display(struct student stu){
 	printf("Name - %s\n",stu.name);
 	printf("RollNO  -%d\n",stu.rollno);
 	printf("Marks   -%d\n",stu.marks);
 }
 */
 /*
 int square(int x){
 	return x*x;
 }
 int main(){
 	int num;
 	printf("Enter the number " );
 	scanf("%d",&num);
   int	s=square(num++);
 	printf("Square  = %d",s);
 	return 0;
 }*/
/* 
 int cube(int a){
 	return a*a*a;
 }
 int main(){
 	int a = 5;
 	int c = cube(a) ;
 	printf("cube  = %d",c);
 }
 */
 /*
 int main(){
 	char name[10];
 	int age=20;
 	float salary=26000.0;
 	char str[30]="Devangkartik ";
 	sscanf(str,"%s%d%f",&name,&age,&salary);
 	printf("Name   : - %s\n ",name);
 	printf("Age    : - %d\n",age);
 	printf("Salary : - %f\n",salary);
 	return 0;
 }
 */
 /*teri galiyo ka hu aashik tu ak ngina hai kiya dard tu hi dava 
 degaa mere baaki bihari ke pyar me jo bimar hote hai unhi 
 ke virnda van me upchar hota hai 
 teri galiyo me shavare marna jina hai teri galiyo ka hu aashik tu ak ngina hai.*/
/*
 #include<windows.h>
 #include<unistd.h>
 int main(){
 
 int hour,minute,seconds,err,a;
 err=a=0;
 while(err==0){
 	printf("Enter the hour : \n");
 	scanf("%d",&hour);
 	printf("Enter the minute : \n");
 	scanf("%d",&minute);
 	printf("Enter the seconds : \n");
 	scanf("%d",&seconds);
 	if(hour<24 && minute<60 && seconds<60){
 		err++;
	 }else{
	 	system("cls");
	 }
  }
  while(a==0){
  	system("cls");
  	printf(" %d:%d:%d ",hour,minute,seconds);
  float	sleep(1000);
  	  seconds++;
  	if(seconds>59){
  		seconds=0;
  		minute++;
	  }
	  if(minute>59){
	  	minute=0;
	  	hour++;
	  }
	  if(hour>24){
	  	hour=0;
	  }
  }
  return 0;	
 }
 */
 
