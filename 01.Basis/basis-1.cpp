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
    
    // int i,j,k;
    // for(i=5; i<=5; i++) {
    //    for(j=1; j<=5-i; j++) {
    //     printf("*");
    //     for(k=1; k<=2i-1; k++) {
    //         printf("*");
    //     }
    //    }    
    
    // };

    // -----------Pyramid pattern---------------

    // int n = 4;
    // for(int i = 1; i <= n; i++) {
    //     for(int j = 1; j <= n-1; j++) {
    //         cout << " ";
    //     }
    //     for(int k = 1; k <= i; k++){
    //         cout << "* ";
    //     }
    //     cout << endl; 
    // }

    
    //----------zig-zag pattern-------
     
    // int n = 9;
     //columns

    // for(int i = 1; i <= 3; i++) {
    //     for(int j = 1; j <= n; j++) {
    //         if((i == 1 && j % 4 == 1)) ||
    //         (i == 2 && j % 4 == 2) ||
    //         (i == 3 && j % 4 == 3) {
    //             cout << "*";
    //         } else {
    //             cout << " ";
    //         }
    //     }
    //     cout << endl;
    // }


    //---------Reverse Array ---------

    // int arr[5] = {1, 2, 3, 4, 5};

    // for(int i = 4; i >= 0; i--) {
    //     cout << arr[i] << " ";

        
    // }

    //-------Maximum element------

    // int arr[5] = {2, 8, 1, 6, 3};
    // int max = arr[0];

    // for(int i = 1; i < 5; i++) {
    //     if(arr[i] > max)
    //        max = arr[i];
    // }

    // cout << "Max = " << max;
    
    //-------Array ka sum -------

    // int arr[5] = {1, 2, 3, 4, 5};
    // int sum = 0;

    // for(int i = 0; i < 5; i++) {
    //      sum =+ arr[i];
    // }
    //  cout << "Sum = " << sum;
     
    //---------Simple array code---------

    
    // int arr[5];  // array declare (size = 5)

    // // Input lena
    // cout << "Enter 5 numbers: ";
    // for(int i = 0; i < 5; i++) {
    //     cin >> arr[i];
    // }

    // // Output print karna
    // cout << "Array elements are: ";
    // for(int i = 0; i < 5; i++) {
    //     cout << arr[i] << " ";
    // }


    //-------Array declare aur print kkarna--------
    int arr[5] = {1, 2, 3, 4, 5};

    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    return 0;
};