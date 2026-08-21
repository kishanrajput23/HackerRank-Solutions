

/* Define the exception here */
class BadLengthException {
private:
    int length;

public:
    BadLengthException(int n) {
        length = n;
    }

    int what() {
        return length;
    }
};

