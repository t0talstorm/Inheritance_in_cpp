# EXPERIMENT - INHERITANCE IN C++

## Aim: To study and implement the concepts of inheritance and access specifiers in C++.

## Apparatus: VS Code or Online C++ Compiler

## Theory:

**Inheritance** is one of the fundamental principles of Object-Oriented Programming (OOP) that allows a class (called derived or child class) to inherit properties and behaviors from another class (called base or parent class). This mechanism promotes code reusability, establishes relationships between classes, and enables hierarchical classification of objects.

### Key Concepts:

1. **Base Class (Parent Class)**: The class whose properties and methods are inherited by another class.
   ```cpp
   class Vehicle {
       public:
           string brand;
           void start() { cout << "Vehicle started"; }
   };
   ```

2. **Derived Class (Child Class)**: The class that inherits properties and methods from the base class.
   ```cpp
   class Car : public Vehicle {
       public:
           string model;
           void accelerate() { cout << "Car accelerating"; }
   };
   ```

3. **Access Specifiers in Inheritance**: Control the access level of inherited members in the derived class.
   - **public inheritance**: Public members remain public, protected remain protected
   - **protected inheritance**: Public and protected members become protected
   - **private inheritance**: Public and protected members become private

### Types of Inheritance:

1. **Single Inheritance**: A derived class inherits from one base class
2. **Multiple Inheritance**: A derived class inherits from multiple base classes
3. **Multilevel Inheritance**: A class is derived from another derived class
4. **Hierarchical Inheritance**: Multiple classes inherit from a single base class
5. **Hybrid Inheritance**: Combination of two or more types of inheritance

### Access Specifiers:

- **private**: Members accessible only within the same class
- **protected**: Members accessible within the class and its derived classes
- **public**: Members accessible from anywhere in the program

### Benefits of Inheritance:

- **Code Reusability**: Avoid code duplication by inheriting common functionality
- **Extensibility**: Add new features to existing classes without modifying them
- **Polymorphism**: Enable dynamic behavior through virtual functions
- **Hierarchical Organization**: Model real-world relationships between objects
- **Maintenance**: Easier to maintain and update code through inheritance hierarchies

## Programs:

### 1. Single Inheritance - Vehicle System

---

**File:** `single_inheritance.cpp`  
**Experiment ID:** INH-01

**Description:** Demonstrates basic single inheritance where a Car class inherits from a Vehicle base class, showcasing how derived classes can access and extend base class functionality.

**Algorithm:**
1. Define base class `Vehicle` with brand property and color() method
2. Create derived class `Car` inheriting publicly from Vehicle
3. Add specific property `model` to Car class
4. Implement Car-specific method `speed()`
5. Create Car object and access both inherited and own members
6. Display vehicle information and car-specific details

**Key Learning:** Understanding basic inheritance syntax and member accessibility in derived classes.

---

### 2. Multilevel Inheritance - Animal Hierarchy

---

**File:** `Multi_level_inheritance.cpp`  
**Experiment ID:** INH-02

**Description:** Implements a three-level inheritance chain (Animal → Mammal → Dog) demonstrating how properties and methods are inherited through multiple levels of class hierarchy.

**Algorithm:**
1. Create base class `Animal` with basic functions eat() and sleep()
2. Define intermediate class `Mammal` inheriting from Animal
3. Add mammal-specific method walk() to Mammal class
4. Create `Dog` class inheriting from Mammal
5. Implement dog-specific method bark()
6. Instantiate Dog object and call methods from all hierarchy levels
7. Demonstrate access to all inherited functionality

**Key Learning:** Understanding how inheritance works through multiple levels and method accessibility across the inheritance chain.

---

### 3. Multiple Inheritance - Smart Car System

---

**File:** `Multiple_inheritance.cpp`  
**Experiment ID:** INH-03

**Description:** Demonstrates multiple inheritance where SmartCar class inherits from both Vehicle and Device classes, combining functionality from multiple parent classes.

**Algorithm:**
1. Define `Vehicle` class with showType() method
2. Create `Device` class with showName() method
3. Implement `SmartCar` class inheriting from both Vehicle and Device
4. Add SmartCar-specific method showDetails()
5. Call methods from both parent classes within derived class
6. Create SmartCar object and demonstrate combined functionality
7. Show how multiple inheritance enables feature composition

**Key Learning:** Understanding multiple inheritance syntax and how to combine functionality from multiple base classes.

---

### 4. Hierarchical Inheritance - Animal Family

---

**File:** `Hierarchical_inheritance.cpp`  
**Experiment ID:** INH-04

