# include <bits/stdc++.h>
using namespace std ;

int gnum(vector<int> n)
{
    int f , s , sh , c ;
    int st = 0 ;
    int d ;
    while (true)
    {
        sh = n[(n.size()-1) /2] ;
        s = (n.size()-1) /2 ;
        cout << "Your number is : " << sh << endl ;
        cout << "press '1' if 'YES' || press '2' if 'NO'  :  " ;
        cin  >> c ;
        cout << "======================================================\n" ;
        if (c == 1)
        {
            f = sh ;
            cout << "Your number is : " << f << endl ;
            cout << "Your steps is : " << st+1 << endl ;
            if (st+1 <= 2)
            {
                cout << "Your difficulty is : easy" << endl ;
            }
            else if (st+1 > 2 && st+1 <= 4)
            {
                cout << "Your difficulty is : mid" << endl ;
            }
            else 
            {
                cout << "Your difficulty is : hard" << endl ;
            }
            break;
        }
        else 
        {
            cout << "press '1' for less || press '2' for more than : " << sh << endl ;
            cout << "It's : " ;
            cin  >> c ;
            if (c == 1)
            {
                n.erase(n.begin()+s+1 , n.end()+1) ;
                st ++ ;
            }
            else if (c == 2)
            {
                n.erase(n.begin() , n.begin()+s+1) ;
                st ++ ;
            }   
        }
        cout << "======================================================\n" << endl ;
    }
    return f ;
}

int main ()
{
    while (true)
    {
        int num ;
        vector <int> n ;
        cout << "   --- Hello to Guess Game ---" << endl ;
        cout << "Insert your range number: " ;
        cin  >> num ;
        for (int i=0 ; i<num+1 ; i++)
        {
            n.push_back(i) ;
        }
        gnum(n) ;
        cout << "==================================================\n" ;
    }
}
