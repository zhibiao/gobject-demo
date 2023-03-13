#include "my-animal.h"
#include "my-cat.h"

void  main()
{
   MyAnimal *animal =  my_animal_new();
   my_animal_run(animal);

   MyCat *cat = my_cat_new();
   my_animal_run(MY_ANIMAL(cat));
}