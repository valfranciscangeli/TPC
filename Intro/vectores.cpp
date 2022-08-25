// Para crear un vector tenemos que poner su tipo entre < >
// Entre ( ) ponemos el tamaño y los valores iniciales
vector<int> nums(10 , 42);
// Aquí creamos un vector de 10 números que parten con valor 42 que se llama nums

// Los valores de este vector están indexados desde 0
// Podemos acceder a ellos con nums[0], nums[1]... nums[9]
// Con este for podemos imprimir todos los números
// En este caso 10 veces 42
for (int i=0;i<10;i++){
	cout<<nums[i]<<' ';
}
cout<<'\n';

// Con esta línea podemos cambiar el primer elemento a 5
nums[0] = 5;

// Con esta línea agregamos el elemento número 11 de valor 13
nums.push_back(13);

// Con esta línea podemos imprimir el tamaño que ahora es 11
cout<<nums.size()<<'\n';

// Con esta línea podemos cambiar el tamaño a 5
// Los elementos sobre este tamaño son eliminados
nums.resize(5);

// Con esta línea podemos cambiar el tamaño y los valores del arreglo
// Como si estuvieramos inicializándolo de nuevo
nums.assign(42,10);
// Ahora el arreglo tiene 42 veces el número 10

// Con esta línea podemos eliminar todos los valores del arreglo
// Queda con tamaño 0
nums.clear();

// Con esta línea podemos revisar si el vector está vacío
if (nums.empty()){
	cout<<"El arreglo está vacío\n";
}


//Aquí hicimos un vector de números, pero cualquier tipo de variable puede estar en un vector: strings, doubles, etc..

