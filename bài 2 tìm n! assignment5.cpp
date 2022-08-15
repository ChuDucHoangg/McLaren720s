#include <iostream>
using namespace std;
int giaiThua(int n)
{
	int giaithừa=1;
	for(int i=1;i<=n;i++)
		giaithừa*=i;
	return giaithừa;


}
int main(){


	int n;
	cin >> n;
    cout << "Giai thua cua " << n << " la: " << giaiThua(n);
    return 0;
}