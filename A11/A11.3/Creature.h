// CLASS DECLARATION
 
class Creature{
    protected:
    int distance;
    
    public:
    Creature();
    ~Creature();
 
    void setDist(int Distance);
    int getDist() const;
    void run() const;
    
};
 
class Wizard : public Creature {
    private:
            int distFactor;
    public:
            Wizard();
            ~Wizard();
 
            void setDistFactor(int DistFactor);
            int getDistFactor() const;
            void hover() const;
};
 
class Bigfoot: public Creature {
    private:
             double height;
    public: 
            Bigfoot();
            ~Bigfoot();
            void setheight(double my_height);
            double getheight() const;
            void Height() const;
 
};
 
class dragon: public Creature {
        private: 
                double Fspit;
        public:
                dragon();
                ~dragon();
                void setFspit(double FSPIT);
                double getheight() const;
                void Flame() const;
};