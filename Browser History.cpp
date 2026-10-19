# include <bits/stdc++.h>
using namespace std ;
int main ()
{
    int r , n ;
    string u ;
    vector <string> a ;
    while (true)
    {
        cout << "The List of Choices" << endl ;
        cout << "1. Visit a new website" << endl ;
        cout << "2. Visit a old website" << endl ;
        cout << "3. Visit all history" << endl ;
        cout << "4. Go back" << endl ;
        cout << "5. Go forward" << endl ;
        cout << "6. Exit" << endl ;
        cout << "===================================" << endl << endl ;
        
        cout << "My request is : " ;
        cin >> r ;
        cin.ignore() ;
        if (r == 1)
        {
            // n++ ;
            cout << "I want to go to this URL : " ;
            getline(cin , u) ;
            cout << endl ;
            a.push_back(u) ;
            n = a.size()-1 ;
            cout << "My URL is : " << a[a.size()-1] << endl ;
            cout << "===================================" << endl << endl ;
        }
        
        else if (r == 2)
        {
            int w ;
            cout << "you want to go to the website num : " ;
            cin >> w ;
            w-- ;
            n = w ;
            cout << "your website is : " << a[w] << endl ;
            cout << "===================================" << endl << endl ;
        }
        
        else if (r == 3)
        {
            for (int i=a.size()-1 ; i>-1 ; i--)
            {
                cout << i+1 << ". Your URL is : " << a[i] << endl ;
            }
            cout << "===================================" << endl << endl ;
        }

        else if (r == 4)
        {
            if (n == 0)
            {
                cout << "we are at first page" << endl ;
            }
            else
            {
                cout << "We are in now : " << a[n] << endl ;
                n-- ;
                cout << "We are going to : " << a[n] << endl ;   
            }
            cout << "===================================" << endl << endl ;
        }

        else if (r == 5)
        {
            if (n == a.size()-1)
            {
                cout << "We are at last page" << endl ;
            }
            else 
            {
                cout << "We are in now : " << a[n] << endl ;
                n++ ;
                cout << "We are going to : " << a[n] << endl ;   
            }
            cout << "===================================" << endl << endl ;
        }

        else 
        {
            break ;
        }
    }
}