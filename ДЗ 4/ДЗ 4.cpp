// ДЗ 4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
//	int start = 1;
//	int finish = 10;
//	int current = start;
//	int sum = 0;
//	while (current <= finish) {
//		sum += current;
//		current += 1;
//	}
//	  cout << sum;
//    int range;
//   cout << "Which range?\n";
//    cin >> range;
//    int start = 0;
//    int finish = 100;
//    int current = start;
//    float F;
    
//    while (current <= finish) {
//        F = current * 9 / 5 + 32;
 //       current  += range;
 //       cout << '\t' << F;

 //   }

//    int n;
//    int fac = 1;
 //   cout << "Enter number\n";
//    cin >> n;
//    while (n < 0) {
//        fac *= n;
//        n -= 1;
 //       cout << fac << '\n';

//}
//    int count;
//    int n = 1;
//    cout << "Enter number\n";
//    cin >> count;
//   while (count <= n); {
//        n += 1;
//        if (count % n == 0) {
 //           cout << "Number countable \n";
//        }
//        else {
 //           cout << "Error\n";
 //       }
        
//    }
//    int i;
//    int prevDigit;
//    bool hasConsecutive;
 //   cout << "Введіть числа!";
 //   cin >> i;
 //   if (i < 0) {
 //       i = abs(i);
 //   }
//    while (i > 0) {
//        int currentDigit = i % 10;
//        if (currentDigit == prevDigit) {
 //           hasConsecutive = true;
 //           break;
 //       }
 //       prevDigit = currentDigit;
//        i /= 10;


//    }
 //   if (hasConsecutive) {
 //       cout << "Є однакові цифри підряд!" << "\n";
 //   }
 //   else {
 //       cout << "Немає однакових цифр підряд." << "\n";
 //   }



//    int i = 1;
//    while (i < 10) {
 //       int j = 1;
 //       while (j < 10) {
 //           int result = i * j;
 //           cout << result << "\t";
 //           j++;

 //       }
 //       cout << '\n';
 //       i++;
        
//    }
   
 //   return 0;

 //   int a = 0;
 //   int b = 1;
 //   int next = 0;
   
 //   cout << a << "\n";
 //   cout << b << "\n";
 //   while (next <= 10000000) {
 //       next = a + b;
 //       if (next <= 10000000) {
 //           cout << next << "\n";
 //       }
 //       a = b; b = next;
 //  }
  //  return 0;

//int N;
//cout << "Enter N \n";
//cin >> N;
//int i = 1;
//while (i <= N) {
//int j = 1;
  //  while (j <= N - i) {
 //       cout << " ";
  //      j++;
 //   }
  //  while (j <= (2 * i - 1)) {
  //      cout << "*";
 //       j++;
 //   }
 //   cout << "\n";
 //   i++;
//}

  int A;
  int B;
  int C;
  cout << "Enter A \n";
  cin >> A;
  cout << "Enter B \n";
  cin >> B;
  cout << "Enter C \n";
  cin >> C;
  for (int i = 0; i < A;  i++) {
      for (int j = 0; j < B; j++) {
          for (int k = 0; k < C; k++) {
              if (i == 0; i == A - 1; j == 0; j == B - 1; k == 0; k == C - 1; ) {
                  cout << "*\n";
              }
              else {
                  cout << " \n";
              }
          }
      }
  }


}


