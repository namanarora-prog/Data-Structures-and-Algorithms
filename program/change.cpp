#include <iostream>

int get_change(int m) {
  //write your code here
  int n=0;
  int a[]={10,5,1};
  for(int i = 0; i<=2;i++)
  {
  	while(m>=a[i])
  	{
  		m-=a[i];
		n++;	
	}
  }
  return n;
}

int main() {
  int m;
  std::cin >> m;
  std::cout << get_change(m) << '\n';
}
