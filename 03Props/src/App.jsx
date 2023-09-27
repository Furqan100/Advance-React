import { useState } from 'react'
import reactLogo from './assets/react.svg'
import viteLogo from '/vite.svg'
import './App.css'
import Card from './components/Card'

function App() {
  const [count, setCount] = useState(0)
  let userData ={
    username:"furqanlateef",
    email:"furqanlateef100@gmail.com"
  }

  return (
    <>
      <h1 className='bg-green-400 text-black p-4 rounded-2xl mb-4'>Tailwind  Test</h1>
<Card name = "Furqan" btnText = "clickMe" />
<Card name =" Ikhlaq " btnText="btn clicked"/>
    </>
  )
}

export default App
