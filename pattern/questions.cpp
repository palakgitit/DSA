#include <iostream>
using namespace std;

int main() {
    int i, j;

    // Q1
    cout << "Question-1";
    cout << endl;
    cout << endl;
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) cout << "* ";
        cout << "\n";
    }

    cout << endl;
    cout << endl;

    // Q2 
    cout << "Question-2";
    cout << endl;
    cout << endl;
    for (i = 1; i <= 5; i++) {
        for (j = i; j <= 5; j++) cout << "* ";
        cout << "\n";
    }

    cout << endl;
    cout << endl;

    // Q3
    cout << "Question-3";
    cout << endl;
    cout << endl;
    for (i = 1; i <= 5; i++) {
        for (j = 1; j < i; j++) cout << "  ";
        for (j = i; j <= 5; j++) cout << "* ";
        cout << "\n";
    }

    cout << endl;
    cout << endl;

    // Q4
    cout << "Question-4";
    cout << endl;
    cout << endl;
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) cout << j << " ";
        cout << "\n";
    }

    cout << endl;
    cout << endl;
    

    // Q5 
    cout << "Question-5";
    cout << endl;
    cout << endl;
    for (i = 5; i >= 1; i--) {
        for (j = 1; j <= i; j++) cout << j << " ";
        cout << "\n";
    }

    cout << endl;
     cout << endl;

    // Q6 
    cout << "Question-6";
    cout << endl;
     cout << endl;
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) cout << i << " ";
        cout << "\n";
    }


    cout << endl;
     cout << endl;
    // Q7 
    cout << "Question-7";
   cout << endl;
     cout << endl;
    for (i = 5; i >= 1; i--) {
        for (j = 5; j >= i; j--) cout << j << " ";
        cout << "\n";
    }

    cout << endl;
     cout << endl;

    // Q8 
    cout << "Question-8";
    cout << endl;
     cout << endl;
    for (i = 1; i <= 5; i++) {
        for (j = 5; j >= i; j--) cout << j << " ";
        cout << "\n";
    }

    cout << endl;
     cout << endl;
    // Q9 
    cout << "Question-9";
    cout << endl;
     cout << endl;
    for (i = 1; i <= 5; i++) {
        for (j = i; j <= 5; j++) cout << j << " ";
        cout << "\n";
    }

    cout << endl;
     cout << endl;

    // Q10
    cout << "Question-10";
    cout << endl;
     cout << endl;
    for (i = 5; i >= 1; i--) {
        for (j = i; j >= 1; j--) cout << j << " ";
        cout << "\n";
    }

    cout << endl;
     cout << endl;

    // Q11
    cout << "Question-11";
    cout << endl;
     cout << endl;
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) cout << i << " ";
        cout << "\n";
    }

    cout << endl;
     cout << endl;


    // Q12
    cout << "Question-12";
    cout << endl;
     cout << endl;
    int n = 1;
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) cout << n++ << " ";
        cout << "\n";
    }

    cout << endl;
     cout << endl;

    // Q13
    cout << "Question-13";
    cout << endl;
     cout << endl;
    for (i = 5; i >= 1; i--) {
        for (j = i; j <= 5; j++) cout << (j % 2 == 0 ? "0 " : "1 ");
        cout << "\n";
    }

    cout << endl;
     cout << endl;


    // Q14
    cout << "Question-14";
    cout << endl;
     cout << endl;
    for (i = 1; i <= 5; i++) {
        for (int k = 5; k > i; k--) cout << "  ";
        for (j = 1; j <= i; j++) cout << j << " ";
        for (j = i - 1; j >= 1; j--) cout << j << " ";
        cout << "\n";
    }

    cout << endl;
     cout << endl;

    // Q15
    
    cout << "Question-15";
    cout << endl;
     cout << endl;
    for (i = 0; i < 5; i++) {
        for (int k = 0; k < 5 - i; k++) cout << " ";
        for (j = 1; j <= i + 1; j++) cout << j << " ";
        cout << "\n";
    }

    cout << endl;
     cout << endl;

    // Q16 
    cout << "Question-16";
   cout << endl;
     cout << endl;
    int numb = 1;
    for (i = 1; i <= 5; i++) {
        for (int k = 0; k < 5 - i; k++) cout << "  ";
        for (j = 1; j <= i; j++) {
            if (i < 5) cout << "  ";
            else cout << numb++ << " ";
        }
        cout << "\n";
    }

    cout << endl;
     cout << endl;

    // Q17
    
    cout << "Question-17";
    cout << endl;
     cout << endl;
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            if (j == 1 || j == i || i == 5) cout << j << " ";
            else cout << "  ";
        }
        cout << "\n";
    }

    cout << endl;
     cout << endl;

    // Q18 

    cout << "Question-18";
    cout << endl;
     cout << endl;
    for (i = 1; i <= 5; i++) {
        for (int k = 5; k >= i; k--) cout << "  ";
        for (j = 1; j <= i; j++) cout << i << " ";
        cout << "\n";
    }

    cout << endl;
     cout << endl;

    // Q19
    cout << "Question-19";
    cout << endl;
     cout << endl;
    for (i = 1; i < 5; i++) {
        for (int k = 5; k >= i; k--) cout << " ";
        for (j = 1; j <= i; j++) cout << i << " ";
        cout << "\n";
    }

    cout << endl;
     cout << endl;

    // Q20
    
    cout << "Question-20";
    cout << endl;
     cout << endl;
    for (i = 1; i < 5; i++) {
        for (int k = 5; k >= i; k--) cout << " ";
        for (j = 1; j <= i; j++) cout << j << " ";
        cout << "\n";
    }

    cout << endl;
     cout << endl;

    // Q21
    cout << "Question-21";
    cout << endl;
     cout << endl;
    for (i = 1; i <= 5; i++) {
        for (int k = 5; k >= i; k--) cout << " ";
        for (j = 1; j <= i; j++) {
            if (j == 1 || j == i || i == 5) cout << j << " ";
            else cout << "  ";
        }
        cout << "\n";
    }

    cout << endl;
     cout << endl;
    // Q22
     cout << "Question-22";
    cout << endl;
     cout << endl;
    for (i = 1; i <= 5; i++) {
        for (int k = 1; k <= 5 - i; k++) cout << " ";
        for (j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1) cout << i;
            else cout << " ";
        }
        cout << "\n";
    }

    cout << endl;
     cout << endl;

    // Q23 
    cout << "Question-23";
    cout << endl;
     cout << endl;
    for (i = 1; i <= 7; i++) {
        for (j = 1; j <= 7; j++) {
            if (i == 1 || j == 1 || i == 7 || j == 7) cout << "4 ";
            else if (i == 2 || j == 2 || i == 6 || j == 6) cout << "3 ";
            else if (i == 3 || j == 3 || i == 5 || j == 5) cout << "2 ";
            else cout << "1 ";
        }
        cout << "\n";
    }

    cout << endl;
     cout << endl;

    // Q24
    cout << "Question-24";
  cout << endl;
     cout << endl;

    for (i = 1; i <= 5; i++) {
        for (int k = 1; k <= 5 - i; k++) cout << "  ";
        for (j = i; j >= 1; j--) cout << j << " ";
        for (j = 2; j <= i; j++) cout << j << " ";
        cout << "\n";
    }

    cout << endl;
     cout << endl;

    // Q26
    cout << "Question-26";
   cout << endl;
     cout << endl;
    int numbe = 1;
    for (i = 1; i <= 5; i++) {
        if (i < 5) {
            for (j = 1; j <= i; j++) {
                if (j == 1) cout << "1 ";
                else if (j == i) {
                    numbe += 2;
                    cout << numbe << " ";
                } else cout << "  ";
            }
        } else {
            int temp = 1;
            for (j = 1; j <= 5; j++) {
                cout << temp << " ";
                temp += 2;
            }
        }
        cout << "\n";
    }

    cout << endl;
     cout << endl;
    // 27
    cout << "Question-27";
    cout << endl;
     cout << endl;
    for (i = 1; i <= 4; i++) {
        for (j = 1; j <= 4; j++) {
            if (i == 1 || j == 1 || i == 4 || j == 4) cout << "1 ";
            else cout << "2 ";
        }
        cout << "\n";
    }

    cout << endl;
     cout << endl;

    // 28
    cout << "Question-28";
    cout << endl;
     cout << endl;
    int tm = 1;
    for (i = 1; i < 5; i++) {
        for (j = 1; j <= i; j++) cout << tm++ << " ";
        cout << "\n";
    }

    cout << endl;
    cout << endl;

    // 29
     cout << "Question-29";
     cout << endl;
     cout << endl;
    for (int i = 1; i <= 4; i++) {
        for (int s = 1; s <= 4 - i; s++) cout << " ";
        for (int j = 1; j <= i; j++) cout << n++ << " ";
        cout << "\n";
    }

    for (int i = 3; i >= 1; i--) {
        int x = i * (i - 1) / 2 + 1;
        for (int s = 1; s <= 4 - i; s++) cout << " ";
        for (int j = 1; j <= i; j++) cout << x++ << " ";
        cout << "\n";
    }

    // Q30
    cout << "Question-30" << endl << endl;
    for (i = 1; i <= 4; i++) {
        for (j = 1; j <= i; j++) cout << i << " ";
        cout << "\n";
    }
    for (i = 3; i >= 1; i--) {
        for (j = 1; j <= i; j++) cout << i << " ";
        cout << "\n";
    }

    cout << endl << endl;

    // Q31
    cout << "Question-31" << endl << endl;
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) cout << "* ";
        cout << "\n";
    }

    cout << endl << endl;

    // Q32
    cout << "Question-32" << endl << endl;
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) cout << "* ";
        cout << "\n";
    }

    cout << endl << endl;

    // Q33
    cout << "Question-33" << endl << endl;
    for (i = 1; i < 6; i++) {
        for (j = 1; j < 6 - i; j++) cout << " ";
        for (j = 1; j <= i; j++) {
            if (j == 1 || j == i || i == 5) cout << "*";
            else cout << " ";
        }
        cout << "\n";
    }

    cout << endl << endl;

    // Q34
    cout << "Question-34" << endl << endl;
    for (i = 1; i <= 3; i++) {
        for (j = 1; j <= 7; j++) {
            if (i == 2 || j == 1 || j == 7) cout << "* ";
            else cout << "  ";
        }
        cout << "\n";
    }

    cout << endl << endl;

    // Q35
    cout << "Question-35" << endl << endl;
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= 5 - i; j++) cout << " ";
        cout << "*";
        for (j = 1; j < 2 * i - 1; j++) cout << " ";
        if (i > 1) cout << "*";
        cout << "\n";
    }
    for (i = 4; i >= 1; i--) {
        for (j = 1; j <= 5 - i; j++) cout << " ";
        cout << "*";
        for (j = 1; j < 2 * i - 1; j++) cout << " ";
        if (i > 1) cout << "*";
        cout << "\n";
    }

    cout << endl << endl;

    // Q36
    cout << "Question-36" << endl << endl;
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            if (j == 1 || j == i) cout << "* ";
            else cout << "  ";
        }
        cout << "\n";
    }
    for (j = 1; j <= 7; j++) cout << "* ";
    cout << "\n\n";

    // Q37
    cout << "Question-37" << endl << endl;
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= 5; j++) {
            if (j == 1 || j == i) cout << "* ";
            else cout << "  ";
        }
        cout << "\n";
    }

    cout << endl << endl;

    // Q38
    cout << "Question-38" << endl << endl;
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= 9; j++) {
            if (j == 6 - i || j == 4 + i) cout << "* ";
            else cout << "  ";
        }
        cout << "\n";
    }

    cout << endl << endl;

    // Q39
    cout << "Question-39" << endl << endl;
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= 5; j++) {
            if (i == 1 || i == 5 || j == 1 || j == 5) cout << "* ";
            else cout << "  ";
        }
        cout << "\n";
    }

    cout << endl << endl;

    // Q40
    cout << "Question-40" << endl << endl;
    for (i = 1; i <= 5; i++) {
        char ch = 'A';
        for (j = 1; j <= i; j++) cout << ch++ << " ";
        cout << "\n";
    }

    cout << endl << endl;

    // Q41
    cout << "Question-41" << endl << endl;
    for (i = 5; i >= 1; i--) {
        char ch = 'E';
        for (j = 1; j <= i; j++) cout << ch-- << " ";
        cout << "\n";
    }

    cout << endl << endl;
    cout << endl << endl;

    // Q42
    cout << "Question-42" << endl << endl;
    char ch = 'A';
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= 3; j++) cout << ch++ << " ";
        cout << "\n";
    }

    // Q43
    cout << "Question-43" << endl << endl;
    for (i = 1; i <= 4; i++) {
        for (j = 1; j <= i; j++) cout << char('A' + j - 1);
        cout << "\n";
    }
    for (i = 3; i >= 1; i--) {
        for (j = 1; j <= i; j++) cout << char('A' + j - 1);
        cout << "\n";
    }

    cout << endl << endl;

    // Q44
    cout << "Question-44" << endl << endl;
    for (i = 1; i <= 4; i++) {
        for (j = 1; j <= i; j++) cout << char('A' + j - 1) << " ";
        cout << "\n";
    }
    for (i = 3; i >= 1; i--) {
        for (j = 1; j <= i; j++) cout << char('A' + j - 1) << " ";
        cout << "\n";
    }

    cout << endl << endl;

    // Q45
    cout << "Question-45" << endl << endl;
    for (i = 1; i <= 4; i++) {
        for (j = 1; j <= i; j++) cout << char('A' + j - 1) << " ";
        for (j = i - 1; j >= 1; j--) cout << char('A' + j - 1) << " ";
        cout << "\n";
    }

    cout << endl << endl;

    // Q46
    cout << "Question-46" << endl << endl;
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) cout << 'A' << " ";
        cout << "\n";
    }

    cout << endl << endl;

    // Q47
    cout << "Question-47" << endl << endl;
    for (i = 5; i >= 1; i--) {
        for (j = 1; j <= i; j++) cout << char('A' + 5 - i);
        cout << "\n";
    }

    cout << endl << endl;

    // Q48
    cout << "Question-48" << endl << endl;
    for (i = 1; i <= 3; i++) {
        for (j = 1; j <= 3 - i; j++) cout << "  ";
        for (j = 1; j <= 2 * i - 1; j++) cout << "* ";
        cout << "\n";
    }

    cout << endl << endl;
    cout << endl << endl;

    // Q49
    cout << "Question-49" << endl << endl;
    for (i = 5; i >= 1; i--) {
        for (j = 1; j <= i; j++) cout << "* ";
        cout << "\n";
    }

    cout << endl << endl;
    // Q50
    cout << "Question-50" << endl << endl;
    for (i = 1; i <= 5; i++) {
        for (j = 1; j < i; j++) cout << "  ";
        cout << "*" << endl;
    }

    cout << endl << endl;

    // Q51
    cout << "Question-51" << endl << endl;
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) cout << "*";
        cout << "\n";
    }
    for (i = 4; i >= 1; i--) {
        for (j = 1; j <= i; j++) cout << "*";
        cout << "\n";
    }

    cout << endl << endl;

    // Q52
    cout << "Question-52" << endl << endl;
    for (i = 1; i <= 3; i++) {
        for (j = 1; j <= 3 - i; j++) cout << "  ";
        for (j = 1; j <= 2 * i - 1; j++) cout << "* ";
        cout << "\n";
    }
    for (i = 2; i >= 1; i--) {
        for (j = 1; j <= 3 - i; j++) cout << "  ";
        for (j = 1; j <= 2 * i - 1; j++) cout << "* ";
        cout << "\n";
    }

    cout << endl << endl;

    // Q53
    cout << "Question-53" << endl << endl;
    for (i = 1; i <= 5; i++) {
        int num = 2;
        for (j = 1; j <= i; j++) {
            cout << num << " ";
            num += 2;
        }
        cout << "\n";
    }


    cout << endl << endl;
    // Q54
    cout << "Question-54" << endl << endl;
    for (i = 1; i <= 4; i++) {
        for (j = i; j < 4; j++) cout << "* ";
        for (j = 1; j <= 2 * i - 1; j++) cout << "* ";
        cout << "\n";
    }

    cout << endl << endl;

    // Q55
    cout << "Question-55" << endl << endl;
    for (i = 1; i <= 4; i++) {
        for (j = 1; j <= 4; j++) {
            if (i == j) cout << i << " ";
            else cout << "0 ";
        }
        cout << "\n";
    }

    cout << endl << endl;

    // Q56
    cout << "Question-56" << endl << endl;
    int p = 1;
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            cout << p << " ";
            p += 2;
        }
        cout << "\n";
    }


    cout << endl << endl;
    // Q57
    cout << "Question-57" << endl << endl;
    for (i = 1; i <= 5; i++) {
        char sym = (i % 2 == 1) ? '@' : '#';
        for (j = 1; j <= i; j++) cout << sym << " ";
        cout << "\n";
    }

    cout << endl << endl;

    // Q58
    cout << "Question-58" << endl << endl;
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            if ((i + j) % 2 == 0) cout << "+ ";
            else cout << "- ";
        }
        cout << "\n";
    }

    cout << endl << endl;

    // Q59
    cout << "Question-59" << endl << endl;
    for (i = 4; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            cout << i;
        }
        cout << "\n";
    }

    cout << endl << endl;

    // Q60
    cout << "Question-60" << endl << endl;
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            cout << "RW" << i << " ";
        }
        cout << "\n";
    }
    



    return 0;
}
