#include <iostream>
#include <string>
using namespace std;

struct students
{
    string name;
    string NumberGroup;
    string Address;
    string City;
    int mark;
};

int main()
{
    setlocale(LC_ALL, "rus");
    students  s1;
    s1.name = "Ночевный Максим Юрьевич";
    s1.NumberGroup = "21Д";
    s1.City = "Москва";
    s1.Address = "Библиотечная 5А";
    s1.mark = 19;
    if (s1.mark > 8.5 && s1.City == "Минск")
    {
        cout << "ФИО: " << s1.name << "\tНомер группы: " << s1.NumberGroup << "\tАдрес: " << s1.Address << "\t\tБалл: " << s1.mark << endl;
    }

    students s2;
    s2.name = "Лазарев Никита Сергеевич";
    s2.NumberGroup = "21Д";
    s2.City = "Минск";
    s2.Address = "Краснополянская 4";
    s2.mark = 15;
    if (s2.mark > 8.5 && s2.City == "Минск")
    {
        cout << "ФИО: " << s2.name << "\tНомер группы: " << s2.NumberGroup << "\tАдрес: " << s2.Address << "\tБалл: " << s2.mark << endl;
    }


    students s3;
    s3.name = "Лорин Иван Алексеевич";
    s3.NumberGroup = "21Д";
    s3.City = "Санкт-Петербург";
    s3.Address = "Комсомольская 4";
    s3.mark = 7;
    if (s3.mark > 8.5 && s2.City == "Минск")
    {
        cout << "ФИО: " << s3.name << "\tНомер группы: " << s3.NumberGroup << "\tАдрес: \t" << s3.Address << "Балл: " << s3.mark << endl;
    }

    return 0;

}