

// Enter your code here.
ostream& operator<<(ostream& out, Person& p) {
    return out << "first_name=" << p.get_first_name() << ",last_name=" << p.get_last_name();
}

