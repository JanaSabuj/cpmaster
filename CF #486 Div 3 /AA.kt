private fun readLn() = readLine()!! // string line
private fun readInt() = readLn().toInt() // single int
private fun readStrings() = readLn().split(" ") // list of strings
private fun readInts() = readStrings().map { it.toInt() } // list of ints

fun main() {
    var(n, k) = readInts()
    var arr = readInts()

    var i = 0; var j = n-1;
    var cnt = 0;
    while(i<=j){
        if(k>=arr[i]){
            cnt++;
            i++;
        }else if(k>=arr[j]){
            cnt++;
            j--;
        }else {
            break;
        }
    }

    println(cnt);
}