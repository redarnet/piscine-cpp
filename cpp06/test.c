#include <iostream> 
#include <string> 
#include <typeinfo> 
  
class A 
{ 
public: 
    virtual std::string get_type() = 0; 
}; 
  
class B : public A 
{ 
public: 
    virtual std::string get_type() { return "B"; } 
}; 
  
class C : public A 
{ 
public: 
    virtual std::string get_type() { return "C"; }; 
}; 
  
A * create_B_or_C() 
{ 
    static int nb = 0; 
    // si nb est pair, on crée un B, sinon un C 
    ++nb; 
    if ( nb % 2 == 0 ) { return new B; } 
    return new C; 
} 
  
int main() 
{ 
    for ( int i = 0; i < 5; ++i ) 
    { 
        A *a = create_B_or_C(); 
        std::cout << "Test sur un " << a->get_type() << " : "; 
  
        B *b = dynamic_cast<B*>( a ); 
        if ( b == 0 ) 
        { 
            // échec du cast en B, il doit s'agir d'un C 
            // lève std::bad_cast s'il ne s'agit pas d'un C 
            try 
            { 
                C & c = dynamic_cast<C&>( *a ); 
                std::cout << "il s'agit d'un C.\n"; 
            } 
            catch ( const std::bad_cast & ) 
            { 
                std::cout << "Oups!\n"; 
            } 
        } 
        else 
        { 
            std::cout << "il s'agit d'un B.\n"; 
        } 
        delete a; 
    } 
}
