#include <iostream>
using namespace std;
void DecimalToBinary(int n) {
   int binaryNumber[100], num=n;
   int i = 0;
   while (n > 0) {
      binaryNumber[i] = n % 2;
      n = n / 2;
      i++;
   }
   cout<<num<<endl;
   for (int j = i - 1; j >= 0; j--)
   return (binary[j]);

   

}
int main() {
    int n;
    cin>>n;
    cout<<DecimalToBinary(n)<<endl;
}