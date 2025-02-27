#include <stdio.h>
#include <string.h>

struct card {
    char name[60]; // name of the Pokemon card
    int stage; // stage of the Pokemon, can take
                // values 0, 1 or 2
    int HP; // HP (hit points) of that Pokemon
};

int ends_with(char *x, char *y) {
    int length = strlen(x);
    return (length > 0 && x[length - 1] == y);
}

int main() {
    int n;
    scanf("%d", &n);

    struct card cards[n];
    for (int i = 0; i < n; i++) {
        scanf("%s %d %d", cards[i].name, &cards[i].stage, &cards[i].HP);
    }

    int total_price = 0;
    for (int i = 0; i < n; i++) {
        int price = 50;
        price += cards[i].HP;


        if (cards[i].stage == 1) {
            price += 30;
        } else if (cards[i].stage == 2) {
            price += 80;
        }


        if (ends_with(cards[i].name, 'X')) {
            price += 200;
        }

        total_price += price;
    }
    printf("\n\n");
    printf("%d\n", total_price);

    return 0;
}
