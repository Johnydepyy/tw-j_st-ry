//www.algorytm.edu.pl
#include <bits/stdc++.h>
using namespace std;
 
struct graf{
  bool stos; //czy dodany na stos
 
  vector <vector <char> >polaczenia; //do przechowywania połączeń
  // dodatkowe opcje
}*w; 
 
void odwiedz(int n)
{
  //wykonaj jakies czynnosci
  //w przypadku odwiedzenia wierzcholka o numerze n
  cout<<"Odwiedzono wierzchołek o numerze: "<<n<<endl;
}
 
 long long n, p;
 char a, b;
int main()
{
  cin>>n;
  w = new graf [n+1];
  cin>>p;
 
  for(int i=0;i<p;i++)
  {
    cin>>a>>b;
    w[a].polaczenia.push_back(b); 
    w[b].polaczenia.push_back(a); 
  }
  
  stack<int> stos;    
  stos.push(n);  
 
  while(!stos.empty()) 
  {
    n = stos.top(); 
 
      stos.pop(); 
      odwiedz('S'); 
      for(int i=0;i<w[n].polaczenia.size();i++)
        if(!w[w[n].polaczenia[i]].stos)
        {
          stos.push(w[n].polaczenia[i]);
          w[w[n].polaczenia[i]].stos = 1; 
          //cout<<"Dodano na stos wierzcholek nr "<<w[n].polaczenia[i]<<endl;
        }
  }  
 
  delete [] w;
  return 0;
}