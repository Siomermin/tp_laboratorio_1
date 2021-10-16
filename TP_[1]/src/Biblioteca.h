/*
 * Biblioteca.h
 *
 *  Created on: 20 sept 2021
 *      Author: Mermin
 */

#ifndef BIBLIOTECA_H_
#define BIBLIOTECA_H_

// Biblioteca.h de funciones matematicas.

/// \fn int SumaOperandos(int, int)
/// \brief Calcula la suma de dos n�meros enteros.
/// \param operando1 Es el operando de la opcion 1 que ingres� el usuario.
/// \param operando2 Es el operando de la opcion 2 que ingres� el usuario.
/// \return El resultado de la suma de los dos operandos.
int SumaOperandos(int operando1, int operando2);

/// \fn int RestaOperandos(int, int)
/// \brief Calcula la resta de dos n�meros enteros.
/// \param operando1 Es el operando de la opcion 1 que ingres� el usuario.
/// \param operando2 Es el operando de la opcion 2 que ingres� el usuario.
/// \return El resultado de la resta de los dos operandos.
int RestaOperandos(int operando1, int operando2);

/// \fn int DivisionOperandos(int, int, float*)
/// \brief Calcula la divisi�n de dos n�meros enteros y contempla que no se divida por 0, el resultado de la divisi�n se devuelve por referencia.
/// \param operando1 Es el operando de la opcion 1 que ingres� el usuario.
/// \param operando2 Es el operando de la opcion 2 que ingres� el usuario.
/// \param refDivision direcci�n de la variable donde se guarda el resultado de la divisi�n.
/// \return Retorna si hubo algun error a la hora de hacer la divisi�n.
int DivisionOperandos(int operando1, int operando2, float* refDivision);

/// \fn int MultiplicacionOperandos(int, int)
/// \brief Calcula la multiplicaci�n de dos n�meros enteros.
/// \param operando1 Es el operando de la opcion 1 que ingres� el usuario.
/// \param  operando2 Es el operando de la opcion 2 que ingres� el usuario.
/// \return El resultado de la multiplicaci�n de los operandos.
int MultiplicacionOperandos(int operando1, int operando2);

/// \fn int CalcularFactorial(int)
/// \brief Calcula el factorial de un n�mero entero, adem�s contempla que el n�mero ingresado no sea menor a cero.
/// \param operando Es uno de los operandos que ingres� el usuario.
/// \return El resultado del factorial. Si el resultado es igual a cero, significa que el factorial no pudo realizarse.
int CalcularFactorial(int operando);


#endif /* BIBLIOTECA_H_ */
