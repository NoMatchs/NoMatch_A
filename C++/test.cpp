#include <iostream>
using namespace std;
#include <string>
#include <vector>

int main()
{
   int n;
   char symbol;

   if(!(cin >> n >> symbol))
   {
      return 0;
   }

   if(n < 1)
   {
      cout << n << endl;
   }

   int k = 1;
   while(true)
   {
      long long needed = (1LL * k * k + 2LL * k - 1) / 2;
      if(needed > n)
      {
         k -= 2;
         break;
      }
      k += 2;

      if(k > 2000) 
      {
         break;
      }
   }

   long long used = (1LL * k * k + 2LL * k - 1) / 2;

      for(int i = k; i >= 1; i -= 2)
      {
         int spaces = (k - i) / 2;
         for(int s = 0; s < spaces; s++)
         {
            cout << " ";
         }

         for(int j = 0; j < i;j++)
         {
            cout << symbol;
         }
         cout << endl;
      }

   for(int i = 3; i <= k; i +=2)
   {
      int spaecs = (k - i) / 2;

      for(int s = 0; s < spaecs ;s++)
      {
         cout << " ";
      }
      
      for(int j = 0; j < i; j++)
      {
         cout << symbol;
      }

      cout << endl;
   }

   cout << (n - used) << endl;
}