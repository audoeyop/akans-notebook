require 'httparty'

puts "response = HTTParty.get('http://api.stackexchange.com/2.2/questions?site=stackoverflow')"
get_response = HTTParty.get('http://api.stackexchange.com/2.2/questions?site=stackoverflow')

puts "get_response.body: #{get_response.body}\n"
puts "get_response.code: #{get_response.code}\n"
puts "get_response.message: #{get_response.message}"
puts "get_response.headers.inspect: #{get_response.headers.inspect}\n\n"

puts "post_response = HTTParty.post('http://api.stackexchange.com/2.2/questions?site=stackoverflow')"
post_response = HTTParty.post('http://api.stackexchange.com/2.2/questions?site=stackoverflow',
    body: { name: 'Michael Green', age: 35}.to_json,
    headers: { 'Content-Type': 'application/json' })

puts "post_response.body: #{post_response.body}\n"
puts "post_response.code: #{post_response.code}\n"
puts "post_response.message: #{post_response.message}"
puts "post_response.headers.inspect: #{post_response.headers.inspect}\n\n"

puts "delete_response = HTTParty.delete('https://api.cloudflare.com/client/v4/zones/5746746785687568678785/purge_cache')"
delete_response = HTTParty.delete('https://api.cloudflare.com/client/v4/zones/5746746785687568678785/purge_cache',
            headers: { "X-Auth-Email": "myemail@company.com" , "X-Auth-Key": "7456785476856789567965","Content-Type": "application/json" } ,
            body: {"purge_everything": "true"}.to_json)

puts "delete_response.body: #{delete_response.body}\n"
puts "delete_response.code: #{delete_response.code}\n"
puts "delete_response.message: #{delete_response.message}"
puts "delete_response.headers.inspect: #{delete_response.headers.inspect}"
