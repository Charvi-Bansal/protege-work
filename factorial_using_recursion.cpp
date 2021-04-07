#include <iostream>
using namespace std;
int f=1;
int facto(int a){
    if(a==1)
    return f;
    f=f*a;
    a--;
    facto(a);

}
int main() {
	int a,fact;
	cin>>a;
	fact= facto(a);
	cout<<fact;
	return 0;
}
