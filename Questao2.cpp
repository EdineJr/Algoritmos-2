# include  < iostream >
# include  < locale >

// Questão 2
// Contar comunica vetor

usando  espaço para nome  std ;

void  PreencheVet ( int vet [])
{
    setlocale (LC_ALL, " português " );
    cout << " Preencha o Vetor de 5 posições " << endl;
    for ( int i = 0 ; i < 5 ; i ++)
    {
        cin >> veterinário [i];
    }
}

int  ContImpar ( int vet [])
{
    setlocale (LC_ALL, " português " );
    int aux = 0 ;
    for ( int i = 0 ; i < 5 ; i ++)
    {
        if (vet [i]% 2 == 1 )
        {
            aux ++;
        }
    }
    cout << " \ n " ;
    cout << " O vetor contém " << aux << " números ímpares " << endl;

}

int  main ()
{
    int vet [ 5 ];
    PreencheVet (veterinário);
    ContImpar (veterinário);


    retornar  0 ;
}
