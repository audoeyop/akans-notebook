angular.module('app', [])

.controller('myApp', function($scope, $locale) {

  // Syntax: Show errors

  $scope.output = "This is my first computer program.";

  $scope.tik_tak_toe = [];

  for(var i=0; i < 9; i++) {

    var cell_info = {value: null};

    $scope.tik_tak_toe.push(cell_info);
  }

  $scope.turn = "X";

  $scope.select_square = function(square){

    if(!square.value && !$scope.winner) {

      square.value = $scope.turn;
    }

    if($scope.check_winner()){

      $scope.winner = $scope.turn;
    }
    else {

      if ($scope.turn == "X"){

        $scope.turn = "O";
      }
      else if ($scope.turn == "O"){

        $scope.turn = "X";
      }
    }
  }

  $scope.check_winner = function(square){

    var t = $scope.tik_tak_toe;

    if(t[0].value && t[0].value == t[1].value && t[0].value == t[2].value){

      return true;
    }
    else if(t[0].value && t[0].value && t[0].value == t[3].value && t[0].value == t[6].value){

      return true;
    }
    else if(t[0].value && t[0].value == t[4].value && t[0].value == t[8].value){

      return true;
    }
    else if(t[1].value && t[1].value == t[4].value && t[1].value == t[7].value){

      return true;
    }
    else if(t[2].value && t[2].value == t[5].value && t[2].value == t[8].value){

      return true;
    }
    else if(t[3].value && t[3].value == t[4].value && t[3].value == t[5].value){

      return true;
    }
    else if(t[6].value && t[6].value == t[7].value && t[6].value == t[8].value){

      return true;
    }
  }

});
