const job_1 = () => {
    const b = Math.random() * 100
    setTimeout( () => {
        console.log("job1 log : " + b)
    }, b)
}

const job_2 = () => {
    const b = Math.random() * 100
    setTimeout( () => {
        console.log("job2 log : " + b)
    }, b)
}

const job_3 = () => {
    const b = Math.random() * 100
    setTimeout( () => {
        console.log("job3 log : " + b)
    }, b)
}

job_1()
job_2()
job_3()
