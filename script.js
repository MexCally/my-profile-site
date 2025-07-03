// ===== SIMPLIFIED PORTFOLIO JAVASCRIPT =====

// Import AOS library
const AOS = window.AOS

document.addEventListener("DOMContentLoaded", () => {
  // Initialize AOS
  AOS.init({
    duration: 1000,
    easing: "ease-out-cubic",
    once: true,
    offset: 100,
  })

  // Scroll progress
  const progressBar = document.querySelector(".scroll-progress")
  if (progressBar) {
    window.addEventListener("scroll", () => {
      const scrolled = (window.scrollY / (document.documentElement.scrollHeight - window.innerHeight)) * 100
      progressBar.style.width = scrolled + "%"
    })
  }

  // Scroll to top button
  const scrollBtn = document.getElementById("scroll-to-top")
  if (scrollBtn) {
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

  // Animated counters
  const counters = document.querySelectorAll(".stat-number")
  const counterObserver = new IntersectionObserver(
    (entries) => {
      entries.forEach((entry) => {
        if (entry.isIntersecting) {
          animateCounter(entry.target)
          counterObserver.unobserve(entry.target)
        }
      })
    },
    { threshold: 0.5 },
  )

  counters.forEach((counter) => {
    counterObserver.observe(counter)
  })

  function animateCounter(element) {
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

  // Skill progress bars
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
})
