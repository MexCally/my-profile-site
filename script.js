// ===== SIMPLIFIED PORTFOLIO JAVASCRIPT =====

// Import AOS library
const AOS = window.AOS

document.addEventListener("DOMContentLoaded", () => {
  const copyrightYear = document.getElementById("copyright-year")
  if (copyrightYear) {
    copyrightYear.textContent = new Date().getFullYear()
  }

  const contactForm = document.getElementById("contact-form")
  if (contactForm) {
    const formStatus = document.getElementById("form-status")
    const submitButton = contactForm.querySelector('button[type="submit"]')
    const submitLabel = submitButton?.querySelector("span")

    if (formStatus && submitButton && submitLabel) {
      contactForm.addEventListener("submit", async (event) => {
        event.preventDefault()

        const endpoint = new URL(contactForm.action)
        const accessKey = contactForm.querySelector('input[name="access_key"]')?.value
        const hasConfiguredEndpoint =
          endpoint.origin === "https://api.web3forms.com" &&
          endpoint.pathname === "/submit" &&
          Boolean(accessKey && accessKey !== "YOUR_ACCESS_KEY")

        if (!hasConfiguredEndpoint) {
          formStatus.dataset.state = "error"
          formStatus.textContent =
            "The contact form isn't set up yet. Please email me directly at emekaolisa232@gmail.com."
          return
        }

        submitButton.disabled = true
        submitLabel.textContent = "Sending..."
        formStatus.textContent = ""
        delete formStatus.dataset.state

        try {
          const response = await fetch(endpoint, {
            method: "POST",
            body: new FormData(contactForm),
            headers: { Accept: "application/json" },
          })
          const result = await response.json()

          if (!response.ok || result.success !== true) {
            throw new Error(result.message || `Form submission failed with status ${response.status}`)
          }

          formStatus.dataset.state = "success"
          formStatus.textContent = "Thanks for your message! I'll get back to you as soon as possible."
          contactForm.reset()
        } catch (error) {
          console.error("Unable to submit contact form:", error)
          formStatus.dataset.state = "error"
          formStatus.textContent =
            "Your message couldn't be sent right now. Please try again or email me directly at emekaolisa232@gmail.com."
        } finally {
          submitButton.disabled = false
          submitLabel.textContent = "Send Message"
        }
      })
    }
  }

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
    const prefix = element.getAttribute("data-prefix") || ""
    const duration = 2000
    const step = target / (duration / 16)
    let current = 0

    const updateCounter = () => {
      current += step
      if (current < target) {
        element.textContent = `${prefix}${Math.floor(current)}`
        requestAnimationFrame(updateCounter)
      } else {
        element.textContent = `${prefix}${target}`
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
