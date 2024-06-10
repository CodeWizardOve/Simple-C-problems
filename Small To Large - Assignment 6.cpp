//Small to large
#include <iostream>
using namespace std;
int main(){

 int a;
 int b;
 int c;
 cout << "enter number"<<endl;
 cin>> a >> b >>c;



 if( a<b && a<c && b>c ){
    cout << a;
    cout << c;
    cout << b;
    }

 else if( a<b && a<c && b<c ) {
        cout << a << b << c;
 }

 else if ( b<a && b<c && c>a ){
        cout << b << a << c;
 }

 else if ( b<a && b<c && c<a ){
        cout << b << c << a;
 }

 else if ( c<a && c<b && a>b){
        cout << c << b << a;

 }

 else if ( c<a && c<b && a<b){
        cout << c  << a  <<  b;

 }

}

