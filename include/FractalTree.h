class FractalTree{
private:
    float offset_angle;
    float min_length;
    float divisor;
public:
    FractalTree();
    FractalTree(float angle);
    FractalTree(float angle, float length);
    FractalTree(float angle, float length, float d);
    void draw(float x, float y, float angle, float length);
    void kbin(int key, int x, int y);
};
