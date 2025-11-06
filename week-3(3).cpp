#include<iostream>
using namespace std;

class A {
public:
    void displayA() {
        cout<<"This is class A (Base class - Single Inheritance)"<<endl;
    }
};

class B:public A {
public:
    void displayB() {
        cout<<"This is class B (Derived from A - Single Inheritance)"<<endl;
    }
};

class X {
public:
    void displayX() {
        cout<<"This is class X (Base class for Multiple Inheritance)"<<endl;
    }
};

class Y {
public:
    void displayY() {
        cout<<"This is class Y (Base class for Multiple Inheritance)"<<endl;
    }
};

class Z:public X,public Y {
public:
    void displayZ() {
        cout<<"This is class Z (Derived from X and Y - Multiple Inheritance)"<<endl;
    }
};

class Parent {
public:
    void displayParent() {
        cout<<"This is Parent Class (Multi-level Inheritance)"<<endl;
    }
};

class child:public Parent {
public:
    void displaychild() {
        cout<<"This is child class (Derived from Parent)"<<endl;
    }
};

class grandchild:public child {
public:
    void displaygrandchild() {
        cout<<"This is grandchild class (Derived from child - Multi-level)"<<endl;
    }
};

class Base {
public:
    void displayBase() {
        cout<<"This is Base class (Inheritance)"<<endl;
    }
};

class Derived1:public Base {
public:
    void displayDerived() {
        cout<<"This is Derived1 (from Base)"<<endl;
    }
};

class Derived2:public Base {
public:
    void displayDerived2() {
        cout<<"This is Derived2 (from Base)"<<endl;
    }
};

class M {
public:
    void displayM() {
        cout<<"This is class M (Base of Hybrid Inheritance)"<<endl;
    }
};

class N:public M {
public:
    void displayN() {
        cout<<"This is class N (Derived from M)"<<endl;
    }
};

class O {
public:
    void displayO() {
        cout<<"This is class O (Independent base for Hybrid Inheritance)"<<endl;
    }
};

class P:public N,public O {
public:
    void displayP() {
        cout<<"This is class P (Derived from N and O - Hybrid)"<<endl;
    }
};

int main() {
    cout<<"\n--- Single Inheritance ---"<<endl;
    B b;
    b.displayA();
    b.displayB();

    cout<<"\n--- Multiple Inheritance ---"<<endl;
    Z z;
    z.displayX();
    z.displayY();
    z.displayZ();

    cout<<"\n--- Multi-level Inheritance ---"<<endl;
    grandchild gc;
    gc.displayParent();
    gc.displaychild();
    gc.displaygrandchild();

    cout<<"\n--- Hierarchical Inheritance ---"<<endl;
    Derived1 d1;
    Derived2 d2;
    d1.displayBase();
    d1.displayDerived();
    d2.displayBase();
    d2.displayDerived2();

    cout<<"\n--- Hybrid Inheritance ---"<<endl;
    P p;
    p.displayM();
    p.displayN();
    p.displayO();
    p.displayP();

    return 0;
}
