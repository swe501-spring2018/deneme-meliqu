#include <iostream>
#include <math.h> 
#include <tgmath.h>



using namespace std;

	/*
int main () {
	
	
 double r=3; 
		
	double hacim = M_PI*r*r*r*4/3; // 4/3'ü baþa yazsaydýk integer olarak algýlardý ve sonuç hatalý olurdu. O yüzden 4.0 olarak yazmak gerekir. Þöyle de yazabilirdik 4*M_PI*r*r*r/3
	
	cout << "Kurenin hacmi: " << hacim << endl; 
	
	double a=-2, b=3, c=5;
	
	double dis = (b*b)-4*a*c;
	
	double x1, x2;
	
	if (dis>=0) {
		x1 = (-b + sqrt(dis)) / (2*a);
		x2 = (-b - sqrt(dis)) / (2*a);
	}
	
	cout << "x1: " << x1 << endl;
	cout << "x2: " << x2 << endl;
	
	return 0;
	
	
	
	// 1'den 10'a kadar sayýlarý ekrana yazdýralým
	
	for (int i=1;i<=10;i++) {
	
		cout << i << endl;	
		
	}
	
	return 0; 
	
	// 1'den 10'a kadar çarpým tablosu  
	
	for (int i=1;i<=10;i++) {
		
		for (int j=1;j<=10;j++) 
			
			cout << i << "*" << j << "=" << i*j << "  "; 
		
		cout << endl;					
		}
		
	return 0; 

// bisection metodu ile kök bulma
 	
int main () {

	double xl = 0;
	double xr = 2;
	double small = 0.0000001;	
	
	
	for ( ; xr-xl>small ; ) {

		
		double x_mid = (xl + xr)/2;
		
		if ((x_mid*x_mid - 2) < 0) xl = x_mid;
		
		else xr = x_mid;
		
		cout << xl << " " << xr << endl;
	    	
		}
		



// 2.yol 

int main () {

	double xl = 0;
	double xr = 2;
	double small = 0.0000001;	
	
	
	while (xr-xl>small) {

		
		double x_mid = (xl + xr)/2;
		
		
		(x_mid*x_mid - 2) < 0 ? xl = x_mid : xr = x_mid;
		
		cout << xl << " " << xr << endl; 
	    	
		}

 

 // 40. fibonacci sayýsýnýn deðerini bul
 
 
 int main () {
 
 
     int x_prev = 1;
     int x_prevprev = 0;
     int N = 40;
     
      
	 cout << x_prevprev << endl;
	 cout << x_prev << endl;
	 
	 for (int i=2; i<=N; i++) {
	 	int x = x_prev + x_prevprev;
	 	cout << i << ".sayi:" << x << endl;
	 	
	 	x_prevprev = x_prev;
	 	x_prev = x;
	 }
	  


// 1'den 10'a kadar 

 int main () {
 	
	
	for (int x=1; x<=10; x++) {
 		
 	cout << x << " " << log10 (x) << " " << x*log10 (x) << " " << pow (2,x) << endl;
		
	}
 	
 	return 0;
 
 
 
 int main () {
 	
 	int n;
 	
	cin >> n;
	
	double expo = 0.694*n;
	 
	cout << pow (2,expo) << endl;
 	
 	return 0; 
 	
 
 /* 
 int main () {
 
 	double x;
 	
 	cin >> x;
 	
 	cout << log10(x);
 	
 */	
 
 int main () {
 	
 	int n;
 	
	cin >> n;
	
	double expo = n;
	 
	cout << pow (2,expo) << endl;
 	
 	return 0; 
  	
    	
}
