fun main() { //args: Array<String>
    var c: Int //variable
    val d: Int
    var a: Int = -1
    val b: Int = 10 //value
    var s1 = "a has value $a"
    var s4: String? //s4 is a non-nullable,s4 value can be null when have "?"

    //*Variable and basic operations*//
    println("")
    println("...")
    println("Variable and basic operations")
    d = 1 // d is value is assigned but can not reassign
    a = sum(a, b) // variable can change value, but value not
    a -= minus(d, b)
    c = a
    println("c has value $c")
    println("Max of a, b: ${max(a, b)}")

    //*String*//
    println("")
    println("...")
    println("String")
    val s2 = "${s1.replace("has", "had")}, now has value $a"
    s4 = replaceString("had", s2, "contains")
    println("s2 is: ${s2}")
    println("s4 is:${s4}")
    val s3 = "hihihi"
    println("String `hihihi` has length: ")
    println("s3 length = ${getStringLength(s3)}")

    println("")
    println("...")
    println("Unit function")
    voidFun()//not return function

    //*List*//
    println("")
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
    println("")
    println("...")
    println("filter list")
    listFruitFilter()

    //number
    println("")
    println("...")
    println("number")
    longNumberReadable()

    //class
    var cat = Cat()
    with(cat) {
        run()
        print("\n Are you hungry?")
        walk()
        print("\n Common! I'll feed you ^^")
        eat()
        print("\n You're full. Come and play with me!")
        lazy()
    }

    //swap 2 variables
    var aVar = 1
    var bVar = 2

    bVar = a.also { aVar = bVar }

    //first lamda function
    firstLamdaFunc()
}

fun sum(a: Int, b: Int): Int {
    if (a < 0 || b < 0) {
        return 0
    } else if (b == 1 &&
        a == 1 ||
        a == 9 &&
        b == 9
    ) {
        return 2
    }
    return a + b
}

fun minus(a: Int, b: Int) = a - b

fun voidFun(): Unit // or can omit Unit
{
    println("No thing! Just a void function")
}

fun max(a: Int, b: Int) = if (a > b) a else b

fun getStringLength(obj: Any): Int? // must return null
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
        in 2..5 -> "2 to 5"
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

    //mutable list
    val listM = mutableListOf<String>("One", "Two", "Three", "Four", "Five")
    listM.remove("Four")
    println("\n $listM")

    val listNew = listM.filter { it[0] == 'T' }
    val sequenceNewNotHolding = listM.asSequence().filter { it[0] == 'T' }
    println("\n $listNew")
    println("\n Create a new sequence $sequenceNewNotHolding")
    val listNewNoHolding = sequenceNewNotHolding.toList()
    println("\n Convert to a new list $listNewNoHolding")

    //this is a map
    val lazyMap = listM.asSequence().map {
        println("access: $it")
        it
    }
    println("lazy: $lazyMap")
    println("-----")
    println("first: ${lazyMap.first()}")
    println("-----")
    println("all: ${lazyMap.toList()}")

    //you can't change what array/list refer to, but you can change the content of the list/array
    //you can nest array and list
    val intArr = intArrayOf(1, 2, 3)
    val listContainArr = listOf(intArr, "happy", "value") //list with variety content
    println("\n $listContainArr")

}

fun longNumberReadable(): Unit {
    val oneMillion = 1_000_000
    val socialSecurityNumber = 999_99_9999L
    val hexBytes = 0xFF_EC_DE_5E
    val bytes = 0b11010010_01101001_10010100_10010010

    println("one MILLION is $oneMillion")
    println("socialSecurityNumber is $socialSecurityNumber")
    println("hexBytes is $hexBytes")
    println("bytes is $bytes")
}

fun checkNull(): Unit {
    var checkNull: String = "hello"
    checkNull?.equals("world") ?: false
    checkNull.compareTo("ahihi") //throw any Exception if value is null
}

abstract class Animal {
    abstract fun run()
    abstract fun walk()
    abstract fun eat()
    abstract fun sleep()
}

class Cat : Animal() {
    override fun run() {
        println("\n I'm running")
    }

    override fun walk() {
        println("\n I'm walking")
    }

    override fun eat() {
        println("\n I'm eating")
    }

    override fun sleep() {
        println("\n I'm sleeping")
    }

    fun lazy() {
        println("\n I'm lazy")
    }
}

fun firstLamdaFunc() {
    var meaningLife = "What is the meaning of the life?"
    val findMeaning = { -> println("Live the life fullest for each moment") }

    val findMeaning2: (String) -> String = { str: String ->
        println("Live the life fullest for each moment")
        str
    }
    updateFirstLamdaFunc(meaningLife, findMeaning2)

    updateFirstLamdaFunc(meaningLife,::increaseDirty)
}

fun updateFirstLamdaFunc(strVar: String, operation: (String) -> String): String {
    return operation(strVar)
}

fun increaseDirty( start: String ) = "start + 1"