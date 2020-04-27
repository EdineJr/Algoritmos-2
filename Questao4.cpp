# include  < iostream >
# include  < math.h >
# include  < locale >

// Quetão 4
// MultiplicaRec e MultiplicaNormal

usando  espaço para nome  std ;

long  int  multiplica ( int x, int y)
{
    long  int res = 0 ;
    enquanto (y! = 0 )
    {
        res = res + x;
        y--;
    }
    return res;
}

long  int  multiplica_recursivo ( int x, int y)
{
    se (x == 0 )
    {
        retornar  0 ;
    }
    outro
    {
        retornar x + multiplica (x, y- 1 );
    }

}

int  main ()
{
    cout << " Resultado Interativo: " << multiplica ( 4 , 650 ) << endl;
    cout << " Resultado Recursivo: " << multiplica_recursivo ( 4 , 650 ) << endl ;;
    retornar  0 ;
}
