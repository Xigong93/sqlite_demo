#include <iostream>
#include "sqlite3.h"
#include <string>

using namespace std;

static int callback(void *NotUsed, int argc, char **argv, char **azColName) {
    int i;
    for (i = 0; i < argc; i++) {
        printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
    }
    printf("\n");
    return 0;
}

int main() {
    cout << "Hello, World!" << endl;
    sqlite3 *db = nullptr;
    char *errorMessage = nullptr;
    sqlite3_open("user.db", &db);
    sqlite3_exec(db, "CREATE TABLE IF NOT EXISTS user( id integer , name varchar, age integer )", callback, nullptr,
                 &errorMessage);
    cout << errorMessage << endl;
    sqlite3_exec(db, "INSERT INTO user(id,name,age) VALUES (1,'pokercc',8),(2,'kelly',9)", callback, nullptr,
                 &errorMessage);
    cout << errorMessage << endl;

    sqlite3_close(db);
    return EXIT_SUCCESS;
}