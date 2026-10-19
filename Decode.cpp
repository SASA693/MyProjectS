# include <bits/stdc++.h>
using namespace std ;
int main ()
{
    string k ;
    getline (cin , k) ;
    string rk = k ;
    reverse(rk.begin() , rk.end()) ;

    if (k.size() % 2 == 0)
    {
        for (int i=(k.size()/2) ; i<k.size() ; i++)
        {
            rk[i] = char (rk[i] + 1) ;
        }
    }
    else 
    {
        for (int i=(k.size()/2 +1) ; i<k.size() ; i++)
        {
            rk[i] = char (rk[i] + 1) ;
        }
    }

    for (int i=0 ; i<k.size() ; i++)
    {
        k[i] ^= rk[i] ;
        cout << hex << uppercase << setw(2) << setfill('0') << (int) (unsigned char) k[i] << " " ;
    }
    cout << endl ;
    

    for (int i=0 ; i<k.size() ; i++)
    {
        k[i] ^= rk[i] ;
    }
    cout << k << endl ;
}