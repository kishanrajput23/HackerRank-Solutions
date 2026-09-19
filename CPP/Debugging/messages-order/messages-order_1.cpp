

class Message {
public: 
    string text;
    int id;

    Message(string text, int id) {
        this->text = text;
        this->id = id;
    }

    const string& get_text() {
        return text;
    }

    bool operator<(const Message& other) const {
        return id < other.id;
    }
};

class MessageFactory {
public:
    int id = 0;
    MessageFactory() {}
    Message create_message(const string& text) {
        return Message(text, id++);
    }
};

