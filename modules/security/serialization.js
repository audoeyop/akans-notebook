User Input: {"name": "Sammy", "city": "Arlington"}

Server adds params: {"name": "Sammy", "city": "Arlington", "date": "2/10/2022", "cmd": "calc", "filename": "user1.log"}

name = Sammy

malicious payload = Sammy", "age": "34", "city": "Fairfax", "date": "2/10/2021", "cmd": "malware

Server adds params: {"name": "Sammy", "age": "34", "city": "Fairfax", "date": "2/10/2021", "cmd": "malware", "city": "Arlington", "date": "2/10/2022", "cmd": "calc"}

Deserialization (Input as string):
user_input_obj = {"name": "Sammy",
 "city": "Fairfax",
 "date": "2/10/2021",
 "cmd": "malware",
 "address": "Value",
 "city": "Arlington",
 "date": "2/10/2022",
 "cmd": "calc"
}

Converted to (JSON object):
user_input_obj = {"name": "Sammy",
 "city": "Fairfax",
 "date": "2/10/2021",
 "cmd": "malware"
}

Actual:
-> name = "Sammy"
-> city = "Fairfax"
-> date = "2/10/2021"
-> cmd = "malware"

Expected:
-> city = "Arlington"
-> date = "2/10/2022"
-> cmd = "calc"

Expected
<user>
  <name>
    Sammy
  </name>
  <city>
    Arlington
  </city>
</user>

Malicious
<user>
  <name>
    Sammy</name><city>Fairfax</city></user>
  </name>
  <city>
    Arlington
  </city>
</user>
