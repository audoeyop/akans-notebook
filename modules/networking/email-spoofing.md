# Email Spoofing

Email spoofing is a technique used in spam and phishing attacks to trick users into thinking a message came from a person or entity they either know or can trust. In spoofing attacks, the sender forges email headers so that client software displays the fraudulent sender address, which most users take at face value. Unless they inspect the header more closely, users see the forged sender in a message. If it's a name they recognize, they're more likely to trust it. So they'll click malicious links, open malware attachments, send sensitive data and even wire corporate funds.

Email spoofing is possible due to the way email systems are designed. Outgoing messages are assigned a sender address by the client application; outgoing email servers have no way to tell whether the sender address is legitimate or spoofed.

Recipient servers and antimalware software can help detect and filter spoofed messages. Unfortunately, not every email service has security protocols in place. Still, users can review email headers packaged with every message to determine whether the sender address is forged.

A Brief History of Email Spoofing
---------------------------------

Because of the way email protocols work, email spoofing has been an issue since the 1970s. It started with spammers who used it to get around email filters. The issue became more common in the 1990s, then grew into a global cybersecurity issue in the 2000s.

Security protocols were introduced in 2014 to help fight email spoofing and phishing. Because of these protocols, many spoofed email messages are now sent to user spamboxes or are rejected and never sent to the recipient's inboxes.

How Email Spoofing Works and Examples
-------------------------------------

The goal of email spoofing is to trick users into believing the email is from someone they know or can trust---in most cases, a colleague, vendor or brand. Exploiting that trust, the attacker asks the recipient to divulge information or take some other action.

As an example of email spoofing, an attacker might create an email that looks like it comes from PayPal. The message tells the user that their account will be suspended if they don't click a link, authenticate into the site and change the account's password. If the user is successfully tricked and types in credentials, the attacker now has credentials to authenticate into the targeted user's PayPal account, potentially stealing money from the user.

More complex attacks target financial employees and use social engineering and online reconnaissance to trick a targeted user into sending millions to an attacker's bank account.

To the user, a spoofed email message looks legitimate, and many attackers will take elements from the official website to make the message more believable. Here's an email spoofing example with a PayPal phishing attack:

Example of Email Spoofing

With a typical email client (such as Microsoft Outlook), the sender address is automatically entered when a user sends a new email message. But an attacker can programmatically send messages using basic scripts in any language that configures the sender address to an email address of choice. Email API endpoints allow a sender to specify the sender address regardless whether the address exists. And outgoing email servers can't determine whether the sender address is legitimate.

Outgoing email is retrieved and routed using the Simple Mail Transfer Protocol (SMTP). When a user clicks "Send" in an email client, the message is first sent to the outgoing SMTP server configured in the client software. The SMTP server identifies the recipient domain and routes it to the domain's email server. The recipient's email server then routes the message to the right user inbox.

For every "hop" an email message takes as it travels across the internet from server to server, the IP address of each server is logged and included in the email headers. These headers divulge the true route and sender, but many users do not check headers before interacting with an email sender.

The three major components of an email are:

- The sender address

- The recipient address

- The body of the email

Another component often used in phishing is the Reply-To field. This field is also configurable from the sender and can be used in a phishing attack. The Reply-To address tells the client email software where to send a reply, which can be different from the sender's address. Again, email servers and the SMTP protocol do not validate whether this email is legitimate or forged. It's up to the user to realize that the reply is going to the wrong recipient.

Here's an example forged email:
```
Forged Email Example -- Email Spoofing
```
Notice that the email address in the From sender field is supposedly from Bill Gates (b.gates@microsoft.com). There are two sections in these email headers to review. The "Received" section shows that the email was originally handled by the email server email.random-company.nl, which is the first clue that this is a case of email spoofing. But the best field to review is the Received-SPF section---notice that the section has a "Fail" status.

Sender Policy Framework (SPF) is a security protocol set as a standard in 2014. It works in conjunction with DMARC (Domain-based Message Authentication, Reporting and Conformance) to stop malware and phishing attacks.

