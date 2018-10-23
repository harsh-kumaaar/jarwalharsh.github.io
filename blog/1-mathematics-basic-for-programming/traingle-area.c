
//////////////JAVA implementation of triangle area using two vectors origintaing at vertex A;
public class Main
{
    public static class Point{
        int x;
        int y;
        Point(int x, int y)
        {
            this.x = x;
            this.y = y;
        }
        
        void add(Point other)
        {
            this.x += other.x;
            this.y += other.y;
        }
        
        int crossProduct(Point other){
            return x*other.y - y*other.x;
        }
    }
	public static void main(String[] args) {
	    Point a = new Point(10,10);
	    Point b = new Point(10,0);
	    System.out.println("Area of triangle is : "+ Math.abs(a.crossProduct(b))/2 );
	}
}