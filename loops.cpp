// a
// bb
// ccc
// dddd
// eeeee


// #include <iostream>
// using namespace std ;
// int main() {
//     int i ;
//     int j ;
//     int n ;
//     char alphabet = 'a' ;
//     cout << "enter : " ;
//     cin >> n ;

//     for (i=1 ; i<=n ; i++) {
//         for(j=1 ; j<=i ; j++) {
//             cout << alphabet ;
//         }
//         alphabet++ ;
//         cout << endl;
//     }
// }


// a
// ab
// abc
// abcd
// abcde

// #include <iostream>
// using namespace std ;
// int main() {
//     int i ;
//     int j ;
//     int n ;
//     cout << "enter : " ;
//     cin >> n ;

//     for (i=1 ; i<=n ; i++) {
//         char alphabet = 'a' ;
//         for(j=1 ; j<=i ; j++){
//             cout << alphabet++ << " ";
//         }
//         cout << endl ;
//     }
// }


// a
// bc
// def
// ghij
// klmno


// #include <iostream>
// using namespace std ;
// int main() {
//     int i ;
//     int j ;
//     int n ;
//     char alphabet = 'a' ;
//     cout << "enter : " ;
//     cin >> n ;


//     for (i=1 ; i<=n ; i++) {
//         for (j=1 ; j<=i ; j++) {
//             cout << alphabet++ ;
//         }
//         cout << endl ;
//     }
// }


//     *
//    ***
//   *****
//  *******
// *********


// #include <iostream>
// using namespace std ;
// int main() {
//     int n ;
    
//     cout << "enter : " ;
//     cin >> n ;

//     for(int i=0 ; i<=n ; i++) {
//         for (int k=1 ; k<=n-i ; k++) {
//             cout << " " ;
//         }
//         for(int j=1 ; j<=2*i + 1 ; j++) {
//             cout << "*" ;
//         }
//         cout << endl ;
//     }
// }



//     1 
//    1 1 
//   1 2 1 
//  1 3 3 1 
// 1 4 6 4 1 

// #include <iostream>
// using namespace std ;
// int main () {
//     int n ;
//     cout << "enter : " ;
//     cin >> n ;

//     for (int i = 0 ; i <= n ; i++) {
        
//         for (int k = 1 ; k <= n-i ; k++) {
//             cout << " " ;
//         }

//         int coef = 1 ;

//         for (int j = 1 ; j <= i ; j++) {
//             cout << coef << " " ;
//             coef = coef*(i - j)/j ;
//         }
//         cout << endl ;
//     }
// } 




// * * * * * * * *        * * * * * * * * *
// * * * * * * *            * * * * * * * *
// * * * * * *                * * * * * * *
// * * * * *                    * * * * * *
// * * * *                        * * * * *
// * * *                            * * * *
// * *                                * * *
// *                                    * *
//                                        *


// #include <iostream>
// using namespace std ;
// int main () {
//     int n ;
//     cout << " enter : " ;
//     cin >> n ;

//     for(int i = 1 ; i <= n ; i++) {
//         for (int j = 1 ; j <= 2*n ; j++) {
//             if (i+j < n) {
//                 cout << "*" ;}

//             else {
//                 cout << " " ;
//             }

//             if (i+n < j){
//                 cout << "*";
//             }
//             else {
//                 cout << " " ;
//             }
//         }
//         cout << endl ;
//     }
// }
