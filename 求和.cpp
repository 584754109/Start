#include<iostream>
int main(){
	int v1 = 0,sum = 0,times = 1;
	while(std::cin>>v1)
		sum += v1,times++;
	std::cout << "����������ֺ�Ϊ�� " << sum <<  "����Ϊ" << times <<std::endl;
	return 0;
	
} 
