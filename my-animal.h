#pragma once

#include <glib-object.h>

G_BEGIN_DECLS

#define MY_TYPE_ANIMAL my_animal_get_type()
G_DECLARE_DERIVABLE_TYPE(MyAnimal, my_animal, MY, ANIMAL, GObject)

struct _MyAnimalClass
{
    GObjectClass parent_class;

    void (*run)(MyAnimal *obj);

    /* Padding to allow adding up to 12 new virtual functions without
     * breaking ABI. */
    gpointer padding[12];
};

MyAnimal *my_animal_new(void);

void my_animal_run(MyAnimal *obj);

G_END_DECLS