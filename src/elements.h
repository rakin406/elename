#include <map>
#include <string>

#ifndef ELEMENTS_H
#define ELEMENTS_H
// All elements from the periodic table.
const std::map<std::string, std::string> ELEMENTS = {
    // Group 1(Alkali metals)
    {"h", "Hydrogen"},
    {"li", "Lithium"},
    {"na", "Sodium"},
    {"k", "Potassium"},
    {"rb", "Rubidium"},
    {"cs", "Caesium"},
    {"fr", "Francium"},

    // Group 2(Alkali metals)
    {"be", "Berylium"},
    {"mg", "Magnesium"},
    {"ca", "Calcium"},
    {"sr", "Strontium"},
    {"ba", "Barium"},
    {"ra", "Radium"},

    // Group 3(Transition metals)
    {"sc", "Scandium"},
    {"y", "Yitrium"},
    {"lu", "Lutetium"},
    {"lr", "Lawrencium"},
    {"ti", "Titanium"},
    {"zr", "Zirconium"},
    {"hf", "Halfnium"},
    {"rf", "Rutherfordium"},
    {"v", "Vanadium"},
    {"nb", "Niobium"},
    {"ta", "Tantalium"},
    {"db", "Dubnium"},
    {"cr", "Chromium"},
    {"mo", "Molundenum"},
    {"w", "Tungsten"},
    {"sg", "Seaborgium"},
    {"mn", "Manganese"},
    {"tc", "Technetium"},
    {"re", "Rhenium"},
    {"bh", "Bohrium"},
    {"fe", "Iron"},
    {"ru", "Ruthenium"},
    {"os", "Osmium"},
    {"hs", "Hassium"},
    {"co", "Cobalt"},
    {"rh", "Rhodium"},
    {"ir", "Iridium"},
    {"mt", "Meitnerium"},
    {"ni", "Nickel"},
    {"pd", "Palladium"},
    {"pt", "Platinum"},
    {"ds", "Darmstadtium"},
    {"cu", "Copper"},
    {"ag", "Silver"},
    {"au", "Gold"},
    {"rg", "Roentgenium"},
    {"zn", "Zinc"},
    {"cd", "Cadmium"},
    {"hg", "Mercury"},
    {"cn", "Copernicium"},
    {"b", "Boron"},
    {"al", "Aluminium"},
    {"ga", "Gallium"},
    {"in", "Indium"},
    {"tl", "Thallium"},
    {"nh", "Nihonium"},

    // Group 4
    {"c", "Carbon"},
    {"si", "Silicon"},
    {"ge", "Germanium"},
    {"sn", "Tin"},
    {"pb", "Lead"},

    // Group 5
    {"n", "Nitrogen"},
    {"p", "Phosphorus"},
    {"as", "Arsenic"},
    {"sb", "Antimony"},
    {"bi", "Bismuth"},

    // Group 6
    {"o", "Oxygen"},
    {"s", "Sulfur"},
    {"se", "Selenium"},
    {"te", "Tellerium"},
    {"po", "Polonium"},

    // Group 7(Halogens)
    {"f", "Fluorine"},
    {"cl", "Chlorine"},
    {"br", "Bromine"},
    {"i", "Iodine"},
    {"at", "Astatine"},

    // Group 8(Noble gases)
    {"he", "Helium"},
    {"ne", "Neon"},
    {"ar", "Argon"},
    {"kr", "Krypton"},
    {"xe", "Xenon"},
    {"rn", "Radon"},

    // Artificial elements
    {"fl", "Flerovium"},
    {"mc", "Moscovium"},
    {"lv", "Livermorium"},
    {"ts", "Tennessine"},
    {"og", "Oganesson"},
    {"la", "Lanthanium"},
    {"ac", "Actinium"},
    {"ce", "Cerium"},
    {"th", "Thorium"},
    {"pr", "Praseodymium"},
    {"pa", "Protactinium"},
    {"nd", "Neodymium"},
    {"u", "Uranium"},
    {"pm", "Promethium"},
    {"np", "Neptunium"},
    {"sm", "Samarium"},
    {"pu", "Plutonium"},
    {"eu", "Europium"},
    {"am", "Americium"},
    {"gd", "Gadolinium"},
    {"cm", "Curium"},
    {"tb", "Terbium"},
    {"bk", "Berkelium"},
    {"dy", "Dysprosium"},
    {"cf", "Californium"},
    {"ho", "Holmium"},
    {"es", "Einsteinium"},
    {"er", "Erbium"},
    {"tm", "Thulium"},
    {"md", "Mendelevium"},
    {"yb", "Ytterbium"},
    {"no", "Nobelium"}};
#endif