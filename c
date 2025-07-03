:root {
    --text-color: #1a1c20;
    --link-color: #4a76ee;
    --background-color: #eeeff1;
}
  
* {
    margin: 0;
    padding: 0;
    box-sizing: border-box;
}

html {
    scroll-behavior: smooth;
}

body {
    font-family: 'Poppins', sans-serif;
    background-color: var(--background-color);
    max-width: 1000;
    margin: 0 auto;
}

a { 
    color: var(--link-color);
    text-decoration: none;
}

/* NAVBAR */

nav {
    position: sticky;
    top: 0;
    z-index: 1000;
    background-color: var(--background-color);
    display: flex;
    justify-content: space-between;
    align-items: center;
    padding: 0 50px;
    height: 80px;
}

nav .left a{
    color: var(--text-color);
    font-size: 22px;
    font-weight: 600;
}

nav .right a{
    color: var(--text-color);
    margin: 0 10px;
}

nav .right a:last-child{
    color: var(--background-color);
    background-color: var(--text-color);
    padding: 5px 15px;
    border-radius: 5px;
}

nav .right a span {
    margin-left: 5px;
}

/* SECTION 1: HERO */
.hero-section {
    display: flex;
    justify-content: space-between;
    align-items: center;
    padding: 0 50px;
    margin: 50px 0;
    margin-bottom: 100px;
    gap: 40px;
}

.hero-section .text {
    flex: 5;
}

.hero-section .text h2 {
    font-size: 45px;
}

.hero-section .text .links {
    margin-top: 25px;
}

.hero-section .text .links a {
    display: inline-block;
    padding: 5px 10px;
    border: 2px solid var(--link-color);
    border-radius: 5px;
    margin-right: 10px;
    margin-bottom: 10px;
    transition: .1s;
}

.hero-section .text .links a:hover {
    color: var(--text-color);
    border: 2px solid var(--text-color);
}

.hero-section .headshot {
    flex: 2;
    display: flex;
    justify-content: right;
}

.hero-section .headshot img {
    /* width: 300px;
    border-radius: 50%; */
    width: 300px; /* Adjust size as needed */
    height: 300px; /* Keep width and height the same for a perfect circle */
    border-radius: 50%; /* Makes the image round */
    object-fit: cover; /* Ensures the image fills the circle */  
}

.resume-btn {
    display: inline-flex;
    align-items: center;
    gap: 10px;
    background-color: #333;
    color: #fff;
    padding: 12px 20px;
    border-radius: 8px;
    font-weight: 600;
    font-size: 1rem;
    text-decoration: none;
    margin: 20px 0;
    transition: background-color 0.3s ease, transform 0.2s ease;
    box-shadow: 0 4px 15px rgba(0, 0, 0, 0.1);
  }
  
  .resume-btn i {
    font-size: 1.2rem;
  }
  
  .resume-btn:hover {
    background-color: #555;
    transform: translateY(-2px);
  }

  .about-section {
    padding: 60px 20px;
    background-color: #ffffff;
    text-align: center;
  }
  
  .about-section h2 {
    font-size: 2rem;
    margin-bottom: 30px;
    color: #222;
  }
  
  .about-content {
    max-width: 800px;
    margin: 0 auto;
    font-size: 1.1rem;
    color: #444;
    line-height: 1.8;
    text-align: left;
  }
  
  

/* SECTION 2: SKILLS */
.projects-section {
    padding: 60px 20px;
    background-color: #e9f2ff;
    text-align: center;
  }
  
  .projects-section h2 {
    font-size: 2rem;
    margin-bottom: 40px;
    color: #333;
  }
  
  .project {
    max-width: 700px;
    margin: 0 auto;
    margin-bottom: 10px;
    background: white;
    border-radius: 12px;
    box-shadow: 0 4px 20px rgba(0, 0, 0, 0.1);
    padding: 30px;
    text-align: left;
  }
  
  .project img {
    width: 100%;
    height: auto;
    border-radius: 8px;
    margin-bottom: 20px;
  }
  
  .project h3 {
    font-size: 1.5rem;
    margin-bottom: 10px;
    color: #222;
  }
  
  .project p {
    font-size: 1rem;
    margin-bottom: 20px;
    color: #555;
  }
  
  .project a {
    display: inline-block;
    padding: 10px 20px;
    background-color: #333;
    color: white;
    text-decoration: none;
    border-radius: 6px;
    transition: background-color 0.3s ease;
  }
  
  .project a:hover {
    background-color: #555;
  }
  

/* SECTION 2: SKILLS */
.skills-section {
    padding: 50px 10%;
    text-align: center;
    background-color: #f4f4f4;
}

.skills-section h2 {
    font-size: 2.5rem;
    font-weight: bold;
    color: #333;
    margin-bottom: 30px;
}

.skills-section .text {
    font-size: 1.1rem;
    color: #555;
    margin-bottom: 40px;
    line-height: 1.7;
}

