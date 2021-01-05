1 задание:
#include<iostream>
#include<math.h>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    if (a == b) {
        a = 0;
        b = 0;

    }
    else{
        if (a > b) b = a;
        else a = b;

    }
    cout << a << " "<< b;
}
2 задание:
#include<iostream>
#include<math.h>
using namespace std;
int main() {
    double a, b, c, MIN;
    cin >> a >> b >> c;
    MIN = min(a, min(b, c));
    cout << a + b + c - MIN;
}
3 задание:
#include<iostream>
#include<math.h>
using namespace std;
int main() {
    double x1, x2, x3, y1, y2, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    double ab = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    double ac = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
    if (ab < ac) cout << "B - " << ab;
    else cout << "C - " << ac;
}
4 задание:
#include<iostream>
#include<math.h>
using namespace std;
int main() {
    int x, y;
    cin >> x >> y;
    if (x > 0 && y > 0) cout << "1";
    else if (x < 0 && y>0) cout << "2";
    else if (x < 0 && y < 0) cout << "3";
    else cout << "4";
}
5 задание:
#include<iostream>
#include<math.h>
using namespace std;
int main() {
    setlocale(LC_ALL, "rus");
    int x;
    cin >> x;
    if (x > 0) cout << "Положительное ";
    else if (x < 0) cout << "Отрицательное ";
    if (x % 2 == 0 && x != 0) cout << "чётное ";
    else if (x % 2 != 0 && x != 0)cout << "нечётное ";
    if (x == 0) cout << "Нулевое ";
    cout << "число";
}
6 задание:
#include<iostream>
#include<math.h>
using namespace std;
int main() {
    setlocale(LC_ALL, "rus");
    int x;
    cin >> x;
    if (x % 2 == 0) cout << "Чётное ";
    else cout << "Нечётное ";
    if (x < 10) cout << "однозначное ";
    else if (x > 9 && x < 100) cout << "двузначное ";
    else cout << "трёхзначное ";
    cout << "число";
}
