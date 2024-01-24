## Structures in C
In C, a structure is a way to group together different types of data under one name. <br>
It's like creating a custom data that can hold various pieces of information. <br>
Below is an example of the use of structures in C:

	struct Superhero
	{
		char name[20];
		int age;
		float powerLevel;
	};
<br>

`struct Superhero` is the blueprint that defines what a superhero is. <br>
Inside, you specify the types of information a superhero has (`char` for the name, `int` for age, `float` for power level).<br>

Now you can create actual superheroes using this blueprint:
	```
	struct Superhero ironman;
	ironMan.age = 40;
	ironMan.powerLevel = 95.5;
	```
## Typedef in C
Typedef is like giving a nickname to a data type. It simplifies the way you declare structures. <br>
Using the superhero example:
```
	typedef struct 
	{
		char name[20];
		int age;
		float powerLevel;
	}
	Superhero;
```
<br>
`typedef` allows you to create an alias for `struct Supehero`.<br>
Now, you can declare superheroes without using the word `struct`:

```
	Superhero batman;
	batman.age = 35;
	batman.powerLevel = 92.0;
```
<br>
By using `typdef`, you make your code cleaner and more readable. I.e., in the above example, instead of using `struct Supehero`, we just call it by saying `Superhero`.

## Summary
Structures help you organize related data under a single name, while `typedef` simplifies the way you declare and use those structures by giving them a nickname. <br>
It's like creating your own custom data types to make your code more organized and easier to understand.

## ALX Project Tasks for Structures & Typdef
* dog.h - a file containing a new type `struct dog` with the elements: name, age & owner <br>
* 1-init_dog.c - a function that initializes a variable of type `struct dog`<br>
* 2-print_dog.c - a function that prints a `struct dog` <br>
* dog.h - a new type `dog_t as a new name for the type `struct dog` <br>
* 4-new_dog.c - a function that creates a new dog <br>
* 5-free_dog.c - a function that frees dogs <br>
