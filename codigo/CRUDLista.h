

template <typename T>
class CRUDLista{
	public:
		virtual bool vacia()=0;
		virtual void insertar(T)=0;
		virtual void eliminar(T)=0;
		virtual bool buscar(T)=0;
		virtual void imprimir()=0;
};
