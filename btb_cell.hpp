class BtbCell{
    public:
        BtbCell();
        
        int cycle;
        double pc;

        void setTakenCount(short int value);
        short int getTakenCount();

    private:
        short int takenCount;
        
};