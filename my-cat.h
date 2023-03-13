#pragma once

#include <glib-object.h>
#include "my-animal.h"

G_BEGIN_DECLS

#define MY_TYPE_CAT my_cat_get_type()
G_DECLARE_FINAL_TYPE (MyCat, my_cat, MY, CAT, MyAnimal)

MyCat *my_cat_new(void);

G_END_DECLS