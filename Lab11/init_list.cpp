#include <iostream>
#include <cstring>


 class string {
   public :
     string() { std::cout << "default" << std::endl ; }
     string(const char* b) { std::cout << "convert" << std::endl ; }
     string( const string& s ) { std::cout << "copy" << std::endl ; }
     ~string() { std::cout << "destructor" << std :: endl ; }
     string& operator=(const string&)
       { std :: cout << "assign" << std :: endl ;
         return *this ;
       }
    private :
       char* buf ;
   };
   class TestAssign {
	public :
	  TestAssign ( char const* n): name(n)
	  { name=n; }
	private :
	  string name;
	};

	int main()
	{
		TestAssign test("dog");
	}
