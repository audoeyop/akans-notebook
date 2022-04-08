require 'sinatra'
require_relative "../../helpers/ruby/notices"

port = 4567

if ARGV[0]

  port = ARGV[0].to_i
end

set :bind, '0.0.0.0'
set :port, port
enable :sessions
configure { set :server, :puma }


get '/' do

  if session[:user]

    user_text = "<br/>User: #{session[:user]}"
  end

  response.headers['Custom-Header-Akan'] = '''this is a test Akan

<html><body>PWNED</body></html>
  '''

  "Welcome to The Complete Software Engineer<br/>Runnung on port: #{port}#{user_text}"
end

get '/time' do

  Time.now.to_s
end

get '/params' do

  xss_warning = Notices::Notice.new.xss

  "#{xss_warning}<b>URL Parameters:</b><br/>#{params.to_s}<br/><br/><b>URL 'name' Parameter (?name=<text>):</b><br/>#{params[:name]}"
end

login_page_html = "<b>Login Page (Runnung on port: #{port})</b><br/><small>credentials: admin/password<br/><br/><form method='post' action='/login'>Username: <input type='text' name='username' /><br/>Password: <input type='text' name='password' /><br/><input type='submit' name='Submit'></form>"

get '/login' do

  "#{login_page_html}"
end

post '/login' do

  response = "<div style='color:red'>Invalid Credentials</div><br/>#{login_page_html}"

  if params[:username] == "admin" && params[:password] == "password"

    session[:user] = "admin"

    response = "<div style='color:green'>Login Successful</div>"
  end

  response
end

get '/logout' do

  # destroy session
  # this also deletes session[:user]
  session.clear

  "#{login_page_html}"
end

delete '/delete' do

  'This is a delete action'
end
