#include <iostream>
#include <cmath>

using namespace std;
int main() {
	double a, b, c;
	cin >> a >> b >> c;
	
	double avg = (a+b+c)/3.0;
	avg = roundf(avg*100)/100;

	char g;
	if (avg >= 90.0 && avg <= 100.0)
			g = 'A';
	else if(avg > 90.0 && avg <=80.0)
			g = 'B';
	else if(avg > 80.0 && avg <= 70.0)
			g = 'C';
	else if(avg >70.0 && avg <= 60.0)
			g = 'D';
	else
			g = 'F';
	
	// cout.precision(2);
	// cout << fixed << avg << ' ' << g << endl;
	printf("%.2lf %c", avg, g);
}

// 미해겨류ㅠㅠㅠㅠㅠㅠ