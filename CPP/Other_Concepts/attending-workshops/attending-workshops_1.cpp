

//Define the structs Workshops and Available_Workshops.
struct Workshops {
    int *start_time;
    int *duration;
    int *end_time;
};

struct Available_Workshops {
    int n;
    Workshops* workshops;
};

Available_Workshops* initialize(int start_time[], int duration[], int n) {
    Available_Workshops* aw = new Available_Workshops;

    aw->n = n;
    aw->workshops = new Workshops[n];

    for (int i = 0; i < n; i++) {
        aw->workshops[i].start_time = new int(start_time[i]);
        aw->workshops[i].duration = new int(duration[i]);
        aw->workshops[i].end_time = new int(start_time[i] + duration[i]);
    }

    return aw;
}

//Implement the functions initialize and CalculateMaxWorkshops
int CalculateMaxWorkshops(Available_Workshops* ptr) {
    // Sort workshops by end time
    for (int i = 0; i < ptr->n - 1; i++) {
        for (int j = i + 1; j < ptr->n; j++) {

            if (*(ptr->workshops[i].end_time) >
                *(ptr->workshops[j].end_time)) {

                swap(ptr->workshops[i], ptr->workshops[j]);
            }
        }
    }

    int count = 0;
    int last_end_time = 0;

    for (int i = 0; i < ptr->n; i++) {
        int start = *(ptr->workshops[i].start_time);
        int end = *(ptr->workshops[i].end_time);

        if (start >= last_end_time) {
            count++;
            last_end_time = end;
        }
    }

    return count;
}

