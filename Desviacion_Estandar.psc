Algoritmo Ejer2_GUia4
	Escribir "Ingrese cantidad de valores"
	Leer N
	Dimension Lista[N]
	Suma = 0
	Para i = 1 Hasta N Hacer
		Escribir "Ingrese nro ",i
		Leer Lista[i]
		Suma = Suma + Lista[i]
	FinPara
	/// 1er cálculo, obtener la media
	M = Suma / N
	/// Sumatoria de cuadrados de diferencias
	SumaDS = 0
	Para i = 1 Hasta N Hacer
		SumaDS = SumaDS + (Lista[i] - M)^2
	FinPara
	/// Finalmente si hallamos la DS
	DS = RC(SumaDS / N)
	Escribir "La media es ",M
	Escribir "La DS es ",DS
FinAlgoritmo
