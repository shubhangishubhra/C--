void swapPointers(int *ptr1, int *ptr2)
{

    if (ptr1 == ptr2)
    {

        return;
    }
    *ptr1 = *ptr1 ^ *ptr2;
    *ptr2 = *ptr1 ^ *ptr2;
    *ptr1 = *ptr1 ^ *ptr2;
}
