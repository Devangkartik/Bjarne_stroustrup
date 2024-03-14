#include<Graphics>
int main(){
	initwindow(400,300,"Graphics");
	circle(200,150,40);
	while(!kbhit()){
		delay(1);
	
	}
	return 0;
}
