int n,m;
cin>>n>>m;

// Aquí creamos una matriz de tamaño n x m
vector< vector<int> > mat( n , vector<int>(m) );

// Aquí leemos todos los valores de la matriz
// Las filas representadas por i y las columnas por j
for (int i=0;i<n;i++){
	for (int j=0;j<m;j++){
		cin>>mat[i][j];
	}
}

// Podemos aplicar todas las funciones de vectores a estas matrices
// Su tamaño nos dirá cuantas filas tiene
cout<<mat.size()<<'\n';

// Si accedemos a alguna fila, nos entrega un vector que representa la fila
// Nuevamente podemos ver el tamaño, que ahora será m
cout<<mat[0].size()<<'\n';

// Para acceder al elemento tenemos que decir su fila y columna
// Aquí imprimimos el primer elemento
cout<<mat[0][0]<<'\n';