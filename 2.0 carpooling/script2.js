/*************************************
 * Liquid Morphing Background Effect
 *************************************/

// Get the canvas and its context
const canvas = document.getElementById("liquidCanvas");
const ctx = canvas.getContext("2d");

// Set canvas dimensions to fill the window
let cw = canvas.width = window.innerWidth;
let ch = canvas.height = window.innerHeight;
const center = { x: cw / 2, y: ch / 2 };

// Define two shape sets: car and bike silhouettes (normalized coordinates)
const carShape = [
  { x: -0.5, y: -0.1 },
  { x: -0.3, y: -0.4 },
  { x: 0.0,  y: -0.5 },
  { x: 0.3,  y: -0.4 },
  { x: 0.5,  y: -0.1 },
  { x: 0.5,  y: 0.2 },
  { x: 0.3,  y: 0.3 },
  { x: -0.3, y: 0.3 },
  { x: -0.5, y: 0.2 }
];
const bikeShape = [
  { x: -0.4, y: 0.0 },
  { x: -0.2, y: -0.3 },
  { x: 0.0,  y: -0.2 },
  { x: 0.2,  y: -0.3 },
  { x: 0.4,  y: 0.0 },
  { x: 0.2,  y: 0.3 },
  { x: 0.0,  y: 0.2 },
  { x: -0.2, y: 0.3 },
  { x: -0.4, y: 0.0 }
];

const pointCount = carShape.length;
const points = [];
let shapeScale = Math.min(cw, ch) * 0.25;

// Initialize points with the car shape (the starting shape)
for (let i = 0; i < pointCount; i++) {
  const sx = center.x + carShape[i].x * shapeScale;
  const sy = center.y + carShape[i].y * shapeScale;
  points.push({
    ox: sx,
    oy: sy,
    x: sx,
    y: sy,
    vx: 0,
    vy: 0
  });
}

// Update canvas on window resize
window.addEventListener("resize", () => {
  cw = canvas.width = window.innerWidth;
  ch = canvas.height = window.innerHeight;
  center.x = cw / 2;
  center.y = ch / 2;
  shapeScale = Math.min(cw, ch) * 0.25;
});

// Track mouse for repulsion effect
let mouse = { x: -9999, y: -9999 };
document.addEventListener("mousemove", (e) => {
  mouse.x = e.clientX;
  mouse.y = e.clientY;
});

// Morph settings for smoother transitions
const morphSpeed = 0.0012; // Slightly increased for a smoother flow
let time = 0;

// Animation loop for the liquid morphing shape
function animate() {
  requestAnimationFrame(animate);
  ctx.clearRect(0, 0, cw, ch);

  time += morphSpeed;
  let t = (Math.sin(time) + 1) / 2; // Oscillates smoothly between 0 and 1

  // Update each point's target using linear interpolation between car and bike shapes
  for (let i = 0; i < pointCount; i++) {
    const carPos = carShape[i];
    const bikePos = bikeShape[i];
    const tx = carPos.x * (1 - t) + bikePos.x * t;
    const ty = carPos.y * (1 - t) + bikePos.y * t;
    points[i].ox = center.x + tx * shapeScale;
    points[i].oy = center.y + ty * shapeScale;
  }

  // Update physics for each point (using a slightly higher damping for smoothness)
  for (let p of points) {
    const dxm = p.x - mouse.x;
    const dym = p.y - mouse.y;
    const dist = Math.sqrt(dxm * dxm + dym * dym);
    if (dist < 150) {
      const force = (1 - dist / 150) * 1000;
      const angle = Math.atan2(dym, dxm);
      p.vx += Math.cos(angle) * force;
      p.vy += Math.sin(angle) * force;
    }
    // Spring force pulling the point toward its target
    p.vx += (p.ox - p.x) * 0.02;
    p.vy += (p.oy - p.y) * 0.02;

    // Apply damping
    p.vx *= 0.95;
    p.vy *= 0.95;
    // Update position (using a larger factor for smoother movement)
    p.x += p.vx * 0.008;
    p.y += p.vy * 0.008;
  }

  // Draw smooth liquid blob using quadratic curves
  ctx.fillStyle = "#7f5af0";
  ctx.beginPath();
  let first = points[0];
  ctx.moveTo(first.x, first.y);
  for (let i = 1; i <= points.length; i++) {
    const current = points[i % points.length];
    const prev = points[i - 1];
    const mx = (prev.x + current.x) / 2;
    const my = (prev.y + current.y) / 2;
    ctx.quadraticCurveTo(prev.x, prev.y, mx, my);
  }
  ctx.closePath();
  ctx.fill();
}
animate();

/*************************************
 * Website Interactions & Animations
 *************************************/

// Smooth scrolling
document.querySelectorAll(".nav-links a").forEach((anchor) => {
  anchor.addEventListener("click", function (e) {
    e.preventDefault();
    const targetSection = document.querySelector(this.getAttribute("href"));
    if (targetSection) {
      targetSection.scrollIntoView({ behavior: "smooth" });
    }
  });
});

// "Get Started" button
document.getElementById("getStartedBtn").addEventListener("click", () => {
  window.location.href = "#contact";
});

// Contact form submission (demo)
document.getElementById("contactForm").addEventListener("submit", function (e) {
  e.preventDefault();
  alert("Thank you for getting in touch. We will contact you soon!");
  this.reset();
});

/*************************************
 * Authentication Modal Logic
 *************************************/
const authBtn = document.getElementById("authBtn");
const authModal = document.getElementById("authModal");
const closeBtn = document.querySelector(".close-btn");
const tabs = document.querySelectorAll(".auth-tabs .tab");
const tabContents = document.querySelectorAll(".tab-content");

// Open modal
authBtn.addEventListener("click", () => {
  authModal.classList.add("active");
});

// Close modal
closeBtn.addEventListener("click", () => {
  authModal.classList.remove("active");
});

// Tab switching
tabs.forEach(tab => {
  tab.addEventListener("click", (e) => {
    tabs.forEach(t => t.classList.remove("active"));
    tabContents.forEach(tc => tc.classList.remove("active"));
    e.currentTarget.classList.add("active");
    const target = e.currentTarget.getAttribute("data-tab");
    document.getElementById(target).classList.add("active");
  });
});

document.getElementById("loginForm").addEventListener("submit", function(e) {
  e.preventDefault();
  alert("Logged in (demo)!");
  authModal.classList.remove("active");
  this.reset();
});
document.getElementById("signupForm").addEventListener("submit", function(e) {
  e.preventDefault();
  alert("Signed up (demo)!");
  authModal.classList.remove("active");
  this.reset();
});
