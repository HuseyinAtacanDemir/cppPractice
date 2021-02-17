#include<iostream>

int main(){
    using std::cout;
    cout << "hello world\n";
    //return 0; it would work without the return 0 also
}
//this gives error cause test func cannot see cout, it was declared in the main.
void test(){
    cout << "test\n";
}

/*

std is a namespace:
    let's say two people (bill and suzan) made a func called "awesomeFunc"
    we now have a naming conflict
    they both named their functions awesomeFunc
    so we call them using namespaces

    bill::awesomeFunc
    suzan::awesomeFunc

    what about using statements:
        using namespace std; a using directive
            using namespace makes all the members of that namespace visible
        prefixing is better to prevent conflicts in big projects.

        using std::cout; this is a using declaration.
        the location we put this directive matters.
        if you put on the top with the include directives,
        it'll be seen by all the functions in the file.
        

    cout is an object of ostream class
    cin is an object of istream class



*/