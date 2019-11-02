fun main(args: Array<String>) {
    var c: Int //variable
    val d: Int
    var a: Int = -1
    val b: Int = 10 //value
    var s1 = "a has value $a"

    //*Variable and basic operations*//
    println("...")
    println("Variable and basic operations")
    d = 1 // d is value is assigned but can not reassign
    a = sum(a, b) // variable can change value, but value not
    a -= minus(d, b)
    c = a
    println("c has value $c")
    println("Max of a, b: ${max(a, b)}")

    //*String*//
    println("...")
    println("String")
    val s2 = "${s1.replace("has", "had")}, now has value $a"
    val s4 = replaceString("had", s2, "contains")
    println("s2 is: ${s2}")
    println("s4 is:${s4}")
    val s3 = "hihihi"
    println("String `hihihi` has length: ")
    println("s3 length = ${getStringLength(s3)}")

    println("...")
    println("Unit function")
    voidFun()//not return function

    //*List*//
    println("...")
    println("List")
    println(describe(1))
    println(describe("Hello"))
    println(describe(Long))
    val l: Long = 222
    println(describe(l))
    //list with in
    println("list with in")
    printListExample()

    //filter list
    println("...")
    println("filter list")
    listFruitFilter()
}

fun sum(a: Int, b: Int): Int {
    if (a < 0 || b < 0) {
        return 0
    } else if (b == 1 && a == 1) {
        return 2
    }
    return a + b
}

fun minus(a: Int, b: Int) = a - b

fun voidFun(): Unit //or can omit Unit
{
    println("No thing! Just a void function")
}

fun max(a: Int, b: Int) = if (a > b) a else b

fun getStringLength(obj: Any): Int? //must return null
{
    if (obj is String) {
        return obj.length
    }
    return null
}

fun describe(obj: Any): String =
    when (obj) { // same as switch case or if clause
        1 -> "One"
        "Hello" -> "Greeting"
        is Long -> "Long"
        !is String -> "Not a string"
        else -> "Unknown"
    }

fun printSum(a: Int, b: Int) {
    println("Sum of $a and $b is ${a + b}") // simple sum print
}

fun replaceString(replaceText: String, source: String, replaceTo: String): String =
    source.replace(replaceText, replaceTo)

fun listFruitFilter(): Unit {
    val fruits = listOf("banana", "avocado", "apple", "kiwifruit")
    fruits
        .filter { it.startsWith("a") }
        .sortedBy { it }
        .map { it.toUpperCase() }
        .forEach { println(it) }

    print(fruits)
}

fun printListExample(): Unit {
    //in
    var items = listOf("orange", "Strawberry", "mango")
    for (item in items) {
        println(item)
    }

    for (index in items.indices) //index < items.size
    {
        println("indices: ${items[index]}")
    }

    val x = 10
    val y = 20
    if (x in 1..y + 1) { // check x in range 1..(y+1)
        println("fits in range")
    }

    val list = listOf("a", "b", "c")
    //!in
    if (-1 !in 0..list.lastIndex) {
        println("-1 is out of range")
    }
    if (list.size !in list.indices) {
        println("list size is out of valid list indices range, too")
    }
    //in with step
    for (x1 in 1..10 step 2) {
        println(x1)
    }
    //in with downTo and step
    for (x2 in 9 downTo 0 step 3) {
        println(x2)
    }

}