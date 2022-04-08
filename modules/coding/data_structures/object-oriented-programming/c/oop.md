A structure is a key word that create user defined data type in C. A structure creates a data type that can be used to group items of possibly different types into a single type.

To define a structure, you must use the struct statement. The struct statement defines a new data type, with more than one member. The format of the struct statement is as follows:
```
struct [structure tag] {

   member definition;
   member definition;
   ...
   member definition;
} [one or more structure variables];
```

# Instances
An instance of a struct is created when the struct is initialized.

# Accessing members
To access any member of a structure, we use the member access operator (.). The member access operator is coded as a period between the structure variable name and the structure member that we wish to access. To access a member from a pointer to a scruct, '->' is used structure variable name and the structure member.

# Methods
C language does not support class methods. Functions can be defined outside of the struct definition to perform operations for a struct instance.

# Inheritance
C language does not support inheritance. Nested structs can be used as a workaround if a semblance of inheritance is needed. For example:
```
struct Box {
    int width;
    int height;
    struct AnotherStrict;
};
```

# Unions

A union is a special data type available in C that allows to store different data types in the same memory location. You can define a union with many members, but only one member can contain a value at any given time. Unions provide an efficient way of using the same memory location for each struct member.

# Typedef
The C programming language provides a keyword called typedef, which you can use to give a type a new name.

# References
https://www.tutorialspoint.com/cprogramming/c_structures.htm
https://www.tutorialspoint.com/cprogramming/c_unions.htm
https://www.tutorialspoint.com/cprogramming/c_bit_fields.htm
https://www.tutorialspoint.com/cprogramming/c_typedef.htm
