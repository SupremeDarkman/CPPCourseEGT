1.Describe what the following line of C++ code does : int* ptr = &var; .
Това е указател от тип инт с име на променливата ptr, която присвоява адреса на друга променлива var.

This is a pointer of type int which is called ptr which uses the assignment operator to assign the address from a different variable.

2.Explain the difference between a while loop and a do - while loop in C++;
При while първо се изпулнява условието.В зависимост от което влиза в тялото на while, ако е true или не, ако е false.
Do - while право точно обратното.При него се изпълнява със сигурност веднъж преди да провери условието.

With while you check the condition whether is correct or false, and if so it enters the body of the while or not.
Do - while executes the body first and then checks the condition whether it is true.
int eggs = 5;
while (i > 10)
{
    DontMakeCake();
    eggs++;
}
int i = 3;
do
{
    MakeCake();
} while (i > 234);

3.Given a snippet of C++ code containing a for loop, explain what the loop does, including how many times it iterates and why.
For цикъла изпълнява дадено парче код, определен брой пъти, в зависимост от условието.При всяка итерация i бива проверено докато не стигне десет.Също така се инкрементира с единица при всяка интереция, което помага да излезе от цикъла и да не е безкраен.
Следния код ще отпечата слядо числата от 1 до 10.

For loop gives us the ability to repeat code n times depending on the condition given.Every iteration the condition is being checked and i is being incremented.The code underneath will print the numbers from 1 to 10 without spaces.
for (int i = 0; i < 10; ++i)
{
    std::cout << i;
}

4.Write about how functions prevent vode duplivation and give an example of a simple C++ function that calculates the square of a number.
Вместо да повтаряне на парче код можем да изкараме парчето код във фунцкия, което позволява следните две неща :
-По - малко писане и лесно четим код;
-Лесна корекция при необходимост.

Functions help by putting in them the code which is being repeated.Which helps with less writing, more readability and easier rediting.
void CalculateTheSquareOfN(int n)
{
    return n * n;
}

5.Discuss the importance of memory management in C++ and explain the difference between stack and heap memory allocation.
Разликата между стековата(автоматична) памет и динамичната е, че при стековата тя е последователна и се отделя памет по следния начин, int i.При динамичната памет тя вече се намира в рамта и не е последователна.Тя трябва да се изтрие след заделянето ѝ ръчно, при стековата се изтрива сама, иначе ще доведе до течове на памет(заделен динамично масив : const unsigned n = 3; int* array = new int[n];)

The stack memory is easier to manage because it is deleting automatically.As well as it is being consecutive in the momery.Where as the heap memory is not consecutive and is in the RAM, it needs its own management for deleting it(delete[] array;).

6.Explain the concept of encapsulation in C++ and how it is achieved using classes.
Енкапсулацията е важна част от Обектно Ориентираното Програмиране(ООП).Помага да се крият член данните на класа и да не се виждат от всичко, освен класа чрез поставянето им след private:.Достъпват се чрез функции, които прекъсват дирекната връзка.

Encapsulation is the consept of hiding the member variables or/ and functions from the outside world.They are being called through different, public:, methods.
    class Example
{
public:
    void getA() const;
private:
    int a;
}
7.Describe how exceptions are used in C++ for error handling, with an example of try - catch block.
Хващането на грешки е важно, защото помага програмата ни да продължава или да бъде безопастно затворена / запазена вмето да крашне.Също така помага да остановяване на възникналия проблем.

Exceptions are being threw so they can be catched later somewhere else who can hangle them(correctly).That is done so the program do not crash badly.

try {
    int eggs = 5;
    if (eggs >= 10) {
        cout << "Not enough eggs.";
    }
    else {
        throw (eggs);
    }
}
catch (int myEggs) {
    cout << "You need at least 10 eggs for a cake";
    cout << "Eggs are: " << myEggs;
}

8.Write about the purpose and use of the std::vector container in C++
Целта на std::vector е да запази поредица от един и същи тип данни и се използва всекидневно.

The main perpose of std::vector is to store data of the same kind so it can be accessed later or just to be group with the else.
It can be from complex data as object as well.

std::vector<Cake> cakes;

9.Discuss the difference between pointers and references in C++ and provide scenarios where one might be preferred over the other.
Указателят сочи към адрес на друга променлива(int* ptr = &a) докато референцията сложена пред променлива взема адреса ѝ.Когато се подават на функция референцията служи за директен достъп до променливата без да прави нейно копие, а когато се подава указател примерно към обект, той заема по - малко място, което е положителен ефект и сочи към поредица от парче памет в паметта.

Pointers are pointing to the address of a other variable whereas the reference provides the address of the variables which is put in front of.When passing them to funcitons the references helps avoiding copies(if not needed or not essential) and pointers points towards the start of the memory which is been allocated earlier.

void passingObj(Book & book)
{
}
Не прави копия.
It does not make copies.

void passingArray(int* array, unsigned size)
{
}
Директно сочи към началото на масива(има си и подаден размер)
Directly pointing to the beginning.

10.Explain the concept of templates in C++ and how they support generic programming.Include a simple expample of a template funcion.
Template служи като шаблон.Прави се шаблон на типа, така че да може да се ползва след това и за други типове.

Passing the data type as a parameter so that we don’t need to write the same code for different data types.

template <typename T>
T Max(T a, T b)
{
    return (a > b) ? a : b;
}

https://www.geeksforgeeks.org/templates-cpp/