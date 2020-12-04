#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  int skaiciusSkyriu, kiekPerskaite(1), kiekLiko(0), dienos(1);
  float vid;
  cout<<"Iveskite knygos skyriu skaiciu: ";
  cin>>skaiciusSkyriu;
  kiekLiko=skaiciusSkyriu;
    do
    {
      cout<<"Per "<<dienos<<" -aja diena perskaite: "<<kiekPerskaite<<" skyriu(-s). ";
      kiekLiko=kiekLiko-kiekPerskaite;
      cout<<"Liko "<<kiekLiko<<" skyriai."<<endl;
      dienos++;
      kiekPerskaite++;
        if(kiekLiko<kiekPerskaite){
      cout<<"Per "<<dienos<<" -aja diena perskaite: "<<kiekLiko<<" skyriu(-s). ";
      cout<<"Liko "<<"0"<<" skyriai."<<endl;
      }
    }
     while (kiekLiko>kiekPerskaite);
     cout<<"Tadas visa knyga perskaite per "<<dienos<<" dienas."<<endl;
     vid = (float)skaiciusSkyriu/dienos;
     cout<<"Tadas vidutiniskai per diena perskaite "<<vid<<" skyrius(-iu).";

return 0;
}


