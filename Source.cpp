#include <iostream>
using namespace std;
int main() {
	/*14
	int a, b, c;
	cin >> a >> b >> c;
	if (a < b && a < c) {
		cout << a;
	}
	if (b < a && b < c) {
		cout << b;
	}
	if (c < b && c < a) {
		cout << c;
	}
	if (a > b && a > c) {
		cout << " " << a;
	}
	if (b > a && b > c) {
		cout << " " << b;
	}
	if (c > b && c > a) {
		cout << " " << c;
	}*/

	/*15
	int a, b, c;
	cin >> a >> b >> c;
	if (a < b && a < c) {
		cout << b+c;
	}
	if (b < a && b < c) {
		cout << a + c;
	}
	if (c < a && c < b) {
		cout << b+a;
	}*/

	/*16
	float a, b, c;
	cin >> a >> b >> c;
	if (a < b && b < c) {
		cout << 2*a<<' '<<2*b<<' '<<2*c;
	}
	else {
		a = -a;
		b = -b;
		c = -c;
		cout << a << ' ' << b << ' ' << c;
	}*/

	/*17
	int a, b, c;
	cin >> a >> b >> c;
	if ((a < b && b < c) || (a > b && b >c)) {
		cout << 2 * a << ' ' << 2 * b << ' ' << 2 * c;
	}
	else {
		a = -a;
		b = -b;
		c = -c;
		cout << a << ' ' << b << ' ' << c;
	}*/
	
	/*18
	int a, b, c;
	cin >> a >> b >> c;
	if (a!=b && a!=c) {
		cout << '1';
	}
	if (b!=c && b!=a) {
		cout << '2';
	}
	if (c!= a && c!= b) {
		cout << '3';
	}*/

	/*19
	int a, b, c, d;
	cin >> a >> b >> c>>d;
	if (a != b && a != c && a!=d) {
		cout << '1';
	}
	if (b != c && b != a && b!=d) {
		cout << '2';
	}
	if (c != a && c != b && c!= d) {
		cout << '3';
	}
	if (d != a && d != b && d != c) {
		cout << '4';
		}*/
	

	/*20
	int a, b, c;
	cin >> a >> b >> c;
	if (abs(a-b)<abs(a-c)) {
		cout << abs(a - b);
	}
	if (abs(a - b) > abs(a - c)) {
		cout << abs(a - c);
	}*/

	
	/*21
	int x, y;
	cin >> x >> y;
	if (x==0 && y==0) {
		cout << 0;
	}
	if (x==0 && y!= 0 ) {
		cout << 2;
	}
	if (y == 0 && x != 0) {
		cout << 1;
	}
	if (y != 0 && x != 0) {
		cout << 3;
	}*/

	/*22
	int x, y;
	cin >> x >> y;
	if (x>0 && y>0) {
		cout << 1;
	}
	if (x<0 && y> 0 ) {
		cout << 2;
	}
	if (y < 0 && x < 0) {
		cout << 3;
	}
	if (y < 0 && x > 0) {
		cout << 4;
	}*/

	
}