# include  < iostream >
# include  < math.h >
# include  < locale >

// Quest�o 1 prova 1 (Euclidiana)
usando  espa�o para nome  std ;

float  DistanciaEuclidiana ( float px, float py, float qx, float qy)
{
    setlocale (LC_ALL, " portugu�s " );
    flutuador d;
// d = sqrt (pow (px-py), 2 + pow (py-qy), 2);
    d = sqrt ( pow ((px-qx), 2 ) + pow ((py-qy), 2 )); // F�rmula para calcular a dist�ncia Euclidiana.
    cout << d;

}
int  main ()
{
    setlocale (LC_ALL, " portugu�s " );
    px flutuante , py, qx, qy;

    cout << " Informe os Dois pontos P " << endl;
    cout << " Digite o valor de Px " << endl;
    cin >> px;
    cout << " Digite o valor do Py " << endl;
    cin >> py;

    cout << " \ n " ;
    cout << " Agora informe os dois pontos Q " << endl;
    cout << " Digite o valor de Qx " << endl;
    cin >> qx;
    cout << " Digite o valor de Qy " << endl;
    cin >> qy;
    cout << " \ n " ;
    cout << " A distancia Euclediana entre os pontos P e Q �: " << endl;
    DistanciaEuclidiana (px, py, qx, qy); // Chamando a Fun��o



    retornar  0 ;
}
