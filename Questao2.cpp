# include  < iostream >
# include  < locale >

// Quest�o 2
// Contar comunica vetor

usando  espa�o para nome  std ;

void  PreencheVet ( int vet [])
{
    setlocale (LC_ALL, " portugu�s " );
    cout << " Preencha o Vetor de 5 posi��es " << endl;
    for ( int i = 0 ; i < 5 ; i ++)
    {
        cin >> veterin�rio [i];
    }
}

int  ContImpar ( int vet [])
{
    setlocale (LC_ALL, " portugu�s " );
    int aux = 0 ;
    for ( int i = 0 ; i < 5 ; i ++)
    {
        if (vet [i]% 2 == 1 )
        {
            aux ++;
        }
    }
    cout << " \ n " ;
    cout << " O vetor cont�m " << aux << " n�meros �mpares " << endl;

}

int  main ()
{
    int vet [ 5 ];
    PreencheVet (veterin�rio);
    ContImpar (veterin�rio);


    retornar  0 ;
}