.skills-section .cells {
    display: grid;
    grid-template-columns: repeat(auto-fit, minmax(220px, 1fr));
    gap: 30px;
    justify-items: center;
    align-items: start;
}

.skills-section .cell {
    background-color: #fff;
    padding: 20px;
    border-radius: 10px;
    box-shadow: 0 4px 10px rgba(0, 0, 0, 0.1);
    text-align: center;
    transition: transform 0.3s ease;
}

.skills-section .cell:hover {
    transform: translateY(-10px);
    box-shadow: 0 6px 15px rgba(0, 0, 0, 0.2);
}

.skills-section .cell img {
    width: 60px;
    height: 60px;
    margin-bottom: 15px;
    transition: opacity 0.3s ease;
}

.skills-section .cell:hover img {
    opacity: 0.8;
}

.skills-section .cell span {
    font-size: 1.3rem;
    font-weight: 600;
    color: #333;
    display: block;
    margin-bottom: 10px;
}

.skills-section .cell p {
    font-size: 1rem;
    color: #777;
    line-height: 1.5;
    margin-top: 10px;
}

/* SECTION 3: TESTIMONY */
.testimony-section {
    background-color: #f9f9f9; /* Light gray background */
    padding: 60px 20px;
  }
  
  .testimony-section h2 {
    text-align: center;
    font-size: 2rem;
    margin-bottom: 40px;
  }

  .margin{
    margin-top: 10px;
  }

  .testimony-section .group .person-details p {
    font-size: 600;
  }
  
  .testimony-section .group {
    display: flex;
    flex-direction: column;
    align-items: center;
    gap: 20px;
    max-width: 800px;
    margin: auto;
    text-align: center;
  }
  
  .testimony-section .person-details img {
    width: 300px; /* Adjust size as needed */
    height: 300px; /* Keep width and height the same for a perfect circle */
    border-radius: 50%; /* Makes the image round */
    object-fit: cover; /* Ensures the image fills the circle */  
  }

/* SECTION 4: CONTACT */
.contact-section {
    background-color: #e9f2ff; /* Soft blue background */
    padding: 60px 20px;
  }
  
  .contact-section h2 {
    text-align: center;
    font-size: 2rem;
    margin-bottom: 40px;
  }
  
  .contact-section .group {
    display: flex;
    flex-direction: column;
    gap: 30px;
    max-width: 800px;
    margin: auto;
  }
  
  .contact-section .text {
    text-align: center;
    font-size: 1rem;
    line-height: 1.6;
  }
  
  .contact-section form {
    display: flex;
    flex-direction: column;
    gap: 15px;
  }
  
  .contact-section input,
  .contact-section textarea {
    padding: 10px;
    border: 1px solid #ccc;
    border-radius: 6px;
    resize: none;
  }
  
  .contact-section button {
    padding: 12px;
    background-color: #007bff;
    color: white;
    border: none;
    border-radius: 6px;
    cursor: pointer;
    transition: background-color 0.3s;
  }
  
  .contact-section button:hover {
    background-color: #0056b3;
  }

  #scroll-to-top {
    position: fixed;
    bottom: 50px;
    right: 20px;
    background-color: #ff69B4;
    color: white;
    border: none;
    border-radius: 50%;
    padding: 0;
    width: 50px;
    height: 50px;
    font-size: 24px;
    cursor: pointer;
    display: none;
  }
  
  #scroll-to-top:hover {
    background-color: #0056b3;
  }
  
  

@media (max-width: 850px) {
    /* SECTION 1: HERO */
    .hero-section .text h2 {
        font-style: 35px;
    }
}

@media (max-width: 740px) {
    /* SECTION 1: HERO */
    .hero-section  {
        flex-direction: column-reverse;
    }

    .hero-section .headshot img  {
        width: 300px;
    }

    /* SECTION 3: TESTIMONY */
    .testimony-section {
        text-align: center;
    }

    .testimony-section .group {
        flex-direction: column;
    }

    /* SECTION 4: CONTACT */
    .contact-section .group {
        flex-direction: column;
    }
}


@media (max-width: 600px) {
    /* NAVBAR */
    nav {
        padding: 0 20px;
    }

    nav .right a {
        font-size: 22px;
    }

    nav .right a:last-child {
        color: var(--text-color);
        background-color: transparent;
        padding: 0;
    }

    nav .right a span {
        display: none;
    }

    /* SECTION 1: HERO */
    .hero-section {
        padding: 0 20px;
    }

    .hero-section .text h2 {
        font-size: 30px;
    }

    /* SECTION 2: SKILLS */
    .skills-section {
        padding: 0 20px;
    }

    .skills-section .cells .cell span {
        font-size: 16px;
    }

     /* SECTION 3: TESTIMONY */
     .testimony-section {
        padding: 0 20px;
    }

     /* SECTION 4: CONTACT */
     .contact-section .group {
        padding: 0 20px;
    }
}