#include <iostream>
using namespace std;
int main () {
	int n;
	cin>>n;
	cout<<n<<" ";
		for(;;) {
			if(n == 1) {
				return 0;
			} else {
				if(n%2 == 0) {
					n = n/2;
					cout<<n<<" ";
				} else {
					n = 3*n + 1;
					cout<<n<<" ";
				}
			}
		}
}