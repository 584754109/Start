#include <iostream>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int sum = 0,v1 = 1;
	while(v1<=10){
		//只要V1小于等于10，while就可以循环
		sum += v1;
		++v1; 
	}
	std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;
	return 0;
}
