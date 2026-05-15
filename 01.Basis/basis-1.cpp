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
    // int arr[5] = {1, 2, 3, 4, 5};

    // for(int i = 0; i < 5; i++) {
    //     cout << arr[i] << " ";
    // }

    //---Array ka sum nikalan-----

    // int arr[5] = {1, 2, 3, 4, 5};
    // int sum = 0;

    // for(int i = 0; i < 5; i++) {
    //     sum = sum + arr[i];
    // }

    // cout << "Sum = " << sum;  

    //-----linear search--------

    // int arr[5] = {1, 3, 5, 7, 9};
    // int key;
    // bool found = false;

    // cout << "Enter number to search: ";
    // cin >> key;

    // for(int i = 0; i < 5; i++) {
    //     if(arr[i] == key) {
    //         found = true;
    //         break;
    //     }
    // }

    // if(found)
    //     cout << "Found";
    // else
    //     cout << "Not Found";

    //-------Smallest element------

    // int arr[5] = {8, 3, 10, 2, 7};
    // int min = arr[0];

    // for(int i = 1; i < 5; i++) {
    //     if(arr[i] < min) {
    //         min = arr[i];
    //     }
    // }

    // cout << "Smallest = " << min;

    //---------Fibonacci Series------

    // int n = 10, a = 0, b = 1, next; 

    // for(int i = 0; i < n; i++) {
    //     cout << a << " ";
    //     next = a + b;
    //     a = b;
    //     b = next;
    // }

    // --------find Largest Number in array---

    // int arr[5];

    // cout << "Enter 5 number: ";

    // for(int i = 0; i < 5; i++) {
    //     cin >> arr[i];
    // }

    // int largest = arr[0];

    // for(int i = 1; i < 5; i++) {
    //     if(arr[i] > largest) {
    //         largest = arr[i];
    //     }
    // }

    // cout << "Largest number = " << largest;


    //-------Array input and output ---

    // int arr[5];

    // cout << "Enter 5 numbers: ";

    // for(int i = 0; i < 5; i++) {
    //     cin >> arr[i];
    // }

    // cout << "Array elements are: ";

    // for(int i = 0; i < 5; i++) {
    //     cout << arr[i] << " ";
    // } 
    
    //  --------------Calculator program------------

    // int a, b;
    // char op;

    // cout << "Enter two numbers: ";
    // cin >> a >> b;

    // cout << "Enter operator (+,-,*,/): ";
    // cin >> op;

    // if(op == '+')
    //     cout << "Result = " << a + b;
    // else if(op == '-')
    //     cout << "Result = " << a - b;
    // else if(op == '*')
    //     cout << "Result = " << a * b;
    // else if(op == '/')
    //     cout << "Result = " << a / b;
    // else
    //     cout << "Invalid Operator";

    //--------Number guessing  ------


    // int secret = 7, guess;

    // cout << "Guess the number: ";
    // cin >> guess;

    // if(guess == secret)
    //     cout << "Correct Guess!";
    // else
    //     cout << "Wrong Guess";


    //-------Student Grade System------ 

    // int marks;

    // cout << "Enter marks: ";
    // cin >> marks;

    // if(marks >= 90)
    //     cout << "Grade A";
    // else if(marks >= 75)
    //     cout << "Grade B";
    // else if(marks >= 50)
    //     cout << "Grade C";
    // else
    //     cout << "Fail";

    //-------Table Program---------- 
    
    // int n;

    // cout << "Enter number: ";
    // cin >> n;

    // for(int i = 1; i <= 10; i++) {
    //     cout << n << " x " << i << " = " << n * i << endl;
    // }

    //-----ASCII Value program-----
     
    // char ch;

    // cout << "Enter character: ";
    // cin >> ch;

    // cout << "ASCII Value = " << int(ch);

    //---------Check positive or negative code---

    // int n;

    // cout << "Enter number: ";
    // cin >> n;

    // if(n >= 0)
    //     cout << "Positive Number";
    // else
    //     cout << "Negative Number";


    //--------Simple Interest------  

    // int p = 1000, r = 5, t = 2;
    // int si;

    // si = (p * r * t) / 100;

    // cout << "Simple Interest = " << si;


    //-------Voting Eligibility checker-----
     
    // int age;

    // cout << "Enter age: ";
    // cin >> age;

    // if(age >= 18)
    //     cout << "Eligible for Voting";
    // else
    //     cout << "Not Eligible";

    //------Password checker-----

    // string password;

    // cout << "Enter Password: ";
    // cin >> password;

    // if(password.length() >= 8)
    //     cout << "Strong Password";
    // else
    //     cout << "Weak Password";

    //------Swap two number---
    

    // int a = 10, b = 20, temp;

    // temp = a;
    // a = b;
    // b = temp;

    // cout << "a = " << a << endl;
    // cout << "b = " << b;

    //------Voting Eligible ckecker------ 

    // int age;

    // cout << "Enter age: ";
    // cin >> age;

    // if(age >= 18)
    //     cout << "Eligible for Voting";
    // else
    //     cout << "Not Eligible";

    //------Simple interest---- 

    // int p = 1000, r = 5, t = 2;
    // int si;

    // si = (p * r * t) / 100;

    // cout << "Simple Interest = " << si;

    //---------Mini banking system------

    int balance = 10000, choice, amount;

    cout << "1. Deposit\n2. Withdraw\n";
    cin >> choice;

    if(choice == 1) {
        cout << "Enter amount: ";
        cin >> amount;
        balance += amount;
    }
    else if(choice == 2) {
        cout << "Enter amount: ";
        cin >> amount;

        if(amount <= balance)
            balance -= amount;
        else
            cout << "Insufficient Balance";
    }

    cout << "Current Balance = " << balance;

    return 0;
};