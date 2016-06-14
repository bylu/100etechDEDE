<?php
$z[0]=Array("title","",24,38);
$z[1]=Array("arcurl","",57,72);
$z[2]=Array("typename","",91,108);
$z[3]=Array("pubdate","",130,197);
$z[3][4]['function']="strftime(\"%a,%d%b%Y%H:%M:%S +0800\",@me)";
$z[4]=Array("array","@me = (strpos(@me['litpic'],'defaultpic') ? \"\": \"<a href='{@me[\"arcurl\"]}' target='_blank'><img src='{@me[\"litpic\"]}' border='0' /><br />\"); ",231,412);
$z[4][4]['runphp']="yes";
$z[5]=Array("description","",412,458);
$z[5][4]['function']="html2text(@me)";

?>