#include<iostream>

int main()
{	
	int i=0;
	int a = 0;
	int b = 0;
	while(i!=-1){
		
		std::cout << "type b:";
		std::cin>>b;

		std::cout << "type a:";
		std::cin>>a;
	
		std::cout << "a+b = ";
		std::cout << a+b << "\n";
		std::cout << "type -1 to exit";
		std::cin >> i;	
	}
	return 0;
}
