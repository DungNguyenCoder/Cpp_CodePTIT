#include <bits/stdc++.h>
using namespace std;

int idxKhachHang = 1;
int idxMatHang = 1;
int idxHoaDon = 1;

class KhachHang;
class MatHang;
class HoaDon;

map<string, KhachHang> KH;
map<string, MatHang> MH;

class KhachHang
{
private:
    string maKhachHang, tenKhachHang, gioitinh, ngaysinh, diachi;

public:
    friend class HoaDon;

    friend istream &operator>>(istream &in, KhachHang &a)
    {
        a.maKhachHang = "KH";
        if (idxKhachHang < 10)
            a.maKhachHang += "00" + to_string(idxKhachHang);
        else
            a.maKhachHang += "0" + to_string(idxKhachHang);
        ++idxKhachHang;
        getline(in >> ws, a.tenKhachHang);
        getline(in, a.gioitinh);
        getline(in, a.ngaysinh);
        getline(in, a.diachi);
        KH[a.maKhachHang] = a;
        return in;
    }

    string getTenKhachHang() const { return tenKhachHang; }
    string getDiaChi() const { return diachi; }
};

class MatHang
{
private:
    string maMatHang, tenMatHang, donViTinh;
    int giaMua, giaBan, loiNhuan;

public:
    friend class HoaDon;

    friend istream &operator>>(istream &in, MatHang &a)
    {
        a.maMatHang = "MH";
        if (idxMatHang < 10)
            a.maMatHang += "00" + to_string(idxMatHang);
        else
            a.maMatHang += "0" + to_string(idxMatHang);
        ++idxMatHang;
        getline(in >> ws, a.tenMatHang);
        getline(in, a.donViTinh);
        in >> a.giaMua >> a.giaBan;
        a.loiNhuan = a.giaBan - a.giaMua;
        MH[a.maMatHang] = a;
        return in;
    }

    string getTenMatHang() const { return tenMatHang; }
    string getDonViTinh() const { return donViTinh; }
    int getGiaMua() const { return giaMua; }
    int getGiaBan() const { return giaBan; }
    int getLoiNhuan() const { return loiNhuan; }
};

class HoaDon
{
private:
    string maHoaDon, maKhachHang, maMatHang;
    int soLuong;

public:
    friend istream &operator>>(istream &in, HoaDon &a)
    {
        a.maHoaDon = "HD";
        if (idxHoaDon < 10)
            a.maHoaDon += "00" + to_string(idxHoaDon);
        else
            a.maHoaDon += "0" + to_string(idxHoaDon);
        ++idxHoaDon;
        in >> a.maKhachHang >> a.maMatHang >> a.soLuong;
        return in;
    }

    friend ostream &operator<<(ostream &out, const HoaDon &a)
    {
        out << a.maHoaDon << " ";
        out << KH[a.maKhachHang].getTenKhachHang() << " " << KH[a.maKhachHang].getDiaChi() << " ";
        out << MH[a.maMatHang].getTenMatHang() << " ";
        out << a.soLuong << " " << 1ll * MH[a.maMatHang].getGiaBan() * a.soLuong << " ";
        out << a.soLuong * (MH[a.maMatHang].getLoiNhuan()) << endl;
        return out;
    }

    static bool cmp(const HoaDon &a, const HoaDon &b)
    {
        int loiNhuanA = MH[a.maMatHang].getLoiNhuan() * a.soLuong;
        int loiNhuanB = MH[b.maMatHang].getLoiNhuan() * b.soLuong;
        if (loiNhuanA != loiNhuanB)
            return loiNhuanA > loiNhuanB;
        return MH[a.maMatHang].getTenMatHang() > MH[b.maMatHang].getTenMatHang();
    }
};

void sapxep(HoaDon a[], int k)
{
    sort(a, a + k, HoaDon::cmp);
}

int main()
{
    KhachHang dskh[25];
    MatHang dsmh[45];
    HoaDon dshd[105];
    int N, M, K, i;
    cin >> N;
    for (i = 0; i < N; i++)
        cin >> dskh[i];
    cin >> M;
    for (i = 0; i < M; i++)
        cin >> dsmh[i];
    cin >> K;
    for (i = 0; i < K; i++)
        cin >> dshd[i];

    sapxep(dshd, K);

    for (i = 0; i < K; i++)
        cout << dshd[i];
    return 0;
}