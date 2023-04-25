#include <stdio.h>

int main()
{
    unsigned char state = 0; // 8-bit variable to store the state of each room
    int option, room;

    while (1)
    {
        // Print menu
        printf("Menu:\n");
        printf("1. Switch lights\n");
        printf("2. Print state\n");
        printf("Enter an option: ");
        scanf("%d", &option);

        switch (option)
        {
        case 1: // Switch lights
            printf("Enter room number (1-8): ");
            scanf("%d", &room);
            if (room < 1 || room > 8)
            {
                printf("Invalid room number\n");
                break;
            }
            state ^= (1 << (room - 1)); // toggle the corresponding bit
            printf("Light in room %d is %s\n", room, (state & (1 << (room - 1))) ? "on" : "off");
            break;

        case 2:
            printf("The light is on in rooms: ");
            for (int i = 0; i < 8; i++)
            {
                if (state & (1 << i))
                {
                    printf("%d ", i + 1);
                }
            }
            printf("\n");
            break;

        default:
            printf("Invalid option\n");
            break;
        }
    }

    return 0;
}
