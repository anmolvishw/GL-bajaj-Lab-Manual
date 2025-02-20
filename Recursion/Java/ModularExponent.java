// Modular exponentiation (Recursive)
// Given three numbers a, b and c, we need to find (ab) % c
// Now why do “% c” after exponentiation, because ab will be really large even 
// for relatively small values of a, b and that is a problem because the data type of the language that we try to code the problem, will most probably not let us store such a large number.
// Examples: 
 

// Input : a = 2312 b = 3434 c = 6789
// Output : 6343

// Input : a = -3 b = 5 c = 89 
// Output : 24

public class ModularExponent {
    public static int sol(int a, int b, int c) {
        if (b == 0) {
            return 1;
        }
        if (b % 2 == 0) {
            int y = sol(a, b / 2, c);
            return (y * y) % c;
        } else {
            return ((a % c) * sol(a, b - 1, c)) % c;
        }
    }

    public static void main(String[] args) {
        System.out.println(sol(2312, 3434, 6789));
    }
}
