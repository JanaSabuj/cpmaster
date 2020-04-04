import java.util.Collections.max
import kotlin.math.max

private fun readLn() = readLine()!! // string line
private fun readInt() = readLn().toInt() // single int
private fun readStrings() = readLn().split(" ") // list of strings
private fun readInts() = readStrings().map { it.toInt() } // list of ints

fun main(){

    var (n, k) = readInts()
    var arr = readInts()

    var arr1 = arr.sorted()

    if(k !=0 && k!=n ){
        if ( arr1[k-1] != arr1[k]){
            println(arr1[k-1])
        }else
            println("-1")

    }else if (k == 0) {
        if(arr1[0] != 1)
            println("1")
        else
            println("-1")
    }else if( k == n){
        println(arr1[k-1])
    }


}
