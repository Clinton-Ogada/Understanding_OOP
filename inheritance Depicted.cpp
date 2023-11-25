#include<iostream>
using namespace std;
class klassA
{
    public:
        int x;
    protected:
        int y;
    private:
        int z;
};
class klassB : public klassA
{
private:
    int w;
protected:
    int r;
};
   class klassC : protected klassA
   {
   public:
    int f;
   };
   class klassD : private klassA
   {
   protected:
    int q;
   };
class klassE : protected klassB
{
protected:
    int g;
};
int main()
{
    klassA objA1, objA2;
    klassB objB;
    klassC objC;
    klassD objD;
    klassE objE;
}
