#include <iostream>
#include <cmath>

using namespace std;


int main(){
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(3);


        int n = 0, apr = 0;
        
	while (1){
	double pi = 0;
        cout << "Enter the value of the parameter 'n' in the Leibniz formula (or -1 to quit):" << endl;
        cin >> n;
        if (n == -1)
                return 0;
        else{
	        for (int i = 0; i < n; i++){
	              pi += pow((-1.0), i)/(2*i+1);
	        }
	        pi = 4*pi;
        }
       cout << "The approximate value of pi using "<< n << " terms is: " << pi << endl;
	}
}

