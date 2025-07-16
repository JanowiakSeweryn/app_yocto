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
	
		std::cout << "2*(a+b) = ";
		std::cout << 2*(a+b) << "\n";
		std::cout << "type -1 to exit\ntype any key to continue\n";
		std::cin >> i;	
	}
	return 0;
}
