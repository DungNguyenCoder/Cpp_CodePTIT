#include <bits/stdc++.h>
#include <vector>

using namespace std;
using ll = long long;

// <xay dung cau hinh dau tien>

// while(<chua phai cau hinh cuoi cung>)
// {
//     in ra cau hinh hien tai
//     sinh ra cau hinh ke tiep
// }

// sinh xau nhi phan co do dai n

int n;
int x[100]; //luu cac bit so nhi phan

void khoitao()
{
    //cau hinh ban dau la cac bit 0
    for(int i = 1; i <= n; i++)
    {
        x[i] = 0;
    }
}

bool ktra() //kiem tra xem co phai cau hinh cuoi hay khong
{
    for(int i = 1; i <= n; i++)
    {
        if(x[i] == 0)
            return false;
    }
    return true;
}

void sinh()
{
    //bat dau tu bit cuoi cung trong cau hinh
    int i = n;
    while(i >= 1 && x[i] == 1)
    {
        x[i] = 0;
        --i;
    }
    //tim duoc bit dau tien = 0 tinh tu ben phai
    x[i] = 1;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        khoitao();
        while(ktra() == false)
        {
            for(int i = 1; i <= n; i++)
            {
                cout << x[i];
            }
            cout << " ";
            sinh();
        }
        for(int i = 1; i <= n; i++)
        {
            cout << x[i];
        }
        cout << endl;
    }
}