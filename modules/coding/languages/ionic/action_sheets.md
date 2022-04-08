# Ionic Action Sheets

The Action Sheet is an Ionic service that will trigger a slide up pane on the bottom of the screen, which you can use for various purposes.

Using Action Sheet
In the following example, we will show you how to use the Ionic action sheet. First we will inject $ionicActionSheet service as a dependency to our controller, then we will create $scope.showActionSheet() function, and lastly we will create a button in our HTML template to call the function we created.

Controller Code
.controller('myCtrl', function($scope, $ionicActionSheet) {
   $scope.triggerActionSheet = function() {
      // Show the action sheet
      var showActionSheet = $ionicActionSheet.show({
         buttons: [
            { text: 'Edit 1' },
            { text: 'Edit 2' }
         ],

         destructiveText: 'Delete',
         titleText: 'Action Sheet',
         cancelText: 'Cancel',

         cancel: function() {
            // add cancel code...
         },

         buttonClicked: function(index) {
            if(index === 0) {
               // add edit 1 code
            }

            if(index === 1) {
               // add edit 2 code
            }
         },

         destructiveButtonClicked: function() {
            // add delete code..
         }
      });
   };
})
HTML Code
<button class = "button">Action Sheet Button</button>
Code Explained
When we tap the button, it will trigger the $ionicActionSheet.show function and the Action Sheet will appear. You can create your own functions that will be called when one of the options is taped. The cancel function will close the pane, but you can add some other behavior, which will be called when the cancel option is tapped before the pane is closed.

The buttonClicked function is the place where you can write the code that will be called when one of the edit options is tapped. We can keep track of multiple buttons by using the index parameter. The destructiveButtonCLicked is a function that will be triggered when the delete option is tapped. This option is red by default.

Ionic Action Sheet
The $ionicActionSheet.show() method has some other useful parameters. You can check all of them in the following table.

Show Method Options
Properties	Type	Details
buttons	object	Creates button object with a text field.
titleText	string	The title of the action sheet.
cancelText	string	The text for cancel button.
destructiveText	string	The text for a destructive button.
cancel	function	Called when cancel button, backdrop or hardware back button is pressed.
buttonClicked	function	Called when one of the buttons is tapped. Index is used for keeping track of which button is tapped. Return true will close the action sheet.
destructiveButtonClicked	function	Called when destructive button is clicked. Return true will close the action sheet.
cancelOnStateChange	boolean	If true (default) it will cancel the action sheet when navigation state is changed.

# References
https://www.tutorialspoint.com/ionic/ionic_js_action_sheet.htm
