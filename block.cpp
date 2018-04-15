#include <iostream>


using namespace std;

int main(){
        int rows, columns;
	bool cont = true;
	while (cont == true){
        cout << "Enter number of rows and columns:" << endl;
        cin >> rows >> columns;
	if (rows == 0 || columns == 0)
		cont = false;
	
        for (int i=0; i<rows; i++){
            for (int j=0; j<columns; j++){
                cout << "X.";									                }
            cout << endl;
     }

   }
}
