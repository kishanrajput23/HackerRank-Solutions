

//Overload operators + and << for the class complex
//+ should add two complex numbers as (a+ib) + (c+id) = (a+c) + i(b+d)
//<< should print a complex number in the format "a+ib"

Complex operator +(Complex c1, Complex c2) {
    Complex result;
    
    result.a = c1.a + c2.a;
    result.b = c1.b + c2.b;

    return result;
}

ostream& operator<<(ostream& out, Complex c) {
    out << c.a << "+i" << c.b;
    return out;
}

