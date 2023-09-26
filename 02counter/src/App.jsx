import { useState } from 'react'
import reactLogo from './assets/react.svg'
import viteLogo from '/vite.svg'
import './App.css'

function App() {
  let [counter,setCounter] = useState(10);

  let addValue =()=>{
    console.log("Value Added",Math.random());
    counter = counter+1;
    setCounter(counter);
  }
  let decValue=()=>{
    counter=counter-1;
    setCounter(counter);
  }
  return (
    
    
    <>
      <h1> Chai Aur Code</h1>
      <h2>Counter Value:{counter}</h2>
      <button
      onClick={addValue}
      >Add Value</button>
      <br/>
      <button 
      onClick={decValue}>Decrease Value</button>
    </>
  )
}

export default App
