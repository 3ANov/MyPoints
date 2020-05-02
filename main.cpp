//Первая программа в которой используются классы.
//Создаётся класс MyPoint который описывает точку.
//Программа должна по координатам определить точку ,расположенную дальше от точки (0,0).
////////////////////////////////////////////////////////////////

#include "MyPoint.h";
#include "header.h";

int main() {
	setlocale(LC_ALL,"rus");

    //MyPoint pt1(1,2);
	MyPoint pt2(2,1);

	MyPoint pt1;
    //MyPoint pt2;

	float x,y;


	char errstr[]="Ошибка ввода \n";
	cout<<'\n';

	pt1.showXY();
	pt2.showXY();

	cout<<'\n';

    //ввод координат первой точки
	cout<<"Введите координаты первой точки \n"
	<<"1 - Абсцисса \n"
	<<"2 - Ордината \n";
	cin>>x;
	cin>>y;


    try {
        if(!cin.good())//проверка ввода
            throw(errstr);

        pt1.setXY(x, y);
    }

    catch(const char *err) {
        cerr<<endl<<errstr<<endl;
        exit(0);
    }

    //ввод координат второй точки
    cout << "Введите координаты второй точки \n"
         << "1 - Абсцисса \n"
         << "2 - Ордината \n";
    cin >> x;
    cin >> y;;


    try {
        if(!cin.good())//проверка ввода
            throw(errstr);

        pt2.setXY(x,y);
    }

    catch(const char *err) {
        cerr<<endl<<errstr<<endl;
        exit(0);
    }

    //расчёт расстояния
    double r1=sqrt( pow(pt1.getX(),2)+pow(pt1.getY(),2) );
    double r2=sqrt( pow(pt2.getX(),2)+pow(pt2.getY(),2) );

    if (r1 > r2) {
        cout<<"Первая точка расположена дальше от начала координат,чем вторая \n";
    } else if (r1 == r2) {
        cout<<"Первая и вторая точка расположены на одинаковом расстоянии от центра \n";
    } else {
        cout<<"Вторая точка расположена дальше от начала координат,чем первая \n";
    }

    cout<<'\n';

    return 0;
}
