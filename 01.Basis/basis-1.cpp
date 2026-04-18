#include <iostream>
using namespace std;

int main() {
    // cout<<"Hello World"<<endl;
    // cout<<"hello Duniya"<<endl;


    // ----------------Triangle Pattern---------
    // int n=5;
    // for(int i=0; i<n; i++) {
    //     for(int j=0; j<i+1; j++) {
    //         cout <<"*";
    //     }
    //     cout << endl;
    // }
    //----------number pattern-----
    // int i,j;

    // for(i=1; i <= 4; i++) {
    //     for(j = 1; j <= 1; j++) {
    //         printf("%d", j);
    //     }
    //     printf("\n");
    // }

    // ----------Reverse pattern-------------
 
    // for(i = 4; i >= 1; i--) {
    //     for(j = 1; j <= i; j++) {
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    // ----------number triangle------------

    //  for(i = 1; i <= 4; i++) {
    //     for(j = 1; j <= i; j++) {
    //         printf("%d ", j);
    //     }
    //     printf("\n");
    //  }

    // -----------square pattern---------------

    // n = 4;

    // for(i = 1; i <= n; i++) {
    //     for(j = 1; j <= n; j++) {
    //         printf("* ")
    //     }
    //     printf("\n");
    // }



    // --------even and odd problem------------

    // int num;
    // cout << "Enter a number: ";
    // cin >> num;

    // if(num % 2 == 0)
    //     cout << "Even";
     // else
     //     cout << "Odd";

    // ----------Hollow square pattern----------
    
    int i,j,k;
    for(i=5; i<=5; i++) {
       for(j=1; j<=5-i; j++) {
        printf("*");
        for(k=1; k<=2i-1; k++) {
            printf("*");
        }
       }    
    
    }

    return 0;
};