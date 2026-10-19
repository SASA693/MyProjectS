# include <iostream>
using namespace std;
int main ()
{
   int x , y , a;
   y = 19 ;
   cin >> x ;

   if ( x < 60)
   {
      y = 19 ;
      if (x < 10)
      {
      cout << y << ":" << "0" << x ;
      }
      else
      {
      cout << y << ":" << x ;
      }
   }   

   if ( x >= 60 && x < 120)
   {
       y = 20 ; 
       if ( x==60 )
       {
          cout << y << ":" << "00" ;
       }
       else if (x > 60 and x < 70)
       {
          a = x - 60 ;
          cout << y << ":" << "0" << a ;
       }
       else if (x > 60)
       {
         a = x - 60 ;
         cout << y << ":" << a ;
       }
   }
   
   if ( x >= 120 && x < 180 ) 
   {
       y = 21 ;
       if (x==120)
       {
          cout << y << ":" << "00" ;
       }
       else if (x > 120 and x < 130)
       {   
          a = x - 120 ;
          cout << y << ":" << "0" << a ;
       }
       else if (x > 120)
       {
         a = x - 120 ;
         cout << y << ":" << a ;
       }
   }
   
   if (  x == 180 )
  {
       y = 22 ;
      cout << y << ":" <<"00" ;
  } 
  
}