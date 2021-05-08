/*
ایک پرُگرام‌ جیسه ھملُگ ایک رِندم نمبر نیکال  سکتِ ھای. کلمَت : رایجین ھاکوز 
*/
#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char *argv[]) {
        srand(time(0));
        int number = rand() % 100 + 1;
        cout << "Generated random number : " << number << endl;
        return 0;
}
