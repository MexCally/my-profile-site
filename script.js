// ===== PREMIUM PORTFOLIO JAVASCRIPT =====

// Import AOS library
import AOS from "aos"

class PremiumPortfolio {
  constructor() {
    this.init()
  }

  init() {
    this.setupLoading()
    this.setupCursor()
    this.setupScrollProgress()
    this.setupAnimations()
    this.setupCounters()
    this.setupSkillBars()
    this.setupParticles()
    this.setupScrollToTop()
    this.setupFormInteractions()
    this.setupNavigation()
  }

  // ===== LOADING SCREEN =====
  setupLoading() {
    window.addEventListener("load", () => {
      const loadingScreen = document.querySelector(".loading-screen")
      setTimeout(() => {
        loadingScreen.style.opacity = "0"
        loadingScreen.style.visibility = "hidden"
        document.body.style.overflow = "visible"
      }, 1500)
    })
  }

  // ===== CUSTOM CURSOR =====
  setupCursor() {
    const cursor = document.querySelector(".cursor")
    const follower = document.querySelector(".cursor-follower")

    if (!cursor || !follower) return

    let mouseX = 0,
      mouseY = 0
    let followerX = 0,
      followerY = 0

    document.addEventListener("mousemove", (e) => {
      mouseX = e.clientX
      mouseY = e.clientY

      cursor.style.left = mouseX + "px"
      cursor.style.top = mouseY + "px"
    })

    // Smooth follower animation
    const animateFollower = () => {
      followerX += (mouseX - followerX) * 0.1
      followerY += (mouseY - followerY) * 0.1

      follower.style.left = followerX + "px"
      follower.style.top = followerY + "px"

      requestAnimationFrame(animateFollower)
    }
    animateFollower()

    // Cursor interactions
    const interactiveElements = document.querySelectorAll("a, button, .project-card, .skill-card")

    interactiveElements.forEach((el) => {
      el.addEventListener("mouseenter", () => {
        cursor.style.transform = "scale(1.5)"
        follower.style.transform = "scale(1.5)"
      })

      el.addEventListener("mouseleave", () => {
        cursor.style.transform = "scale(1)"
        follower.style.transform = "scale(1)"
      })
    })
  }

  // ===== SCROLL PROGRESS =====
  setupScrollProgress() {
    const progressBar = document.querySelector(".scroll-progress")

    window.addEventListener("scroll", () => {
      const scrolled = (window.scrollY / (document.documentElement.scrollHeight - window.innerHeight)) * 100
      progressBar.style.width = scrolled + "%"
    })
  }

  // ===== ENHANCED ANIMATIONS =====
  setupAnimations() {
    // Initialize AOS
    AOS.init({
      duration: 1000,
      easing: "ease-out-cubic",
      once: true,
      offset: 100,
    })

    // Text reveal animation
    const observerOptions = {
      threshold: 0.1,
      rootMargin: "0px 0px -50px 0px",
    }

    const textObserver = new IntersectionObserver((entries) => {
      entries.forEach((entry) => {
        if (entry.isIntersecting) {
          entry.target.classList.add("animate-in")
        }
      })
    }, observerOptions)

    document.querySelectorAll(".hero-title, .section-title, .hero-description").forEach((el) => {
      textObserver.observe(el)
    })
  }

  // ===== ANIMATED COUNTERS =====
  setupCounters() {
    const counters = document.querySelectorAll(".stat-number")

    const counterObserver = new IntersectionObserver(
      (entries) => {
        entries.forEach((entry) => {
          if (entry.isIntersecting) {
            this.animateCounter(entry.target)
            counterObserver.unobserve(entry.target)
          }
        })
      },
      { threshold: 0.5 },
    )

    counters.forEach((counter) => {
      counterObserver.observe(counter)
    })
  }

  animateCounter(element) {
    const target = Number.parseInt(element.getAttribute("data-target"))
    const duration = 2000
    const step = target / (duration / 16)
    let current = 0

    const updateCounter = () => {
      current += step
      if (current < target) {
        element.textContent = Math.floor(current)
        requestAnimationFrame(updateCounter)
      } else {
        element.textContent = target
      }
    }

    updateCounter()
  }

  // ===== SKILL PROGRESS BARS =====
  setupSkillBars() {
    const skillBars = document.querySelectorAll(".progress-bar")

    const skillObserver = new IntersectionObserver(
      (entries) => {
        entries.forEach((entry) => {
          if (entry.isIntersecting) {
            const progressBar = entry.target
            const progressFill = progressBar.querySelector(".progress-fill")
            const progress = progressBar.getAttribute("data-progress")

            setTimeout(() => {
              progressFill.style.width = progress + "%"
            }, 500)

            skillObserver.unobserve(entry.target)
          }
        })
      },
      { threshold: 0.5 },
    )

    skillBars.forEach((bar) => {
      skillObserver.observe(bar)
    })
  }

