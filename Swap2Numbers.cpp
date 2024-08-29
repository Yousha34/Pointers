
// Is mai third variable k zarya solve hua ha 

#include<iostream>
using namespace std ;

void function( int* x, int* y ){

    int temp ;

    temp = *x ;
    *x = *y ;
    *y = temp ;

    return ;

}

int main(){

    int a, b ;
    
    cout << "Enter First no : " ;
    cin >> a ; 

    cout << "Enter second no : " ;
    cin >> b ;

    cout << a << " " << b << endl ;

    function( &a, &b ) ;

    cout << a << " " << b << endl ;

    return 0 ;
}