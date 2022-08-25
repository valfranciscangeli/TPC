int n;
cin>>n;

// Con esta línea creamos un vector de tamaño n
vector<int> a(n);

// Con este for leemos los n valores
for (int i=0;i<n;i++){
	cin>>a[i];
}

// En general, este for es muy utilizado para trabajar con estos vectores
// Por ejemplo, si queremos la suma
int suma = 0;
for (int i=0;i<n;i++){
	suma += a[i];
}
