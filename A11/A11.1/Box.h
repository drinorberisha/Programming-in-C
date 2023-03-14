class Box
{
    private:
            double bheight;
            double bwidth;
            double bdepth;
 
    public:
// parametric constructor
            Box(double bheight, double bwidth, double bdepth);
// empty constructor
            Box();
// copy construcor
            Box(Box& box);
            Box& operator = (const Box& box) = default;
// destructor 
            ~Box();
// setter
            void setbheight(double bheight);
            void setbwidth(double bwidth);
            void setbdepth(double bdepth);
// getter
            double getbheight() const;
            double getbwidth() const;
            double getbdepth() const;
// print
            void print();
 
 
 
};