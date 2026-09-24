

struct Workshops {
    int start_time;
    int duration;
    int end_time;
};

struct Available_Workshops {
    int n;
    Workshops* workshops;
};

Available_Workshops* initialize(int start_time[], int duration[], int n) {
    Available_Workshops* ptr = new Available_Workshops;

    ptr->n = n;
    ptr->workshops = new Workshops[n];

    for (int i = 0; i < n; i++) {
        ptr->workshops[i].start_time = start_time[i];
        ptr->workshops[i].duration = duration[i];
        ptr->workshops[i].end_time = start_time[i] + duration[i];
    }

    return ptr;
}

int CalculateMaxWorkshops(Available_Workshops* ptr) {

    sort(ptr->workshops,
         ptr->workshops + ptr->n,
         [](const Workshops& a, const Workshops& b) {
             return a.end_time < b.end_time;
         });

    int count = 0;
    int last_end = 0;

    for (int i = 0; i < ptr->n; i++) {

        if (ptr->workshops[i].start_time >= last_end) {
            count++;
            last_end = ptr->workshops[i].end_time;
        }
    }

    return count;
}

