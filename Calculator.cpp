#include <iostream>
using namespace std;

int main() {
   int n;
   char op;
   repeat:
   cout << "Enter how many numbers you want to calculate: ";
   cin >> n;
   int A[n];
   cout << "Enter the numbers you want to calculate: " << endl;
   for (int i = 0; i < n; i++) {
      cout << "A[" << i+1 << "]" << "= ";
      cin >> A[i];
   }
   cout << "Enter the operation of the calculator (+, -, *, /): ";
   cin >> op;
   int sum = 0;
   double prod = 1;
   switch (op) {
      case '+':
         for (int i = 0; i < n; i++) {
            sum = sum + A[i];
         }
         cout << "The sum of all the numbers is: " << sum << endl;
         break;

      case '-':
         for (int i = 0; i < n; i++) {
            sum = sum - A[i];
         }
         cout << "The difference of all the numbers is: " << sum << endl;
         break;

      case '*':
         for (int i = 0; i < n; i++) {
            prod = prod * A[i];
         }
         cout << "The product of all the numbers is: " << prod << endl;
         break;

      case '/':
         for (int i = 0; i < n; i++) {
            prod = prod / A[i];
         }
         cout << "The quotient of all the numbers is: " << prod << endl;
         break;

      default:
         cout << "The operation is not valid." << endl;
         goto repeat;
   }
   string b="yes";
   cout << "Try again? (yes,no):" << endl;
   cin >> b;
   if (b == "yes" || b == "Yes" || b == "YES" || b == "y" || b == "Y") {
      goto repeat;
   }

   return 0;
}

