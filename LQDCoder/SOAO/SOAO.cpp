#include <iostream>

using namespace std;

int l,w,h,n;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> l;
    cin >> n;
    while (n != 0)
    {
        cin >> w >> h;
        if ((w < l) || (h < l))
            cout << "UPLOAD ANOTHER" << endl;
        else 
            if ((w == h) && (h >= l))
                cout << "ACCEPTED" << endl;
            else 
                cout << "CROP IT" << endl;
        n--;
    }
}
