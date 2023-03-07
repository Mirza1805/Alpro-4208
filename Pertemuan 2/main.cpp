/*
#include <iostream>

using namespace std;
void myFunction(){
        cout << "I just got gabut!";
    }
int main()
{
    myFunction();
    return 0;
}
*/




/*
#include <iostream>

using namespace std;
//prosedur
void mariberhitung (float x, float y){
        cout << "Luas Permukaan kubus dengan x = " << x << " dan y = " << y << " adalah = " << 6*x*y;
    }
    int main()
{
    float a,b;
    cout << "masukan x = " <<endl;
    cin >> a;
    cout << "masukan y = " <<endl;
    cin >> b;
    mariberhitung(a,b);
    int a=10,b=12;
    mariberhitung(a,b);//parameter aktual
    cout<<endl;
    mariberhitung(2,4);
    return 0;
}
*/



#include <iostream>

using namespace std;
//fungsi
float kubus (float x, float y){
        return 6*x*y;
    }
    int main(){
    float x=kubus(2.4,4.1);
    cout << x;
    return 0;
}
