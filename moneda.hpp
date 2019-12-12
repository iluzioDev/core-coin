/// @file moneda.h
/// @brief Definiciones de la clase Moneda. Representa cualquier 
/// tipo de moneda, ya sea met�lica o en papel (billetes)
/// @author Luis Marcelo Chinea Rangel\n
/// Correo: alu0101118116@ull.es \n
/// Universidad de La Laguna \n
/// Escuela Superior de Ingenier�a y Tecnolog�a\n
/// Grado en Ingenier�a Inform�tica\n
/// Asignatura: Computabilidad y Algoritmia (CyA)\n
/// Curso: 2�\n
/// Pr�ctica #12: Algoritmos Voraces (Greedy)
/// @date 11/12/2019
/// @see Enunciado de la pr�ctica:
/// https://campusvirtual.ull.es/1920/mod/assign/view.php?id=21020
//////////////////////////////////////////////////////////////////
#pragma once
#include <iostream>
#include <string>

#include "exception.hpp"

// Medidas del euros
const string CENTIMO = "cent.";
const string EURO = "Euro";

class Moneda {
	private:
		double valor_;
	public:
		Moneda(double);
		
		double getValor() const;
		bool operator<(const Moneda&) const;
		bool operator==(const Moneda&) const;
		Moneda operator+(const Moneda&) const;
};
ostream& operator<<(ostream&, const Moneda&);