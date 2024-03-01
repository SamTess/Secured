/*
** EPITECH PROJECT, 2024
** B-CPE-110
** File description:
** Test manual
*/
#include "../include/hashtable.h"

static void search_part(hashtable_t *ht)
{
    mini_printf("Looking for \"%s \": \"%s\"\n", "Salle de bain",
        ht_search(ht, "Salle de bain"));
    mini_printf("Looking for \"%s \": \"%s\"\n", "Cuisine",
        ht_search(ht, "Cuisine"));
    mini_printf("Looking for \"%s \": \"%s\"\n", "Chambre",
        ht_search(ht, "Chambre"));
    mini_printf("Looking for \"%s \": \"%s\"\n", "Grenier",
        ht_search(ht, "Grenier"));
    mini_printf("Looking for \"%s \": \"%s\"\n", "Garage",
        ht_search(ht, "Garage"));
    mini_printf("Looking for \"%s \": \"%s\"\n", "Toilette",
        ht_search(NULL, "Toilette"));
}

int main(void)
{
    hashtable_t *ht = new_hashtable(&hash, 5);

    ht_insert(ht, "Salle de bain", "Douche");
    ht_insert(ht, "Cuisine", "Assiette");
    ht_insert(ht, "Chambre", "Lit");
    ht_insert(ht, "Grenier", "Poussière");
    ht_insert(ht, "Garage", "Boite à outils");
    ht_dump(ht);
    search_part(ht);
    delete_hashtable(ht);
    return 0;
}
