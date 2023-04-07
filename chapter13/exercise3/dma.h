#ifndef __DMA_H__
#define __DMA_H__

#include <iostream>

using namespace std;

class ABC
{
    private:
        char *label;
        int rating;
    public:
        ABC(const char *l = "null", int r = 0);
        ABC(const ABC &rs);
        virtual ~ABC(); 
        virtual void View() const;
        ABC &operator=(const ABC &s);
        friend ostream &operator<<(ostream &os, const ABC &rs);
};

class baseDMA : public ABC
{
    public:
        baseDMA(const char *l = "null", int r = 0);
        baseDMA(const baseDMA &rs);
        virtual void View() const;
};

class lacksDMA : public ABC
{
    private:
        enum {COL_LEN = 40};
        char color[COL_LEN];
    public:
        lacksDMA(const char *l = "null", int r = 0, const char *c = "blank");
        lacksDMA(const ABC &rs, const char *c = "blank");
        virtual void View() const;
        friend ostream &operator<<(ostream &os, const lacksDMA &rs);
};

class hasDMA : public ABC
{
    private:
        char *style;
    public:
        hasDMA(const char *l = "null", int r = 0, const char *s = "null");
        hasDMA(const ABC &rs, const char *s);
        hasDMA(const hasDMA &rs);
        ~hasDMA();
        virtual void View() const;
        hasDMA &operator=(const hasDMA &hs);
        friend ostream &operator<<(ostream &os, const hasDMA &rs);
};

#endif 