SPF can detect spoofed email, and it's become common with most email services to combat phishing. But it's the responsibility of the domain holder to use SPF. To use SPF, a domain holder must configure a DNS TXT entry specifying all IP addresses authorized to send email on behalf of the domain. With this DNS entry configured, recipient email servers lookup the IP address when receiving a message to ensure that it matches the email domain's authorized IP addresses. If there is a match, the Received-SPF field displays a PASS status. If there is no match, the field displays a FAIL status. Recipients should review this status when receiving an email with links, attachments or written instructions.

Email Spoofing and Phishing Statistics
--------------------------------------

Email clients configured to use SPF and DMARC will automatically reject emails that fail validation or send them to the user's spambox. Attackers target people and businesses, and just one successfully tricked user can lead to theft of money, data and credentials.

It's no wonder that phishing is one of today's most prominent cyber-attacks. Consider the following statistics:

-   3.1 billion domain spoofing emails are sent per day.
-   More than 90% of cyber-attacks start with an email message.
-   Email spoofing and phishing have had a worldwide impact costing an estimated $26 billion since 2016.
-   In 2019, the FBI reported that 467,000 cyber-attacks were successful, and 24% of them were email-based.
-   The average scam tricked users out of $75,000.

A common attack that uses email spoofing is CEO fraud, also known as business email compromise (BEC). In BEC, the attacker spoofs the sender's email address to impersonate an executive or owner of a business. This attack usually targets an employee in the financial, accounting, or accounts payable departments.

Even smart, well-intentioned employees can be tricked into sending money when the request comes from someone they trust---especially an authority figure. Here are just a few high-profile examples of phishing scams:

-   The Canadian City Treasure was tricked into transferring $98,000 from taxpayer funds by an attacker claiming to be city manager Steve Kanellakos.
-   Mattel was tricked into sending $3 million to an account in China, but it was lucky enough to claw back the money when the defrauded financial executive was able to confirm that the email message was not sent by the CEO, Christopher Sinclair.
-   The Crelan bank in Belgium was tricked into sending attackers €70 million.

How to Protect from Email Spoofing
----------------------------------

Even with email security in place, some malicious email messages reach user inboxes. Whether you're an employee responsible for financial decisions or as someone who uses personal email at work, there are several steps you can take to avoid becoming a victim of email spoofing:

-   Never click links to access a website where you're asked to authenticate. Always type the official domain in your browser and authenticate directly on the site.
-   The steps to view email headers are different for each email client, so first look up how to view email headers for your inbox software. Then, open email headers and look for the Received-SPF section of the headers and look for a PASS or FAIL response.
-   Copy and paste the content of an email message into a search engine. Chances are that text used in a common phishing attack has already been reported and published on the Internet.
-   Be suspicious of email supposedly from an official source with bad spelling or grammar.

-   Avoid opening attachments from suspicious or unknown senders.
-   Emails promising riches---or anything else that's too good to be true---is likely a scam.
-   Beware of emails that create a sense of urgency or danger. Phishing and BEC attacks often try to short-circuit recipients' natural skepticism by suggesting that something bad will happen if they don't act quickly. Treat email links with extra caution if the message warns of pending account closures, scheduled payment failures or suspicious activity on one of your financial accounts. Visit the website directly through your browser, not the link in the email.


## PHP Email Spoofing Example
```
<?php
         $to = "target@somedomain.com";
         $subject = "This is subject";

         $message = "<b>This is HTML message.</b>";
         $message .= "<h1>This is headline.</h1>";

         $header = "From:spoofedEmail@somedomain.com \r\n";
         $header .= "MIME-Version: 1.0\r\n";
         $header .= "Content-type: text/html\r\n";

         $retval = mail ($to,$subject,$message,$header);

         if( $retval == true ) {
            echo "Message sent successfully...";
         }else {
            echo "Message could not be sent...";
         }
      ?>
```
