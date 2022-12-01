//Ik(x) = Integrala(0,x) u^k * e^u  * d * u
//k = 1...n;
//Ik(x) = [ x^k - Ak^1*x^(k-1)...(-1)^k * Ak^k] * e^k
//Ak^p = k(k-1)...(k-p+1)

#include <stdio.h>
#include <conio.h>
#include <math.h>

void main(
 double s;
 double x;
 double xk;
 int n , p , k;
 cout<<"\n"<<"n=";
 cin>>n;
 cout<<"\n"<<"x=";
 cin>>x;
 cout<<" cele " << n << " integrale sunt : \n";
 xk 1.0;
 for(k=1;k<=n;k++)
  {
   xk *= x;
    s = t = xk;
	 for(p = 1; p <=k ; p++)
	  {
	   t *= - ( k - p + 1) / x;
	   s += t;
	   }
	   s *= exp(x);
	   cout << integrala I"<< k << " ( " << x << " )  este " << s ;
	   }
	   getch();
	   }
	   
	   
