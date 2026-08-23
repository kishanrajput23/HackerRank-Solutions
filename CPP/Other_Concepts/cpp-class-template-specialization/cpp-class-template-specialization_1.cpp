

// Define specializations for the Traits class template here.
// Define specializations for the Traits class template here.

template <>
struct Traits<Color> {
    static string name(int index) {
        switch (index) {
            case 0: return "red";
            case 1: return "green";
            case 2: return "orange";
            default: return "unknown";
        }
    }
};

template <>
struct Traits<Fruit> {
    static string name(int index) {
        switch (index) {
            case 0: return "apple";
            case 1: return "orange";
            case 2: return "pear";
            default: return "unknown";
        }
    }
};

