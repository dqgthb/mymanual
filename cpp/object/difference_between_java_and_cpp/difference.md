# difference between java and cpp objects
``` c++
#include<iostream>
using namespace std;

class myclass{
public:
    int x;
    int y;
    myclass()x:5, y:6{};
};

int main(){
    myclass myobj; // declare class on stack
    myclass *myobjp = new myclass();
    // for java, this is equivalent to
    //myclass myjavaobj = new myclass();
    // that is, we can assume that all kinds of objects are actually pointers in java
    // For java, the pointer operator * is implicitly declared in front of every object name.

    swap(myobj); // has no effect
    swap(myobjp); // works
    // swap(myjavaobj); // works
    delete myobjp; //free the heap memory
    myobjp = nullptr; // don't use the address anymore.
}

void swap(myclass obj){ // has no effect since obj is just copied to this stack.
    int t = obj.x;
    obj.x = obj.y;
    obj.y = t;
}

void swap(myclass *objp){ // works, since the pointer containing the address of heap object is copied.
    int t = objp->x;
    objp->x = objp->y;
    objp->y = t;
}

/* // The above function is equivalent to this in java
void swap(myclass obj){
     int t = obj.x;
     obj.x = obj.y;
     obj.y = t;
}
*/
```



