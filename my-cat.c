#include "my-cat.h"

struct _MyCat
{
    MyAnimal parent_instance;
};

G_DEFINE_TYPE(MyCat, my_cat, MY_TYPE_ANIMAL)

void my_cat_run(MyAnimal *animal)
{
    MyCat *self = MY_CAT(animal);
    g_print("my_cat_run\n");
}

static void
my_cat_class_init(MyCatClass *klass)
{
    MyAnimalClass *animal_class = MY_ANIMAL_CLASS(klass);
    animal_class->run = my_cat_run;
}

static void
my_cat_init(MyCat *self)
{
}

MyCat *my_cat_new(void)
{
    return g_object_new(MY_TYPE_CAT, NULL);
}