#include<iostream>
int main(){
	int v1 = 0,val = 0;
	if(std::cin>>v1){
		int times = 1;
		while(std::cin>>val){
			if(val==v1){
				times++;
			}else{
				std::cout << v1 << "���ֵĴ���Ϊ" << times << "��" << std::endl;
				times = 1;
				v1 = val; 
			}			
		}
		std::cout << v1 << "���ֵĴ���Ϊ" << times << "��" << std::endl;
	}
	return 0;
}
