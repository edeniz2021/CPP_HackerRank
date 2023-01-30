#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class HotelRoom
{
    private:
    int bedroom;
    int bathroom;
    public:
    HotelRoom(int bed,int bad)
    {
        bedroom = bed;
        bathroom = bad;
    }
    int get_price()
    {
        return 50*bedroom + 100*bathroom;
    }
};
class HotelApartment : public HotelRoom
{
    public:
    HotelApartment(int a,int b) : HotelRoom(a+2,b)
    {
        
    }
    int get_price()
    {
        return HotelRoom::get_price()+100;
    }
};
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    vector<HotelRoom*> all;
    int a ;
    cin >> a;
    for(int i=0;i<a;i++)
    {
        int bed;
        int bad;
        string typ;
        cin >> typ >> bed >> bad;
        if(typ == "standard")
        {
            HotelRoom *rid = new HotelRoom(bed,bad);
            all.push_back(rid);
        }else 
        {
            HotelRoom *rid = new HotelApartment(bed,bad);
            all.push_back(rid);
        }
    }
    int total = 0;
    for (auto room : all)
    {
        total += room->get_price();
    }
    cout << total << endl;
    all.clear();
    return 0;
}

