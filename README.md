# Thorn
A cross platform successor to both [Language Pad](https://github.com/ianmartinez/Language-Pad) and [Thorn Classic/Thorn 1.0](https://github.com/ianmartinez/ThornClassic). 

It is currently under construction and it aims to fix numerous deficiencies in its predecessors:
  - Both programs heavily relied on WinForms and Tundra, a library that I wrote over the years to add extra functionality  
  - Much of Thorn's code base (including Tundra) was designed when I was just starting out programming and did not scale well when I wanted to add new features to the program
  - Thorn (especially the unrealesed 2.0 beta version) was increasingly becoming a mess of spaghetti code
  - All of these factors made making both programs cross platform, as many people had requested very difficult
  
## Improvements to Thorn 2:
  - Completely rewritten in C++ and QT, which allows it to run on Windows, MacOS, and Linux
  - Merges the more advanced text editing features of Language Pad with the language acquisition features of Thorn 1
  - Pages can be arranged into sections
  - Pages can have the same name
  - Dictionary words can be grouped into subjects
  - A simplified and massively improved character editor:
      - The symbols panel, custom symbols dialog, and accent mark dialog have been merged into one panel
      - Custom characters can now be embedded either with the project or stored locally across multiple projects
      - Now includes many scripts that can't typed easily, such as Old Italic or Runes
      - Added dozens of new IPA symbols
      - IPA symbols can now be searched through (i.e. typing "fricative" will give you a list of fricatives)
      - Capitalize characters using the Shift key
      - Easily format two characters as an affricate or as coarticulated with a click of a button or a keyboard shortcut (i.e. ts -> t͡s)
  - Instead of being based off of a WYSIWYG rich text editor, Thorn 2 uses an extended version of HTML which allows easier extendability and the ability to use HTML features such as CSS  
  - The use of HTML allows projects created with it to be uploaded to websites or converted easily into Markdown for reddit
  - Questions can be weighted 
  
## Example markup:
```xml
<!-- Reference a local resource -->
<img src="@red_shirt.jpg"/>

The shirt is 
<!-- This creates 3 radio buttons: blue, red (correct answer), and green. 
The weight of the question is 2, so that means it counts as 2 points 
out of the total number of points in the section. -->
<radio weight="2"> 
  <w>blue</w> 
  <r>red</r> 
  <w>green</w> 
</radio>
```
