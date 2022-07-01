

#include<iostream>
#include "libro_p5.h"
using namespace std;




int main()
{
  LibroCalificaciones libroCalificaciones1("Matematicas 1A");
  LibroCalificaciones libroCalificaciones2("Robotica 5B");
  string nombreDelCurso;
  //cout << "El nombre inicial del curso es: "
  //<< miLibroCalificaciones.obtenerNombreCurso() << endl;


  cout << "libroCalificaciones1 se creo para el curso: "
  << libroCalificaciones1.obtenerNombreCurso() << "\n"
  << "libroCalificaciones2 se creo para el curso: "
  << libroCalificaciones2.obtenerNombreCurso() << "\n" <<endl;
  getline(cin, nombreDelCurso);
  libroCalificaciones1.establecerNombreCurso(nombreDelCurso);

  cout<<endl;
  //miLibroCalificaciones.mostrarMensaje();
}
