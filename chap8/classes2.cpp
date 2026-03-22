/*
defining a class called Vehicle which stores
information about a vehicle like the number of passengers it can carry,
its fuel capacity and average fuel consumption
*/

class Vehicle
{
public:
    int passengers; //number of passengers
    int fuelcap; // fuel capacity in gallons
    int mpg; //fuel consumption in miles per gallon
};

/*
A class definition creates a new data type in this case called Vehicle.
A class declaration is only a type description, it does not create an actual object.
Thus  the preceding code does not cause any object of type Vehicle to come into existence.

To actually create a Vehicle object, we simply use a declaration statement
Vehicle minivan;//creates a Vehicle object called minivan.

After this statement executes, minivan will be an instance of Vehicle.
Thus, it will have "physical" reality.
Each time we create an instance of a class,we are creating an object that contains its own copy of
each instance variable defined by the class.
To access these variables, we will use the dot (.) operator.
The dot operator links the name of an object with the name of a member.
The general form of a the dot operator is shown here:
object.member

Thus, the object is specified on the left, and the member is put on the right.
For example, assign the fuelcap variable of minivan the value 16, use the following statement
minivan.fuelcap = 16;

*/
