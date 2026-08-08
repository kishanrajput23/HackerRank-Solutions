

void process_input(int n) {
    try {
        int d = largest_proper_divisor(n);
        cout << "result=" << d << endl;
    }
    catch (const std::invalid_argument& ex){
        cout << ex.what() << endl;
    }
    cout << "returning control flow to caller" << endl;
}

