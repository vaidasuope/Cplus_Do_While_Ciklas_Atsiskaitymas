#include <iostream>
using namespace std;
int main()
{
   int skaicius, kiekSkaitmenu(0), kitasSkaicius, liekana, sandauga(1);
   cout<<"Iveskite sugalvota bet koki skaiciu: "; cin>>skaicius;
   kitasSkaicius = skaicius;
   while(skaicius>0)
   {
       liekana = skaicius % 10;
       skaicius = skaicius / 10;
       if (liekana%2==0 && liekana!=0){
       sandauga = sandauga * liekana;
       }
       kiekSkaitmenu++;
   }
   cout<<"Jusu ivestas skaicius "<<kitasSkaicius<<" sudarytas is "<<kiekSkaitmenu<<" skaitmenu.";
   cout<<"\nSio skaiciaus lyginiu skaiciu, kurie nelygus 0, sandauga yra "<<sandauga<<".";

   return 0;
}
