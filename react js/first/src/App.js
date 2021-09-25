//import logo from "./logo.svg";
import "./App.css";
import Navbar from "./navbar.js";
import Home from "./home.js";
//console.log(Navbar);
function App() {
  return (
    <div className="App">
      <Navbar />
      <div className="content">
        <Home />
      </div>
    </div>
  );
}

export default App;
