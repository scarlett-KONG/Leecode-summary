using System;
/*任何C#语言的第一条语句都是这个
  using关键字用于程序中包含命名空间。一个程序可以包含多个using语句 */
namespace RectangleApplication{
    class Rectangle{
        /*class关键字用于声明一个类*/
        double length;
        double width;//成员变量
        public void Acceptdetails(){
            length = 4.5;
            width = 3.5;
        }
        public double GetArea(){
            return length*width;
        }
        public void Display(){//成员函数
            Console.WriteLine("Length:{0}", length);
            Console.WriteLine("Width: {0}", width);
            Console.WriteLine("Area: {0}", GetArea());
        }
    }

    class ExecuteRectangle{
        /*类 ExecuteRectangle是一个包含Main()方法和实例化Rectangle类的类*/
        static void Main(string[] args){
            Rectangle r = new Rectangle();
            r.Acceptdetails();
            r.Display();
            Console.ReadLine();
        }
    }
}