**Description:** Implements hierarchical inheritance where multiple classes (Dog, Cat, WhiteCat, BlackCat) inherit from common base classes, demonstrating both hierarchical and multilevel inheritance patterns.

**Algorithm:**
1. Create base class `Animal` with common method eat()
2. Define `Dog` class inheriting from Animal with bark() method
3. Create `Cat` class inheriting from Animal with meow() method
4. Implement `WhiteCat` class inheriting from Cat with colour() method
5. Create `BlackCat` class inheriting from Cat with colour() method
6. Instantiate objects of all derived classes
7. Demonstrate method calls from different hierarchy levels
8. Show specialization through method overriding

**Key Learning:** Understanding how multiple classes can inherit from the same base class and extend functionality differently.

---

### 5. Access Specifiers - Vehicle Access Control

---

**File:** `access_specifiers.cpp`  
**Experiment ID:** INH-05

**Description:** Demonstrates the three types of access specifiers (private, protected, public) and their behavior in inheritance, showing how access control affects member visibility in derived classes.

**Algorithm:**
1. Define `Vehicle` class with private, protected, and public members
2. Create private member `cost` (not accessible in derived classes)
3. Add public members `brand` and methods for external access
4. Implement protected method `displayInfo()` for derived class access
5. Create `Car` class with public inheritance accessing protected members
6. Define `TwoWheeler` class with protected inheritance
7. Demonstrate different access levels and their implications
8. Show how inheritance type affects member accessibility

**Key Learning:** Understanding access specifiers and their role in controlling member visibility in inheritance hierarchies.

---

## Key Learning Outcomes:

1. **Inheritance Fundamentals**: Understanding parent-child relationships between classes
2. **Code Reusability**: Implementing DRY (Don't Repeat Yourself) principle through inheritance
3. **Access Control**: Mastering private, protected, and public access specifiers
4. **Inheritance Types**: Implementing single, multiple, multilevel, and hierarchical inheritance
5. **Method Accessibility**: Understanding which methods are available at different hierarchy levels
6. **Object Relationships**: Modeling real-world relationships using inheritance
7. **Class Design**: Creating extensible and maintainable class hierarchies
8. **Polymorphism Foundation**: Building groundwork for advanced OOP concepts

## Applications:

- **GUI Frameworks**: Base window classes with specialized button, menu, and dialog classes
- **Game Development**: Base entity classes with specialized player, enemy, and item classes
- **Database Systems**: Base record classes with specialized table and query classes
- **Graphics Programming**: Base shape classes with specialized rectangle, circle, and polygon classes
- **Operating Systems**: Base process classes with specialized thread and service classes
- **Web Development**: Base component classes with specialized form, navigation, and content classes
- **Financial Software**: Base account classes with specialized savings, checking, and credit classes

## Advantages of Inheritance:

- **Code Reusability**: Reduces code duplication and promotes efficient development
- **Extensibility**: Easy to add new features without modifying existing code
- **Maintainability**: Changes in base class automatically reflect in derived classes
- **Polymorphism**: Enables dynamic behavior and flexible code design
- **Hierarchical Organization**: Natural modeling of real-world relationships
- **Consistency**: Ensures consistent interface across related classes
- **Modularity**: Promotes modular design and separation of concerns

## Important Concepts:

- **Is-A Relationship**: Inheritance represents "is-a" relationships (Car is-a Vehicle)
- **Constructor Chaining**: Base class constructors are called before derived class constructors
- **Destructor Order**: Destructors are called in reverse order of construction
- **Method Overriding**: Derived classes can provide specific implementations of base class methods
- **Virtual Functions**: Enable runtime polymorphism through dynamic method binding
- **Diamond Problem**: Multiple inheritance can lead to ambiguity (solved by virtual inheritance)

## Best Practices:

- Use inheritance to model genuine "is-a" relationships, not just code sharing
- Prefer composition over inheritance when relationship is "has-a" rather than "is-a"
- Make base class destructors virtual when using polymorphism
- Use protected access for members that should be accessible to derived classes only
- Avoid deep inheritance hierarchies that can become difficult to maintain
- Document inheritance relationships clearly for better code understanding
- Consider interface segregation to avoid forcing unnecessary dependencies

## Common Inheritance Patterns:

- **Template Method Pattern**: Base class defines algorithm structure, derived classes implement steps
- **Strategy Pattern**: Different inheritance hierarchies for different algorithmic approaches
- **Factory Pattern**: Base factory classes with specialized product creation methods
- **Observer Pattern**: Base observer and subject classes with specialized implementations
- **Command Pattern**: Base command classes with specific operation implementations
