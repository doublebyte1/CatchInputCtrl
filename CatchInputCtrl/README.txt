Solution is building CatchInputCtrl and CatchInputCtrld, directly in the QT plugins/designer directory, so you dont need to do anything.
On the project using the plugin, you must:
- add the include path of this project to the include path of the project
- add $(QTDIR)\plugins\designer to the library path
- add CatchInputCtrl.lib to the libraries
- copy dlls to the path of the application

And everyting should be fine and the widget should "magically" appear on the designer!
Have fun!!! :-))


---- QUICK WAY TO BUILD (on the command line) ----------------
in the project path:

1 - nmake debug & nmake release
7 - copy %QTDIR%\plugins\designer\CatchInputCtrl*.dll [directory of the project/program that uses the plugin]

explanation:
- build debug version
- build release version
- (eventually) copy dlls to the directory of the project that uses this plugin
