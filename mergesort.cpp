#include <bits/stdc++.h>

using namespace std;

int a[100005];
int n;

void merge(int a[], int l, int m, int r)
{
    int n1 = (m - l) + 1, n2 = (r - (m + 1)) + 1; //n1 - so phan tu doan l-m, n2 - so phan tu doan m+1 - r
    int l1[n1 + 1], l2[n2 + 1]; //hai mang tam de luu gia tri cac phan tu cua hai doan
    for (int i = 1; i <= n1; i++)
        l1[i] = a[l + i - 1]; //gan cac gia tri trong doan l-m vao mang l1
    for (int i = 1; i <= n2; i++)
        l2[i] = a[m + i]; //gan cac gia tri trong doan m+1 - r vao mang l2
    int i = 1, j = 1;
    while (i <= n1 && j <= n2) // tron lai day vao mang a
    {
        if (l1[i] < l2[j])
        {
            a[l] = l1[i];
            i++;
        }
        else 
        {
            a[l] = l2[j];
            j++;
        }
        l++; //sx doan l-r, nen khi cho lai vao mang a thi bat dau tu l -> a[l], sau khi tron vao tang l len
    }
    while (i <= n1) //neu chua lay het phan tu mang l1, tron tat ca vao lai mang
    {
        a[l] = l1[i];
        i++;
        l++;
    }
    while (j <= n2) //neu chua lay het phan tu mang l2, tron tat ca vao lai mang
    {
        a[l] = l2[j];
        j++;
        l++;
    }
    return; //return cho chac an :v
}

void mergesort(int a[], int l, int r)
{
    if (l < r)
    {
        int m = (l + r) / 2; //chia doan l-r thanh hai doan l-m va m+1 - r
        mergesort(a, l , m); //chia tiep doan l-m thanh hai doan
        mergesort(a, m + 1, r); // chia tiep doan m+1 - r thanh hai doan
        merge(a, l, m , r); //tron hai doan l-m, m+1 - r vua chia lai thanh day tang
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    mergesort(a, 1, n); //chia doan 1-n thanh hai phan, sap xep tang tung phan va tron hai phan lai thanh mot day tang
    for (int i = 1; i <= n; i++)
        cout << a[i] << " ";
}