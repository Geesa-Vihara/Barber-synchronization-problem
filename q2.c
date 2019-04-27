#include<stdio.h>
#define MAX 5//here n=5
int front=0,rear=0,count=0,queue[MAX];
void enqueue(),dequeue();
void test1(),test2(),test3();

void main(){
	printf("\n\t**********WELCOME TO THE BARBERS SHOP**********\n\n");
//	test1();
	test2();
//	test3();
}
void enqueue(){
	if(count==MAX)
		printf("\t\tClient COMES NO CHAIRS Available Client LEAVES\n");//When a client comes and no free chairs available the client leaves
	else{
		if(count==0)
			printf("\t\tClient COMES in and WAKES the Barber\n");//When a client comes and no clients are inside the client goes and wakes the barber to get a haircut
		else printf("\t\tClient COMES and SITS and WAIT\n");//when a client comes and seats are available the client sits and wait
		queue[rear]=1;//clients are recorded as 1's in the queue
		rear=(rear+1)%MAX;
		count++;//clients inside the shop is incremented	
		
	}	
}
void dequeue(){
	if (count==0)
		printf("\t\tNO CLIENTS waiting and the Barber is SLEEPING");//No clients are waiting in the line and the barber is sleeping 
	else{
		printf("\t\tClient LEAVES after GETTING a haircut ");//when a client leaves immediately the next client in waiting gets a haircut
		front=(front+1)%MAX;
		count--;//clients inside the shop is decremented		
		if (count==0)
			printf("And the Barber SLEEPS");//when the last client leaves the barber sleeps
	}
	printf("\n");
}

void test1(){
	enqueue();//client comes
	enqueue();//client comes
	enqueue();//client comes
	enqueue();//client comes
	enqueue();//client comes
	enqueue();//client comes
	dequeue();//client leaves after getting a haircut
	enqueue();//client comes
	printf("\n");
}

void test2(){
	enqueue();//client comes
	enqueue();//client comes
	dequeue();//client leaves after getting a haircut
	enqueue();//client comes
	enqueue();//client comes
	dequeue();//client leaves after getting a haircut
	dequeue();//client leaves after getting a haircut
	printf("\n");
}
void test3(){
	enqueue();//client comes
	dequeue();//client leaves after getting a haircut
	dequeue();//client leaves after getting a haircut
	enqueue();//client comes
	enqueue();//client comes
	dequeue();//client leaves after getting a haircut
	dequeue();//client leaves after getting a haircut
	printf("\n");
}




