
// // #include <iostream>
// // using namespace std;

// // int search(int key, int arr[], int size)
// // {
// //     int low = 0;
// //     int high = size - 1;
// //     while (low <= high)
// //     {
// //         int mid = (low + high) / 2;
// //         if (key == arr[mid])
// //         {
// //             return mid;
// //         }
// //         else if (key > arr[mid])
// //         {
// //             low = mid + 1;
// //         }
// //         else
// //         {
// //             high = mid - 1;
// //         }
// //     } 
// //     return -1;  
// // } 
// // int main()
// // {
// //     int arr[10];
// //     cout << "Enter numbers for array: " << endl;
// //     for (int i = 0; i < (sizeof(arr)/sizeof(arr[0])) - 1; i++ )
// //     {
// //         cout << i << ": ";
// //         cin >> arr[i];
// //     }
// //     // int arr [] = {1, 2, 3, 4, 5, 6, 7, 8 , 9, 10};
// //     int size = sizeof(arr)/sizeof(arr[0]);
// //     int key;
// //     cout << "Enter key to find: ";
// //     cin >> key;

// //     int result = search(key, arr, size);
// //     if ((result >= 0))
// //     {
// //         cout << "result find in index " << result << endl;
// //     }
// //     else
// //     {
// //         cout << "result not found in index" << endl;
// //     }
    
// // }
// // RECURSIVE METHOD

// #include <iostream>
// using namespace std;

// int search(int key, int arr[], int low, int high,int cnt)
// {
//     if (low  <= high)
//     {
//         cout << "Numer of try: "<< cnt << endl;
//         int mid = (low + high) / 2;
//         if (key == arr[mid])
//         {
//             return mid;
//         }
//         else if (key > arr[mid])
//         {
//             return search(key, arr, mid + 1, high,cnt + 1);
//         }
//         else
//         {

//             return search(key, arr, low , mid - 1, cnt + 1);
//         }
//     } 
//     return -1;  
// }
// int main()
// {
//     int cnt = 1;
//     int arr[7];
//     cout << "Enter numbers for array: " << endl;
//     for (int i = 0; i < (sizeof(arr)/sizeof(arr[0])); i++ )
//     {
//         cout << i << ": ";
//         cin >> arr[i];
//     }
//     int size = sizeof(arr)/sizeof(arr[0]);
//     int key;
//     cout << "Enter key to find: ";
//     cin >> key;
//     int high = size - 1;
//     int low = 0;

//     int result = search(key, arr, low, high, cnt);
//     if ((result >= 0))
//     {
//         cout << "result find in index " << result << endl;
//     }
//     else
//     {
//         cout << "result not found in index" << endl;
//     }
    
// }
#include <iostream>
using namespace std;

int binary_search(int target, int numbers[], int low, int high, int cnt)
{
    if (low <= high)
    {
        cout << "Number of tries: "<< cnt << endl;
        int mid = (low + high) / 2;
        if (target == numbers[mid])
        {
            return mid;
        }
        else if (target > numbers[mid])
        {
            return binary_search(target, numbers, mid + 1, high, cnt + 1);
        }
        else
        {
            return binary_search(target, numbers, low, mid - 1, cnt + 1);
        }
    }
    return -1;
}

int main()
{
    int cnt = 1;
    int numbers[10];
    cout << "Enter numbers for array: " << endl;
    for (int i = 0; i < (sizeof(numbers) / sizeof(numbers[0])); i++)
    {
        cout << i << ": ";
        cin >> numbers[i];
    }
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int target;
    cout << "Enter target to find: ";
    cin >> target;
    int high = size - 1;
    int low = 0;

    int result = binary_search(target, numbers, low, high, cnt);
    if (result >= 0)
    {
        cout << "Result found at index " << result << endl;
    }
    else
    {
        cout << "Result not found" << endl;
    }
}



