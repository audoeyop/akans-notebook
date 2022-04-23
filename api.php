<?php

// initialize the path to current directory
$path = $directory_path = realpath('.');

// check whether the path has been set
if(isset($_GET['path'])){

  $path = realpath($_GET['path']);
}

// set content type to json
header('Content-Type: application/json');

// restrict path traversal to current directory
if(str_starts_with($path, $directory_path)){

  echo json_encode(
    scandir($path)
  );
}
else {
  echo json_encode(
    array('error' => 'invalid file path')
  );
}


?>
