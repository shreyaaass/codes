let track = document.querySelector(".car_track");
let car = document.querySelector(".car");
let left = document.querySelector(".button-left");
let right = document.querySelector(".button-right");
let slides = Array.from(track.children);
dot_array = document.querySelector(".car_nav");
let activeSlide = 0;
console.log(activeSlide);
let targetIndex;
// console.log(dot_array);
dots = Array.from(dot_array.children);
console.log(dots);
let slideSize = slides[0].getBoundingClientRect().width;

slides.forEach((slide, index) => {
  slide.style.left = slideSize * index + "px";
});

let moveSlide = (track, currentSlide, targetSlide) => {
  track.style.transform = "translateX(-" + targetSlide.style.left + ")";
  currentSlide.classList.remove("current-slide");
  currentSlide.classList.add("hidden");
  targetSlide.classList.add("current-slide");
  targetSlide.classList.remove("hidden");
  activeSlide = findSlideIndex(slides);
};
console.log(slides);
right.addEventListener("click", function (e) {
  let currentSlide = track.querySelector(".current-slide");
  let nextSlide = currentSlide.nextElementSibling;
  console.log(nextSlide);
  currentDot = dot_array.querySelector(".current-slide");
  nextDot = currentDot.nextElementSibling;
  if (activeSlide == slides.length - 1) {
    nextSlide = slides[0];
    nextDot = dots[0];
  }
  moveSlide(track, currentSlide, nextSlide);
  updateDots(currentDot, nextDot);
});
left.addEventListener("click", function (e) {
  let currentSlide = track.querySelector(".current-slide");
  let prevSlide = currentSlide.previousElementSibling;
  currentDot = dot_array.querySelector(".current-slide");
  prevDot = currentDot.previousElementSibling;
  if (activeSlide == 0) {
    prevSlide = slides[slides.length - 1];
    prevDot = dots[dots.length - 1];
  }
  moveSlide(track, currentSlide, prevSlide);
  updateDots(currentDot, prevDot);
});
updateDots = (currentDot, targetDot) => {
  currentDot.classList.remove("current-slide");
  targetDot.classList.add("current-slide");
};
dot_array.addEventListener("click", function (e) {
  let targetDot = e.target.closest("button");
  console.log(targetDot);
  if (!targetDot) return;
  let currentSlide = track.querySelector(".current-slide");
  let currentDot = dot_array.querySelector(".current-slide");
  let targetIndex = dots.findIndex((dot) => dot === targetDot);
  let targetSlide = slides[targetIndex];
  moveSlide(track, currentSlide, targetSlide);
  updateDots(currentDot, targetDot);
});
findSlideIndex = (slides) => {
  let currentSlide = track.querySelector(".current-slide");
  a = slides.findIndex((dot) => dot === currentSlide);
  console.log(a);
  return a;
};
