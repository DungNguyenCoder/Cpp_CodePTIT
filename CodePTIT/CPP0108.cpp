#include <iostream> 
using namespace std; 
int main() 
{ 
    int n, a; 
    cin>>n; 
    while (n--) 
    { 
        cin>>a; 
        switch (a) 
        { 
            case 2: 
            { 
                cout<<"20"<<endl; 
                break; 
            } 
            case 3: 
            { 
                cout<<"38"<<endl; 
                break; 
            } 
            case 4:
            { 
                cout<<"50"<<endl; 
                break; 
            } 
            case 5: 
            { 
                cout<<"38"<<endl; 
                break; 
            } 
            case 6: 
            { 
                cout<<"20"<<endl; 
                break; 
            } 
            case 7:
            { 
                cout<<"8"<<endl; 
                break; 
            } 
            case 8: 
            { 
                cout<<"5"<<endl; 
                break; 
            } 
            case 9: 
            { 
                cout<<"0"<<endl; 
                break; 
            } 
        } 
    } 
    return 0; 
}