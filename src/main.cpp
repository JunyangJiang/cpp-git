#include <iostream>
#include <commands.hpp>
#include <git_objects.hpp>


int main(void) {
    /* ********* Scratch	********* */
    test_function();
    /* try { */
    /*     auto val = fs::file_size("test.file"); */
    /*     std::cout << val << std::endl; */
    /* } catch (fs::filesystem_error& ex) { */
    /*     std::cout << ex.what() << '\n'; */
    /* } */
    /* for(auto &p:fs::directory_iterator(".")) */
    /*     std::cout << p.path().extension() << std::endl; */

    //constructs a path object, and checks if it exists in filesystem
    /* fs::path Path("src"); */
    /* std::cout << "Does path exists?" << fs::exists(Path) << std::endl; */
    //gets parent path of the path object
    /* std::cout << Path.parent_path() << std::endl; */
    //adds two paths together
    /* std::cout << Path / fs::path("hello") << std::endl; */


    /* ********* Main	********* */
    try{
        // where the interpreter code goes
    } catch (char const*e){
        std::cout << e << std::endl;
    }

}
