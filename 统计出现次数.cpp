#include<iostream>
int main(){
	int v1 = 0,val = 0;
	if(std::cin>>v1){
		int times = 1;
		while(std::cin>>val){
			if(val==v1){
				times++;
			}else{
				std::cout << v1 << "出现的次数为" << times << "次" << std::endl;
				times = 1;
				v1 = val; 
			}			
		}
		std::cout << v1 << "出现的次数为" << times << "次" << std::endl;
	}
	return 0;
}
