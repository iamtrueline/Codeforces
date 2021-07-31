#include <iostream>
#include <string>
using namespace std;

int main(){
    string a;
	string b;
	int i = 0, len = 0;

	cin>>a>>b;
	len = a.size();

	for(i = 0; i < len; i++) {
		if (a[i] >= 'A' && a[i] <= 'Z') {
			a[i] = a[i] - 'A' + 'a';
		}
		if (b[i] >= 'A' && b[i] <= 'Z') {
			b[i] = b[i] - 'A' + 'a';
		}
	}

	for (i = 0; i < len; i++) {
		if (a[i] != b[i]) {
			if (a[i] < b[i]) {
				cout<<"-1"<<endl;
				return 0;
			}
			else if (a[i] > b[i]) {
				cout<<"1"<<endl;
				return 0;
			}
		}
	}
	cout<<"0"<<endl;
	return 0;
}
