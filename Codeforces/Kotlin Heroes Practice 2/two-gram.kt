import java.util.Collections.max
import kotlin.math.max

private fun readLn() = readLine()!! // string line
private fun readInt() = readLn().toInt() // single int
private fun readStrings() = readLn().split(" ") // list of strings
private fun readInts() = readStrings().map { it.toInt() } // list of ints

fun main(){
    var n = readInt()
    var str = readLn()

    var hash = HashMap<String, Int>()

    for ( i in 0..n-2){
        var temp:String = (str[i].toString() + str[i+1].toString())

        var cnt = hash.get(temp)
        if (cnt == null)
            hash.put(temp, 1)
        else
            hash.put(temp, cnt + 1)

    }

    var req = -1
    var ans = ""
    for (element in hash.keys){
          var cnt = hash[element]
         if ( cnt != null){
             if (cnt > req){
                 req = cnt
                 ans = element
             }
         }

    }

    println( ans)



}
