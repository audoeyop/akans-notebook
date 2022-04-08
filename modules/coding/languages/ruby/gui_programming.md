# Ruby GUI Programming

The standard graphical user interface (GUI) for Ruby is Tk. Tk started out as the GUI for the Tcl scripting language developed by John Ousterhout.

Tk has the unique distinction of being the only cross-platform GUI. Tk runs on Windows, Mac, and Linux and provides a native look-and-feel on each operating system.

The basic component of a Tk-based application is called a widget. A component is also sometimes called a window, since, in Tk, "window" and "widget" are often used interchangeably.

Tk applications follow a widget hierarchy where any number of widgets may be placed within another widget, and those widgets within another widget, ad infinitum. The main widget in a Tk program is referred to as the root widget and can be created by making a new instance of the TkRoot class.

Most Tk-based applications follow the same cycle: create the widgets, place them in the interface, and finally, bind the events associated with each widget to a method.

There are three geometry managers; place, grid and pack that are responsible for controlling the size and location of each of the widgets in the interface.

Installation
The Ruby Tk bindings are distributed with Ruby but Tk is a separate installation. Windows users can download a single click Tk installation from ActiveState's ActiveTcl.

Mac and Linux users may not need to install it because there is a great chance that its already installed along with OS but if not, you can download prebuilt packages or get the source from the Tcl Developer Xchange.

Simple Tk Application
A typical structure for Ruby/Tk programs is to create the main or root window (an instance of TkRoot), add widgets to it to build up the user interface, and then start the main event loop by calling Tk.mainloop.

The traditional Hello, World! example for Ruby/Tk looks something like this −

require 'tk'

root = TkRoot.new { title "Hello, World!" }
TkLabel.new(root) do
   text 'Hello, World!'
   pack { padx 15 ; pady 15; side 'left' }
end
Tk.mainloop
Here, after loading the tk extension module, we create a root-level frame using TkRoot.new. We then make a TkLabel widget as a child of the root frame, setting several options for the label. Finally, we pack the root frame and enter the main GUI event loop.

If you would run this script, it would produce the following result −

Ruby/Tk Hello World
Ruby/Tk Widget Classes
There is a list of various Ruby/Tk classes, which can be used to create a desired GUI using Ruby/Tk.

TkFrame Creates and manipulates frame widgets.

TkButton Creates and manipulates button widgets.

TkLabel Creates and manipulates label widgets.

TkEntry Creates and manipulates entry widgets.

TkCheckButton Creates and manipulates checkbutton widgets.

TkRadioButton Creates and manipulates radiobutton widgets.

TkListbox Creates and manipulates listbox widgets.

TkComboBox Creates and manipulates listbox widgets.

TkMenu Creates and manipulates menu widgets.

TkMenubutton Creates and manipulates menubutton widgets.

Tk.messageBox Creates and manipulates a message dialog.

TkScrollbar Creates and manipulates scrollbar widgets.

TkCanvas Creates and manipulates canvas widgets.

TkScale Creates and manipulates scale widgets.

TkText Creates and manipulates text widgets.

TkToplevel Creates and manipulates toplevel widgets.

TkSpinbox Creates and manipulates Spinbox widgets.

TkProgressBar Creates and manipulates Progress Bar widgets.

Dialog Box Creates and manipulates Dialog Box widgets.

Tk::Tile::Notebook Display several windows in limited space with notebook metaphor.

Tk::Tile::Paned Displays a number of subwindows, stacked either vertically or horizontally.

Tk::Tile::Separator Displays a horizontal or vertical separator bar.

Ruby/Tk Font, Colors and Images Understanding Ruby/Tk Fonts, Colors and Images

Standard Configuration Options
All widgets have a number of different configuration options, which generally control how they are displayed or how they behave. The options that are available depend upon the widget class of course.

Here is a list of all the standard configuration options, which could be applicable to any Ruby/Tk widget.

There are other widget specific options also, which would be explained along with widgets.
Ruby/Tk Geometry Management
Geometry Management deals with positioning different widgets as per requirement. Geometry management in Tk relies on the concept of master and slave widgets.

A master is a widget, typically a top-level window or a frame, which will contain other widgets, which are called slaves. You can think of a geometry manager as taking control of the master widget, and deciding what will be displayed within.

The geometry manager will ask each slave widget for its natural size, or how large it would ideally like to be displayed. It then takes that information and combines it with any parameters provided by the program when it asks the geometry manager to manage that particular slave widget.

There are three geometry managers place, grid and pack that are responsible for controlling the size and location of each of the widgets in the interface.

grid Geometry manager that arranges widgets in a grid.

pack Geometry manager that packs around edges of cavity.

place Geometry manager for fixed or rubber-sheet placement.

Ruby/Tk Event Handling
Ruby/Tk supports event loop, which receives events from the operating system. These are things like button presses, keystrokes, mouse movement, window resizing, and so on.

Ruby/Tk takes care of managing this event loop for you. It will figure out what widget the event applies to (did the user click on this button? if a key was pressed, which textbox had the focus?), and dispatch it accordingly. Individual widgets know how to respond to events, so for example a button might change color when the mouse moves over it, and revert back when the mouse leaves.

At a higher level, Ruby/Tk invokes callbacks in your program to indicate that something significant happened to a widget For either case, you can provide a code block or a Ruby Proc object that specifies how the application responds to the event or callback.

Let's take a look at how to use the bind method to associate basic window system events with the Ruby procedures that handle them. The simplest form of bind takes as its inputs a string indicating the event name and a code block that Tk uses to handle the event.

For example, to catch the ButtonRelease event for the first mouse button on some widget, you'd write −

someWidget.bind('ButtonRelease-1') {
   ....code block to handle this event...
}
An event name can include additional modifiers and details. A modifier is a string like Shift, Control or Alt, indicating that one of the modifier keys was pressed.

So, for example, to catch the event that's generated when the user holds down the Ctrl key and clicks the right mouse button.

someWidget.bind('Control-ButtonPress-3', proc { puts "Ouch!" })
Many Ruby/Tk widgets can trigger callbacks when the user activates them, and you can use the command callback to specify that a certain code block or procedure is invoked when that happens. As seen earlier, you can specify the command callback procedure when you create the widget −

helpButton = TkButton.new(buttonFrame) {
   text "Help"
   command proc { showHelp }
}
Or you can assign it later, using the widget's command method −

helpButton.command proc { showHelp }
Since the command method accepts either procedures or code blocks, you could also write the previous code example as −

helpButton = TkButton.new(buttonFrame) {
   text "Help"
   command { showHelp }
}
You can use the following basic event types in your Ruby/Tk application −
The configure Method
The configure method can be used to set and retrieve any widget configuration values. For example, to change the width of a button you can call configure method any time as follows −

require "tk"

button = TkButton.new {
   text 'Hello World!'
   pack
}
button.configure('activebackground', 'blue')
Tk.mainloop
To get the value for a current widget, just supply it without a value as follows −

color = button.configure('activebackground')
You can also call configure without any options at all, which will give you a listing of all options and their values.

The cget Method
For simply retrieving the value of an option, configure returns more information than you generally want. The cget method returns just the current value.

color = button.cget('activebackground')

# References
https://www.tutorialspoint.com/ruby/ruby_tk_guide.htm
