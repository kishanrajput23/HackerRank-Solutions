

/*Write the class AddElements here*/
template <class T>
class AddElements {
private:
    T element;

public:
    AddElements(T arg) {
        element = arg;
    }

    T add(T arg) {
        return element + arg;
    }
};

template <>
class AddElements<string> {
private:
    string element;

public:
    AddElements(string arg) {
        element = arg;
    }

    string concatenate(string arg) {
        return element + arg;
    }
};

