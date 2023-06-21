

template <typename T>
class CRUDLista{
	public:
		virtual bool estaVacia()=0;
		virtual void insertar(T)=0;
		virtual void eliminar(T)=0;
		virtual bool buscar(T)=0;
		virtual void mostrar()=0;
};
