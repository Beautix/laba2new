void mergeSort(char * mas, int len)
{
    int n = 1, l, ost;
    char * mas1;
    while (n < len)
    {
        l = 0;
        while (l < len)
        {
            if (l+n >= len) break;
            ost = (l+n*2>len) ? (len-(l+n)) : n;
            mas1 = (mas + l, mas + l + n, n, ost);
            for (int i = 0; i<n+ost; i++) mas[l+i] = mas1[i];
            delete [] mas1;
            l += n*2;
        }
        n *= 2;
    }
}
