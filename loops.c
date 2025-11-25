#include<stdio.h>
int main(){
//LOOPS
int i=1;
//--------------------------------------FOR-------------------------------------------------------------
//SYNTAX
//for(begining;end condition;increment or decrement){ }

//for(i=2;i<=100;i+=2){
//	printf("%d\n",i);
//}
//---------------------------------------WHILE----------------------------------------------------------
//syntax
//while(condition) -- if condition is true then the loop iterates
//while(i<=100){
//	
//	printf("%d\n",i);
//	i++;
//}
//while(i>=1){
//	printf("%d\n",i);
//	i--;
//}
int n=1234;
//for()
while(n){
	printf("%d\n",n%10);
	n/=10;
}
//----------------------------------------------------------------------------------------------------
//DO WHILE
//SYNTAX
//do{
//	
//}while(condition);
//do{
//	printf("%d\n",i);
//	i++;
//}while(i<1);
}

