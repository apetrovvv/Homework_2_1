#include <iostream>

using namespace std;

int main(){
    setlocale(LC_ALL, "ru-RU");
    enum class mouth{
        jan = 1,
        fab,
        march,
        apr, 
        may,
        jun,
        jul,
        aug,
        sep,
        oct,
        nov,
        dec
    };
    cout << "Введите номер месяца: ";
    int num = 0;
    cin >> num;
    string out = "";
    while (num != 0){
        switch (num)
        {
        case 1:
            out = "Январь";
            break;
        case 2:
            out = "Февраль";
            break;
        case 3:
            out = "Март";
            break;
        case 4:
            out = "Апрель";
            break;
        case 5:
            out = "Май";
            break;
        case 6:
            out = "Июнь";
            break;
        case 7:
            out = "Июль";
            break;
        case 8:
            out = "Август";
            break;
        case 9:
            out = "Сентябрь";
            break;
        case 10:
            out = "Октябрь";
            break;
        case 11:
            out = "Ноябрь";
            break;
        case 12:
            out = "Декабрь";
            break;
        default:
            out = "Неправильный номер!";
            break;
        }
        cout << out << endl;
        cout << "Введите номер месяца: ";
        cin >> num;
    }
}