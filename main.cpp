#include <iostream>
using namespace std;

int main() {
    int N, i;
    cout<<"Quanti studenti ci sono nella classe?"<<endl;
    cin>>N;
    string nome[N];
    int voto[N];
    i=0;
    while(i<N)
    {
        cout<<"Come si chiama il "<<i+1<<"° studente"<<endl;
        cin>>nome[i];
        cout<<"Che voto ha?"<<endl;
        cin>>voto[i];
        i=i+1;
    }
    i=0;
    while(i<N)
    {
        cout<<"Lo studente "<<nome[i]<<" ha voto "<<voto[i]<<endl;
        i=i+1;
    }
    float votomax;
    int imax;
    imax=0;
    votomax=voto[imax];
    i=0;
    while(i<N)
    {
        if(voto[i]>votomax)
        {
            votomax=voto[i];
            imax=i;
        }
        i=i+1;
    }
    cout<<"Il voto massimo è stato "<<voto[imax]<<" dello studente "<<nome[imax]; 
}

//LEGGERE LE ISTRUZIONI NEL FILE README.md
