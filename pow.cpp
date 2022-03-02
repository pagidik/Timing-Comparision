#include <stdio.h>
#include <sys/time.h>
#include <math.h>
#include <iostream>

double getTime() {
  struct timeval cur;

  gettimeofday( &cur, NULL );
  return( cur.tv_sec + cur.tv_usec / 1000000.0 );
}
using namespace std;

int main(int argc, const char * argv[]){
    double a = 0 ; 

    cout << "Input any number : " ;
    cin >>  a ;

    double begin1 = getTime();

    for(double i = 0 ; i < 99999999 ; i++){
        a = a*a;
    }

    double end1 = getTime();

    double t1 = end1 - begin1;


    cout << "Time taken for Multiplication : " << t1 << endl;


    double begin2 = getTime();
    

    for(double i = 0 ; i < 99999999 ; i++){
        a = pow( a , 2 );
    }

    double end2 = getTime();

    double t2 = end2 - begin2;

    cout <<"Time taken by Pow function : " << t2 << endl;

    double cost = t2/t1;
    cout << " Multiplication is " << cost << " times faster than Pow function" << endl;

    return 0;
}