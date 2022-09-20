# HTML Image Links

It is not difficult to put an HTML email link on your webpage but it can cause unnecessary spamming problem for your email account. There are people, who can run programs to harvest these types of emails and later use them for spamming in various ways.

You can have another option to facilitate people to send you emails. One option could be to use HTML forms to collect user data and then use PHP or CGI script to send an email.

A simple example, check our Contact Us Form. We take user feedback using this form and then we are using one CGI program which is collecting this information and sending us email to the one given email ID.

Note − You will learn about HTML Forms in HTML Forms and you will learn about CGI in our another tutorial Perl CGI Programming.

## HTML Email Tag
HTML `<a>` tag provides you option to specify an email address to send an email. While using `<a>` tag as an email tag, you will use mailto: email address along with href attribute. Following is the syntax of using mailto instead of using http.
```
<a href = "mailto: abc@example.com">Send Email</a>
```
This code will generate the following link which you can use to send email.

## Send Email
Now, if a user clicks this link, it launches one Email Client (like Lotus Notes, Outlook Express etc. ) installed on your user's computer. There is another risk to use this option to send email because if user do not have email client installed on their computer then it would not be possible to send email.

## Default Settings
You can specify a default email subject and email body along with your email address. Following is the example to use default subject and body.
```
<a href = "mailto:abc@example.com?subject=Feedback&body=Message">
Send Feedback
</a>
```
This code will generate a link to send email.

# References
https://www.tutorialspoint.com/html/html_email_links.htm
