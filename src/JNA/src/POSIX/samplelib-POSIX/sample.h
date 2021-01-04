#ifndef SAMPLE_H_
#define SAMPLE_H_

struct sample {
    int x;
    int y;
    char *s;
};

struct sample *create_sample(int x, int y, const char *s);
void display_sample(const struct sample *p);
void destroy_sample(struct sample *p);


#endif /* SAMPLE_H_ */
