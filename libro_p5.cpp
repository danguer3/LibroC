#include<iostream>
#include "libro_p5.h"
using namespace std;

LibroCalificaciones::LibroCalificaciones(string nombre)
    :nombreCurso ( nombre )
  {

  }

  void LibroCalificaciones::establecerNombreCurso(string nombre)
  {
    if(nombre.size() <= 25)
    {
      nombreCurso = nombre;
      cout<<"No mamo";
    }
    if(nombre.size() > 25)
    {
      nombreCurso = nombre.substr(0,25);
      cerr<<"El nombre \""<<nombre<<"\"excede la longitud maxima (25).\n"
      "Se limito a los primeros 25 caracteres.\n"<< endl;
      cout<<"Ya mamo";
    }

  }


  string LibroCalificaciones::obtenerNombreCurso() const
  {
    return nombreCurso;
  }


  void LibroCalificaciones::mostrarMensaje() const
  {
   cout << "Bienvenido al Libro de libro de Calificaciones de "
    << obtenerNombreCurso() << "!"<< "\n";
  }
