#include <iostream>
using namespace std;

int log(string login) {
    int time = 0;
    string supposedpassword;
    string password = "cringe";
    while (time < 3) {
        cout << "Введите пароль: ";
        cin >> supposedpassword;
        if (supposedpassword == password) {
            cout << "Регистрация прошла успешно!";
            time = 3;
            
        }
        else {
            cout << "Неверный пароль. " << "Попробуйте еще раз. ";
            if (time == 2)
            throw "Очень жаль. ";
            
        }
        time++;
        
    }
    return 0;
}

int main() {
    string login;
    cout << "Добро пожаловать! Введите Ваш логин: " << " ";
    cin >> login;
    try {
        log(login);
        
    }
    catch (const char* fall) {
        cout << fall << " " << "Введите пароль повторно через 10 минут. ";
        
    }
}
