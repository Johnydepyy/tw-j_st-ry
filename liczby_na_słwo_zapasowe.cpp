#include <iostream>
using namespace std;
long long n;
int ml, tys, set;
void pot_wartosc(long long  oile, string slowo)
{
	while(n >= oile)
		{
			n -= oile;
			cout<<slowo<<" ";
		}
}


int main ()
{
	ios_base::sync_with_stdio(0);
	cin>>n;
	if(n == 0){
	
		cout<<"zero";}
	else
		{

			pot_wartosc(5000,"piec tysiac");
			pot_wartosc(4000,"cztery tysiac");
			pot_wartosc(3000,"trzy tysiac");
			pot_wartosc(2000,"dwa tysiac");
			pot_wartosc(1000,"tysiac");
			pot_wartosc(900,"dziewięcset");
			pot_wartosc(800,"osiemset");
			pot_wartosc(700,"siedemset");
			pot_wartosc(600,"szescset");
			pot_wartosc(500,"piecset");
			pot_wartosc(400,"czteryset");
			pot_wartosc(300,"trzysta");
			pot_wartosc(200,"dwiescie");
			pot_wartosc(100,"sto");
			pot_wartosc(90,"dziewięcdziesiat");
			pot_wartosc(80,"osiemdziesiat");
			pot_wartosc(70,"siedemdziesiat");
			pot_wartosc(60,"szesdziesiat");
			pot_wartosc(50,"piecdziesiat");
			pot_wartosc(40,"czterdziesci");
			pot_wartosc(30, "trzydziesci");
			pot_wartosc(19,"dziewietnascie");
			pot_wartosc(18,"osiemnascie");
			pot_wartosc(17,"siedemnascie");
			pot_wartosc(16,"szesnascie");
			pot_wartosc(15,"pietnascie");
			pot_wartosc(14,"czternascie");
			pot_wartosc(13,"trzynascie");
			pot_wartosc(12,"dwanascie");
			pot_wartosc(11,"jedenascie");
			pot_wartosc(10,"dziesiec");
			pot_wartosc(9, "dziewiec");
			pot_wartosc(8, "osiem");
			pot_wartosc(7, "siedem");
			pot_wartosc(6, "szesc");
			pot_wartosc(5,"piec");
			pot_wartosc(4, "cztery");
			pot_wartosc(3, "trzy");
			pot_wartosc(2, "dwa");
			pot_wartosc(1, "jeden");
		}
}



