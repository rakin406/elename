const ELEMENTS = {
  // Group 1(Alkali metals)
  h: "Hydrogen",
  li: "Lithium",
  na: "Sodium",
  k: "Potassium",
  rb: "Rubidium",
  cs: "Caesium",
  fr: "Francium",

  // Group 2(Alkali metals)
  be: "Berylium",
  mg: "Magnesium",
  ca: "Calcium",
  sr: "Strontium",
  ba: "Barium",
  ra: "Radium",

  // Group 3(Transition metals)
  sc: "Scandium",
  y: "Yitrium",
  lu: "Lutetium",
  lr: "Lawrencium",
  ti: "Titanium",
  zr: "Zirconium",
  hf: "Halfnium",
  rf: "Rutherfordium",
  v: "Vanadium",
  nb: "Niobium",
  ta: "Tantalium",
  db: "Dubnium",
  cr: "Chromium",
  mo: "Molundenum",
  w: "Tungsten",
  sg: "Seaborgium",
  mn: "Manganese",
  tc: "Technetium",
  re: "Rhenium",
  bh: "Bohrium",
  fe: "Iron",
  ru: "Ruthenium",
  os: "Osmium",
  hs: "Hassium",
  co: "Cobalt",
  rh: "Rhodium",
  ir: "Iridium",
  mt: "Meitnerium",
  ni: "Nickel",
  pd: "Palladium",
  pt: "Platinum",
  ds: "Darmstadtium",
  cu: "Copper",
  ag: "Silver",
  au: "Gold",
  rg: "Roentgenium",
  zn: "Zinc",
  cd: "Cadmium",
  hg: "Mercury",
  cn: "Copernicium",
  b: "Boron",
  al: "Aluminium",
  ga: "Gallium",
  in: "Indium",
  tl: "Thallium",
  nh: "Nihonium",

  // Group 4
  c: "Carbon",
  si: "Silicon",
  ge: "Germanium",
  sn: "Tin",
  pb: "Lead",

  // Group 5
  n: "Nitrogen",
  p: "Phosphorus",
  as: "Arsenic",
  sb: "Antimony",
  bi: "Bismuth",

  // Group 6
  o: "Oxygen",
  s: "Sulfur",
  se: "Selenium",
  te: "Tellerium",
  po: "Polonium",

  // Group 7(Halogens)
  f: "Fluorine",
  cl: "Chlorine",
  br: "Bromine",
  i: "Iodine",
  at: "Astatine",

  // Group 8(Noble gases)
  he: "Helium",
  ne: "Neon",
  ar: "Argon",
  kr: "Krypton",
  xe: "Xenon",
  rn: "Radon",

  // Artificial elements
  fl: "Flerovium",
  mc: "Moscovium",
  lv: "Livermorium",
  ts: "Tennessine",
  og: "Oganesson",
  la: "Lanthanium",
  ac: "Actinium",
  ce: "Cerium",
  th: "Thorium",
  pr: "Praseodymium",
  pa: "Protactinium",
  nd: "Neodymium",
  u: "Uranium",
  pm: "Promethium",
  np: "Neptunium",
  sm: "Samarium",
  pu: "Plutonium",
  eu: "Europium",
  am: "Americium",
  gd: "Gadolinium",
  cm: "Curium",
  tb: "Terbium",
  bk: "Berkelium",
  dy: "Dysprosium",
  cf: "Californium",
  ho: "Holmium",
  es: "Einsteinium",
  er: "Erbium",
  tm: "Thulium",
  md: "Mendelevium",
  yb: "Ytterbium",
  no: "Nobelium",
};

function showResult(arr) {
  // Show textarea
  let textArea = document.getElementById("result");
  if (textArea.style.display === "none") {
    textArea.style.display = "block";
  }

  // Append result to textarea
  textArea.value = "";
  for (let i = 0; i < arr.length; ++i) {
    // Check if it's last element
    if (i === arr.length - 1) {
      textArea.value += arr[i];
    } else {
      textArea.value = textArea.value + arr[i] + ", ";
    }
  }
}

function findElements() {
  let word = document.getElementById("word").value;
  let elementsInWord = [];
  for (const [key, value] of Object.entries(ELEMENTS)) {
    if (word.toLowerCase().includes(key)) {
      elementsInWord.push(value);
    }
  }
  elementsInWord.sort((a, b) => a.localeCompare(b));
  showResult(elementsInWord);
}
