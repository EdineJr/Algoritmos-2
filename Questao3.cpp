# include  < iostream >
# include  < locale >
# include  < locale >

// Quet�o 3
// M�dia ponderada ou aritm�tica

usando  espa�o para nome  std ;

 m�dia flutuante ( float n1, float n2, float n3, char TCalc)
{
    setlocale (LC_ALL, " portugu�s " );
    flutuar MediaA = 0 , MediaP = 0 ;
    if (TCalc == ' A ' || TCalc == ' a ' )
    {
        MediaA = (n1 + n2 + n3) / ( 3 );
        cout << " \ n " ;
        cout << " A M�dia Aritm�tica do Aluno �: " << MediaA << endl;
    }
     caso contr�rio, se (TCalc == ' P ' || TCalc == ' p ' )
    {
        MediaP = (n1 * 0,5 + n2 * 0,3 + n3 * 0,2 ) / ( 0,5 + 0,3 + 0,2 );
        cout << " \ n " ;
        cout << " A M�dia Ponderada de Aluno �: " << MediaP << endl;
    }
    outro
    {
        cout << " Voc� digitou uma op��o Inv�lida " << endl;
    }

}

int  main ()
{
    setlocale (LC_ALL, " portugu�s " );
    flutuador n1, n2, n3;
    char TCalc;

    cout << " Informe sua nota 1 " << endl;
    cin >> n1;
    cout << " Informe sua nota 2 " << endl;
    cin >> n2;
    cout << " Informe sua nota 3 " << endl;
    cin >> n3;
    cout << " Informe se voc� deseja Calcular a m�dia aritm�tica ou ponderada (Digite A-para aritm�tica ou P-para ponderada) " << endl;
    cin >> TCalc;
    M�dia (n1, n2, n3, TCalc);

    retornar  0 ;
}
