#include <stdio.h>
#include <stdlib.h>
#include <string.h> // each time I have to include these, the longer the entire files gets is pretty frustrating...

// I'm going to need to try something else here instead..
typedef int vals[];

typedef struct fun_lists
{
    // fun_lists, hopefully I can emit a struct as a function definition...
    int list_index;// = 0;
} fun_list;

// returning a pointer is okay, otherwise it isn't?
void return_indices()
{
    //vals *value=(0x20,0x09,0xFF);
    return;
}

fun_list return_funlist(int *i)
{
    // exercise to handle pointer dereferencing.
    fun_list super_list;
    super_list.list_index = *i; // should dereference the integer pointer
    printf("set index: %d\n",super_list.list_index);
    return super_list; // maybe this will work just fine.
}

void main(int argc, char *argv[])
{
    int x = 1;
    while(x < argc)
    {
        int y = 0;
        fun_list zed;
        zed.list_index = x;
        while(y<x)
        {
            zed.list_index = y;
            printf("list_index: %d\n",zed.list_index);
            y++;
        }
        printf("fun list index: %d\n",zed.list_index);
        ++x;
    }
    // I should really add in something to immediately parse the input to an integer for repeated testing.
    //vals[3] x;
    //x = *return_indices(); // need to dereference the return_indices();
    // need to figure out what is going on...
    // printf("%d, %d, %d: I guess it worked!\n",x[0],x[1],x[2]);
    puts("cool, seems like typedef is way more useful than I thought");
}
