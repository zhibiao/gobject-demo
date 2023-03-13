#include "my-animal.h"

typedef struct
{
    char *name;
} MyAnimalPrivate;

G_DEFINE_TYPE_WITH_PRIVATE(MyAnimal, my_animal, G_TYPE_OBJECT)

void my_animal_default_run(MyAnimal *obj)
{
    g_print("my_animal_default_run\n");
}

void my_animal_run(MyAnimal *self)
{
    MyAnimalClass *klass;

    g_return_if_fail(MY_IS_ANIMAL(self));
    klass = MY_ANIMAL_GET_CLASS(self);

    g_return_if_fail(klass->run != NULL);
    klass->run(self);
}

static void
my_animal_class_init(MyAnimalClass *klass)
{
    GObjectClass *object_class = G_OBJECT_CLASS (klass);
    klass->run = my_animal_default_run;
}

static void
my_animal_init(MyAnimal *self)
{
   
}

MyAnimal *my_animal_new(void)
{
    return g_object_new(MY_TYPE_ANIMAL, NULL);
}