<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>My Portfolio</title>
    <link rel="preconnect" href="https://fonts.googleapis.com">
    <link rel="preconnect" href="https://fonts.gstatic.com" crossorigin>
    <link href="https://fonts.googleapis.com/css2?family=Poppins:wght@400;600&display=swap" rel="stylesheet">

    <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/6.4.0/css/all.min.css">

    <link href="https://unpkg.com/aos@2.3.1/dist/aos.css" rel="stylesheet">
    
    <link rel="stylesheet" href="style.css">
</head>
<body>
    <!-- NAVBAR -->
    <nav>
        <div class="left">
            <a href="#">Callistus Olisa</a>
        </div>

        <div class="right">
            <a href="http://github.com" target="_blank" rel="noopener 
            noreferrer">
                <i class="fa-brands fa-github"></i>
                <span>Github</span>
            </a>

            <a href="http://linkedin.com" target="_blank" rel="noopener 
            noreferrer">
                <i class="fa-brands fa-linkedin"></i>
                <span>Linkedin</span>
            </a>

            <a href="mailto:https://mail.google.com/mail/u/0/#inbox">
              <i class="fa-solid fa-envelope"></i>
                <span>Email</span> 
            </a>  
        </div>
    </nav>

    <main>
        <!-- SECTION 1: HERO -->
        <section class="hero-section" data-aos="fade-up" data-aos-delay="100">
            <div class="text">
                <h2>Hi, I'm Callistus 👋</h2>

                <p>Frontend Developer & Aspiring Software Engineer.</p>

                <p>I'm a passionate Web Developer currently studying Software Engineering at Highland College of Technology. I specialize in building responsive websites using HTML, CSS, Bootstrap, and JavaScript, with growing experience in Python and Java.</p>

                <p>I love solving problems through code and continuously learning how to become a better developer. Whether it's building projects or exploring new tech, I'm always up for the challenge.</p>
                

                <a href="CALLISTUS Cv.pdf" download class="resume-btn">
                    <i class="fa-solid fa-file-arrow-down"></i>
                    <span>Download Resume</span>
                  </a>


                <div class="links" data-aos="fade-down" data-aos-delay="50">
                    <a href="#about">
                        <!-- <i class="fa-solid fa-person"></i> -->
                        <!-- <i class="fa-regular fa-user"></i> -->
                        <i class="fa-solid fa-user"></i>
                        <span>About</span>
                    </a>

                    <a href="#projects">
                        <i class="fa-solid fa-diagram-project"></i>
                        <span>Projects</span>
                    </a>

                    <a href="#skills">
                        <i class="fa-solid fa-code"></i>
                        <span>Skills</span>
                    </a>

                    <a href="#testimony">
                        <i class="fa-solid fa-pen"></i>
                        <span>Testimony</span>
                    </a>

                    <a href="#contact">
                        <i class="fa-solid fa-envelope"></i>
                        <span>Contact</span>
                    </a>
                </div>    
            </div>

            <div class="headshot">
                <img src="images/oka.jpg" alt="Callistus headshot">
            </div>
        </section>

        <section id="about" class="about-section" data-aos="fade-down" data-aos-delay="50">
            <h2>About Me</h2>
            <div class="about-content">
              <p>
                My name is <strong>Olisa Emeka Callistus</strong>. I’m currently studying Software Engineering at Highland College of Technology, I said that earlier, I Know. 
              </p>
              <p>
                My journey into tech started with curiosity and a love for creativity. Over time, I’ve built solid skills in HTML, CSS, JavaScript, and frameworks like Bootstrap. I’m also exploring the backend side of things with Python and Java, learning how to build complete applications.
              </p>
              <p>
                I recently completed my SIWES training at Seb's Hub where I focused on version control with Git and GitHub, styling with CSS, and building weekly website projects. I also got the chance to assist as a facilitator in a school’s tech program on weekly basis, which helped me improve my communication and teaching skills.
              </p>
              <p>
                My goal is to become a well-rounded software engineer who can confidently build solutions that matter.
                When I'm not coding, you'll probably find me watching or playing football ⚽ or bible study. I'm driven by curiosity and a desire to keep improving. let me show you few things of what i have done.
              </p>
            </div>
          </section>

        <section id="projects" class="projects-section" data-aos="fade-down" data-aos-delay="50">
            <h2>Projects</h2>
            <div class="project">
              <img src="images/seb's hub.png" alt="Screenshot of Project 1" data-aos="fade-down" data-aos-delay="100">
              <h3>Restuarant Website</h3>
              <p>A clean and responsive Restuarant Website built using HTML, CSS, and a bit of JavaScript. This was actually my Final Siwes Project</p>
              <a href="https://github.com/MexCally/Final_Proj" target="_blank">View Code</a>
            </div>

            <div class="project">
                <img src="images/barber's website.png" alt="Screenshot of Project 2" data-aos="fade-down" data-aos-delay="200">
                <h3>Simple Barber's Website</h3>
                <p>A clean and responsive Barber's Website built using HTML, CSS.</p>
                <a href="https://github.com/MexCally/Fifth-Wk-Proj" target="_blank">View Code</a>
            </div>

            <div class="project">
                <img src="images/Company's Website.png" alt="Screenshot of Project 3" data-aos="fade-down" data-aos-delay="300">
                <h3>A Clean Company's Website</h3>
                <p>A clean and responsive Company's Website built using a Framework Called Bootstrap, I also used HTML and CSS to put this together.</p>
                <a href="https://github.com/MexCally/SixthWkProj" target="_blank">View Code</a>
            </div>
          </section>

        <!-- SECTION 2: SKILLS -->
        <section id="skills" class="skills-section" data-aos="fade-down" data-aos-delay="100">
            <h2>Skills</h2>

            <div class="text">
                As a passionate and growing web developer, I’ve developed a solid foundation in several essential skills in frontend technologies, atleast for now. With an eye for detail and a love for problem-solving, I continually enhance my skillset. Here are the core technologies I’m proficient in and the ones that drive my projects:
                <br><br>
                I'm comfortable building fully responsive websites from scratch using the latest web standards. My skills in HTML, CSS, and JavaScript allow me to create clean, user-friendly, and interactive web experiences. I also explore frameworks like Bootstrap to build dynamic responsive web applications that deliver high performance.
                <br><br>
                Whether I’m building a simple website or a complex web application, I focus on creating code that is not only functional but also scalable and easy to maintain. Here's a glimpse of what I'm capable of:
            </div>

            <div class="cells">
                <div class="cell" data-aos="fade-down" data-aos-delay="100">
                    <img src="images/html-logo.webp" alt=" html-logo">
                    <span>HTML</span>
                    <p>Structure web pages with semantic HTML5 elements to ensure proper content presentation.</p>
                </div>

                <div class="cell"  data-aos="fade-down" data-aos-delay="200">
                    <img src="images/css-logo.webp" alt=" css">
                    <span>CSS</span>
                    <p>Design and style responsive websites using CSS3, creating visually appealing layouts and animations.</p>
                </div>

                <div class="cell"  data-aos="fade-down" data-aos-delay="300">
                    <img src="images/bootstrap-logo.png" alt=" Bootstrap-logo">
                    <span>Bootstrap</span>
                    <p>Quickly develop responsive and mobile-first websites with Bootstrap, saving time on layout and design.</p>
                </div>

                <div class="cell"  data-aos="fade-down" data-aos-delay="400">
                    <img src="images/javascript-logo.webp" alt=" javascript-logo">
                    <span>Javascript</span>
                    <p>Build interactive web pages with dynamic content using JavaScript, implementing functions and event handling.</p>
                </div>
            </div>
        </section> 

        

        <!-- SECTION 3: TESTIMONIAL -->
        <section id="testimony" class="testimony-section" data-aos="fade-down" data-aos-delay="50">
            <h2>Testimony</h2>

            <div class="group">
                <div class="person-details">
                    <img src="images/testifer.jpg" alt="the picture">
                    <p class="margin"><strong>Samuel Amoo</strong></p>
                    <p>Senior Web Developer</p>
                </div>

                <div class="text">
                    <p>"Callistus has consistently displayed great passion and dedication to his work. His ability to grasp new concepts quickly and apply them practically is impressive. During our collaboration, he showed a strong understanding of web development technologies such as HTML, CSS, and a little in JavaScript. He approaches challenges with a problem-solving mindset and is always eager to learn and grow. I believe Callistus has great potential, and I look forward to seeing his future accomplishments in the tech industry!"</p>


                </div>
            </div>
        </section>

        <!-- SECTION 4: CONTACT -->
        <section id="contact" class="contact-section" data-aos="fade-down" data-aos-delay="50">
            <h2>Contact Me</h2>

            <div class="group">
                <div class="text">
                    <p>If you have any questions, want to collaborate on a project, or just want to say hello, feel free to reach out! I'm always open to new opportunities and connections in the tech world.</p>

                    <p>Fill out the form below, and I will get back to you as soon as possible!</p>
               </div>

                <form action="">
                    <label for="name">Name:</label>
                    <input type="text" id="name">

                    <label for="email">Email:</label>
                    <input type="email" id="email">

                    <label for="message">Message:</label>
                    <textarea id="message" cols="30" rows="10"></textarea>

                    <button type="submit">Send Message</button>
                </form>
            </div>
        </section>
    </main>

    <script src="https://unpkg.com/aos@2.3.1/dist/aos.js"></script>

    <script>
        AOS.init();
    </script>


    <!-- Your website content here -->
    <button id="scroll-to-top" title="Go to top">↑</button>

    <script>
        const scrollToTopButton = document.getElementById('scroll-to-top');

        window.addEventListener('scroll', () => {
        if (window.scrollY > 100) {
            scrollToTopButton.style.display = 'block';
        } else {
            scrollToTopButton.style.display = 'none';
        }
        });

        scrollToTopButton.addEventListener('click', () => {
        window.scrollTo({ top: 0, behavior: 'smooth' });
    });

    </script>

</body>
</html>