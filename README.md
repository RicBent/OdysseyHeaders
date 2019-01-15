OdysseyHeaders 
==============
This repository contains automatically generated header files from all symbols in Super Mario Odyssey for the Nintendo Switch.

Each symbol namespace has an own header file containing it's direct namespace members if any exist. If it contains sub namespaces a folder with it's name exists where all sub namespaces are placed. Namespace files are interpreted as classes instead of namespaces if it contains any constructor or destructor. Members of te root namespace can be found in Root.h. Actor classes that are not part of the al namespace are located in the Actors folder. State classes are in the States folder. Player classes not in the previous two categories are in the Player folder.
Of course this is not and will never be a full header documentation of the game as the symbols do not give infomation about return types and class types and thus this rather serves as an aid while creating full header documentation manually.

The only symbols not represented in any header file are static function members (viewable in static_function_names.txt) and a few members of the std namespace due to huge template parameters being too long for file names.
