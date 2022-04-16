class Queue {
    constructor() {
        this.a = []
    }

    front() {
        if (this.a.length == 0){
            console.log("Queue is Empty")
            return
        }
        else
            return this.a[0]
    }

    enQueue(value) {
        this.a.push(value)
    }

    deQueue() {
        if (this.a.length == 0) {
            console.log("Queue is Empty")
            return
        }
        this.a.shift()
    }
}

const numberQueue = new Queue()
numberQueue.enQueue(1)
numberQueue.enQueue(2)
numberQueue.enQueue(3)
numberQueue.enQueue(4)
numberQueue.enQueue(5)
numberQueue.enQueue("p")
numberQueue.enQueue("u")
numberQueue.enQueue("s")
numberQueue.enQueue("h")
numberQueue.enQueue("!@!#!$")
for (let i = 0; i < 10; i++) {
    console.log(numberQueue.front())
    numberQueue.deQueue();
}

