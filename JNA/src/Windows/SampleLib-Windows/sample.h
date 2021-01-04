#ifndef SAMPLE_H_
#define SAMPLE_H_

#ifdef DLLEXPORT
#define DLLSPEC __declspec(dllexport)
#else
#define DLLSPEC __declspec(dllimport)
#endif

DLLSPEC struct sample {
    int x;
    int y;
    char* s;
};

DLLSPEC struct sample* create_sample(int x, int y, const char* s);
DLLSPEC void display_sample(const struct sample* p);
DLLSPEC void destroy_sample(struct sample* p);


#endif /* SAMPLE_H_ */
