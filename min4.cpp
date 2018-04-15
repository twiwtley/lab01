#include <iostream>

using namespace std;
int smallest2(int a, int b);
int smallest4(int a, int b, int c, int d);

int main(int argc, char *argv[]){
     if (argc != 5){
       cerr << "Usage: " << argv[0] <<  " num1 num3 num3 num4" << endl;
       cerr << " Prints smallest of the four numbers" << endl;
       exit(1);
      }
        int a = atoi(argv[1]);
        int b = atoi(argv[2]);
        int c = atoi(argv[3]);
        int d = atoi(argv[4]);
        cout << smallest4(a, b, c, d) << endl;
        return 0;

}


int smallest2(int n1, int n2){
        if (n1>n2)
             return n2;
        else
             return n1;
}

int smallest4(int n1, int n2, int n3, int n4){
	return smallest2(smallest2(n1, n2), smallest2(n3, n4));
}

