#include <iostream>

using namespace std;

struct adress
{
    string city;
    string sreet;
    string homeNum;
    int appartNum;
    int index_;
};

void viewAdress (adress &adress_num){
cout << "Город: " << adress_num.city<< endl;
cout << "Улица: " << adress_num.sreet<< endl;
cout << "Номер дома: " << adress_num.homeNum<< endl;
cout << "Номер квартиры: " << adress_num.appartNum << endl;
cout << "Индекс: " << adress_num.index_<< endl << endl;
}

int main(){
    adress adr1 = {"Москва", "Арбат", "12", 8, 123456};
    adress adr2 = {"Ижевск", "Пушкина", "59", 143, 953769};
    viewAdress(adr1);
    viewAdress(adr2);
}