  // ===== PARTICLE SYSTEM =====
  setupParticles() {
    const particlesContainer = document.querySelector(".particles-container")
    if (!particlesContainer) return

    const particleCount = 50

    for (let i = 0; i < particleCount; i++) {
      const particle = document.createElement("div")
      particle.className = "particle"
      particle.style.cssText = `
                position: absolute;
                width: ${Math.random() * 4 + 1}px;
                height: ${Math.random() * 4 + 1}px;
                background: linear-gradient(45deg, #667eea, #764ba2);
                border-radius: 50%;
                opacity: ${Math.random() * 0.5 + 0.1};
                left: ${Math.random() * 100}%;
                top: ${Math.random() * 100}%;
                animation: float-particle ${Math.random() * 10 + 5}s linear infinite;
                animation-delay: ${Math.random() * 5}s;
            `
      particlesContainer.appendChild(particle)
    }

    // Add particle animation CSS
    const style = document.createElement("style")
    style.textContent = `
            @keyframes float-particle {
                0% {
                    transform: translateY(100vh) rotate(0deg);
                    opacity: 0;
                }
                10% {
                    opacity: 1;
                }
                90% {
                    opacity: 1;
                }
                100% {
                    transform: translateY(-100px) rotate(360deg);
                    opacity: 0;
                }
            }
        `
    document.head.appendChild(style)
  }

  // ===== SCROLL TO TOP =====
  setupScrollToTop() {
    const scrollBtn = document.getElementById("scroll-to-top")

    window.addEventListener("scroll", () => {
      if (window.scrollY > 300) {
        scrollBtn.classList.add("visible")
      } else {
        scrollBtn.classList.remove("visible")
      }
    })

    scrollBtn.addEventListener("click", () => {
      window.scrollTo({
        top: 0,
        behavior: "smooth",
      })
    })
  }

  // ===== FORM INTERACTIONS =====
  setupFormInteractions() {
    const form = document.querySelector(".premium-form")
    if (!form) return

    // Form submission with animation
    form.addEventListener("submit", (e) => {
      e.preventDefault()

      const submitBtn = form.querySelector('button[type="submit"]')
      const originalText = submitBtn.innerHTML

      // Loading state
      submitBtn.innerHTML = '<i class="fa-solid fa-spinner fa-spin"></i> Sending...'
      submitBtn.disabled = true

      // Simulate form submission
      setTimeout(() => {
        submitBtn.innerHTML = '<i class="fa-solid fa-check"></i> Message Sent!'
        submitBtn.style.background = "linear-gradient(135deg, #10b981, #059669)"

        // Reset form
        setTimeout(() => {
          form.reset()
          submitBtn.innerHTML = originalText
          submitBtn.disabled = false
          submitBtn.style.background = ""
        }, 2000)
      }, 2000)
    })

    // Enhanced input interactions
    const inputs = form.querySelectorAll("input, textarea")
    inputs.forEach((input) => {
      input.addEventListener("focus", () => {
        input.parentElement.classList.add("focused")
      })

      input.addEventListener("blur", () => {
        if (!input.value) {
          input.parentElement.classList.remove("focused")
        }
      })
    })
  }

  // ===== NAVIGATION ENHANCEMENTS =====
  setupNavigation() {
    const nav = document.querySelector(".premium-nav")
    let lastScrollY = window.scrollY

    window.addEventListener("scroll", () => {
      const currentScrollY = window.scrollY

      if (currentScrollY > lastScrollY && currentScrollY > 100) {
        nav.style.transform = "translateY(-100%)"
      } else {
        nav.style.transform = "translateY(0)"
      }

      lastScrollY = currentScrollY
    })

    // Smooth scroll for navigation links
    document.querySelectorAll('a[href^="#"]').forEach((anchor) => {
      anchor.addEventListener("click", function (e) {
        e.preventDefault()
        const target = document.querySelector(this.getAttribute("href"))
        if (target) {
          target.scrollIntoView({
            behavior: "smooth",
            block: "start",
          })
        }
      })
    })
  }
}

// ===== ADDITIONAL PREMIUM EFFECTS =====

// Parallax effect for hero section
window.addEventListener("scroll", () => {
  const scrolled = window.pageYOffset
  const parallaxElements = document.querySelectorAll(".hero-section")

  parallaxElements.forEach((element) => {
    const speed = 0.5
    element.style.transform = `translateY(${scrolled * speed}px)`
  })
})

// Magnetic effect for buttons
document.querySelectorAll(".premium-btn").forEach((btn) => {
  btn.addEventListener("mousemove", (e) => {
    const rect = btn.getBoundingClientRect()
    const x = e.clientX - rect.left - rect.width / 2
    const y = e.clientY - rect.top - rect.height / 2

    btn.style.transform = `translate(${x * 0.1}px, ${y * 0.1}px)`
  })

  btn.addEventListener("mouseleave", () => {
    btn.style.transform = "translate(0, 0)"
  })
})

// Initialize the premium portfolio
document.addEventListener("DOMContentLoaded", () => {
  new PremiumPortfolio()
})

// ===== PERFORMANCE OPTIMIZATIONS =====

// Lazy loading for images
const imageObserver = new IntersectionObserver((entries) => {
  entries.forEach((entry) => {
    if (entry.isIntersecting) {
      const img = entry.target
      img.src = img.dataset.src
      img.classList.remove("lazy")
      imageObserver.unobserve(img)
    }
  })
})

document.querySelectorAll("img[data-src]").forEach((img) => {
  imageObserver.observe(img)
})

// Debounced resize handler
let resizeTimer
window.addEventListener("resize", () => {
  clearTimeout(resizeTimer)
  resizeTimer = setTimeout(() => {
    // Handle resize events
    AOS.refresh()
  }, 250)
})
