#include<iostream>
using namespace std ;
int main(){

    int arr[3] = { 43, 98, 17 } ;

    int* ptr = &arr[0] ;

    cout << *ptr << endl ;
    cout << ++*ptr ;

    cout << endl << arr[0] << " " << arr[1] << " " << arr[2] ;

    return 0 ;
}