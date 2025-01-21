#include <iostream>
using namespace std;

class Logger {
public:
    Logger() {
        cout << "Logger initialized." << endl;
    }
    ~Logger() {
        cout << "Logger destroyed." << endl;
    }
};

class Database {
public:
    Database() {
        cout << "Database connection established." << endl;
    }
    ~Database() {
        cout << "Database connection closed." << endl;
    }
};

class UserManager : public Logger {
public:
    UserManager() {
        cout << "UserManager initialized." << endl;
    }
    ~UserManager() {
        cout << "UserManager destroyed." << endl;
    }
};

class ProductManager : public Database {
public:
    ProductManager() {
        cout << "ProductManager initialized." << endl;
    }
    ~ProductManager() {
        cout << "ProductManager destroyed." << endl;
    }
};

class Application : public UserManager, public ProductManager {
public:
    Application() {
        cout << "Application started." << endl;
    }
    ~Application() {
        cout << "Application stopped." << endl;
    }
};

int main() {
    cout << "Creating the Application object:" << endl;
    Application app;
    cout << "End of main, object will now be destroyed:" << endl;
    return 0;
}
