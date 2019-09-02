 fun readLn() = readLine()!! // string line
 fun readInt() = readLn().toInt() // single int
fun readStrings() = readLn().split(" ") // list of strings
 fun readInts() = readStrings().map { it.toInt() } // list of ints

fun main(){
    var (n, k) = readInts()
    
    repeat(k){
        if(n%10 != 0)
        	n = n - 1;
        else
          n/= 10;
    }
    println(n)
}