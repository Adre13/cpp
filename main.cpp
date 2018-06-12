#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // заполнение матрици по спирали

    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n ; i++) {
        for (int j = 0; j < m ; j++) {
            arr[i][j] = 0;
        }
    }
    int number = 1, x = 0, y = 0;
    while (number <= n*m) {
        x++;
        if (number <=n*m) {
            for (int j = x - 1; j <= m - x; j++) {
                arr[x - 1][j] = number++;
            }
        }
        if (number <=n*m) {
            for (int j = x; j <= n - x; j++) {
                arr[j][m - y - 1] = number++;
            }
        }
        y++;
        if(number <=n*m) {
            for (int j = m - y - 1; j >= x - 1; j--) {
                arr[n - x][j] = number++;
            }
        }
        if (number<=n*m) {
            for (int j = n - x - 1; j >= x; j--) {
                arr[j][x - 1] = number++;
            }
        }

    }

    cout << " ";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout.width(4);
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}