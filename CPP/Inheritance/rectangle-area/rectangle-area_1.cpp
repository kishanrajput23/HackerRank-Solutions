
/*
 * Create classes Rectangle and RectangleArea
 */
class Rectangle {
public:
    int width;
    int  height;
    
    void display() {
        cout<<width<<" "<<height<<endl;
    }
};

class RectangleArea : public Rectangle {
public:
    void read_input() {
        cin >> width >> height;
    }
    
    void display() {
        cout<<(width * height)<<endl;
    }
};

