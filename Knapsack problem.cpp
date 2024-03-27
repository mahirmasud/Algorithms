#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Input item number: ";
    cin >> n;
    int weight[n], price[n];
    cout << "Enter Weight:";
    for (int i = 0; i < n; i++)
    {
        cin >> weight[i];
    }
    cout << "Enter Prices: ";
    for (int i = 0; i < n; i++)
    {
        cin >> price[i];
    }
    int bag_capasity;
    cout << "Bag Capasity: ";
    cin >> bag_capasity;
    for (int i = 0; i < n; i++)
    {
        int min_index = i;
        for (int j = min_index + 1; j <= n; j++)
        {
            if (price[min_index] < price[j])
            {
                min_index = j;
            }
            swap(price[i], price[min_index]);
            swap(weight[i], weight[min_index]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << weight[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << price[i] << " ";
    }
    int total_price = 0;
    for (int i = 0; i < n; i++)
    {
        if (bag_capasity == 0)
        {
            break;
        }
        if (bag_capasity > weight[i])
        {
            bag_capasity -= weight[i];
            total_price += weight[i] * price[i];
        }
        else
        {

            total_price += bag_capasity * price[i];
            bag_capasity = 0;
        }
    }
    cout << endl;
    cout << "Total price: " << total_price;
}