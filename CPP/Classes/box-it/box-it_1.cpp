
//Implement the class Box  
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)

class Box {
private:
    int l, b, h;

public:
    // Default constructor
    Box() {
        l = 0;
        b = 0;
        h = 0;
    }

    // Parameterized constructor
    Box(int length, int breadth, int height) {
        l = length;
        b = breadth;
        h = height;
    }

    // Copy constructor
    Box(const Box &B) {
        l = B.l;
        b = B.b;
        h = B.h;
    }

    int getLength() {
        return l;
    }

    int getBreadth() {
        return b;
    }

    int getHeight() {
        return h;
    }

    long long CalculateVolume() {
        return 1LL * l * b * h;
    }
    
    // Overload <
    bool operator<(Box &B) {
        if (l < B.l) {
            return true;
        }

        if (l == B.l && b < B.b) {
            return true;
        }

        if (l == B.l && b == B.b && h < B.h) {
            return true;
        }

        return false;
    }
    
     // Overload <<
    friend ostream& operator<<(ostream& out, const Box& B);
};

// Output operator
ostream& operator<<(ostream& out, const Box& B) {
    out << B.l << " " << B.b << " " << B.h;
    return out;
}

