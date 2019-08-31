private fun readLn() = readLine()!! // string line
private fun readInt() = readLn().toInt() // single int
private fun readStrings() = readLn().split(" ") // list of strings
private fun readInts() = readStrings().map { it.toInt() } // list of ints

fun main(){
    var (n, k) = readInts()

    var arr = readInts()
    
    
    var hash = HashMap<Int, Int>()

    for(i in 0 until n){
//        hash[arr[i]]!!.add(i+1)
        hash.put(arr[i], (i+1))
    }

    if(hash.size < k){
        println("NO")
    }else {
        println("YES")

        var cnt = 0
        for (x in hash.keys){
            print(hash[x])
            print(" ")
            cnt++
            if(cnt == k)
                break
        }
    }


}

