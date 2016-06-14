<item>
<title><![CDATA[[field:title/]]]></title>
<link>[field:arcurl/]</link>
<category>[field:typename/]</category>
<pubdate>[field:pubdate function='strftime("%a,%d%b%Y%H:%M:%S +0800",@me)'/]</pubdate>
<description><![CDATA[[field:array runphp='yes']@me = (strpos(@me['litpic'],'defaultpic') ? "": "<a href='{@me["arcurl"]}' target='_blank'><img src='{@me["litpic"]}' border='0' /><br />"); [/field:array][field:description function='html2text(@me)'/] ... ]]></description>
</item>