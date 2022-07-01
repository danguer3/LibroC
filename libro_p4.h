#include<iostream>
#include<string>

class LibroCalificaciones
{
public:
  explicit LibroCalificaciones(std::string nombre)
    :nombreCurso ( nombre )
  {

  }

  void establecerNombreCurso(std::string nombre)
  {
    nombreCurso = nombre;
  }


  std::string obtenerNombreCurso() const
  {
    return nombreCurso;
  }


  void mostrarMensaje() const
  {


    std::cout << "Bienvenido al Libro de libro de Calificaciones de "
    << obtenerNombreCurso() << "!"<< "\n";
  }
private:
  std::string nombreCurso;
};
