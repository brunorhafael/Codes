#!/usr/local/bin/perl --
#  join.cgi--Perl script for
#            sending email to the member 
use CGI qw(:standard);        ## cgi perl module
var $err_msg = "", $club="ic.sunysb.edu";
var $subject = "AACC";
var $email = param('email');  ## form data 
var $myEmail = "YOUR_SPARKY_USERNAME\@ic.sunysb.edu";
var $cmd="/bin/mail $myEmail";  
var $name = param('name');  
var $xhtml_front ='<?xml version="1.0" encoding="UTF-8" ?>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN"
   "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">
<html xmlns="http://www.w3.org/1999/xhtml"
      xml:lang="en" lang="en">';
if ( ! $name )  ## $name is empty
{  $err_msg .= "<p>Name must be specified.</p>";
}
if ( ! $email ) ## $email is empty
{  $err_msg .= "<p>Email must be specified.</p>";
}

## mail notice to manager
open(MAIL, "| $cmd, $email"); 
print MAIL "To: $email\n";  ## should be same as address above
print MAIL "From: AACC\n";
print MAIL "Sender: Bruno\n";
print MAIL "\nMessage: $name\n";	
print MAIL "Email: $email\n";   
close(MAIL);
## Send response to standard output
print <<END;
$xhtml_front
<head><title>Message Succefully sent.</title></head>
<body style="background-color: white">

<h3> Message Succefully sent! </h3>

</body></html>
END
#######################################
sub error() 
{  print "Content-type: text/html\r\n\r\n";
    print "$xhtml_front\r\n";
    print '<head><title>Error</title></head>';
    print '<body style="background-color: white">';
    print '<h3>Data Missing</h3>';
    print "<p>$err_msg Please go BACK, make corrections, ";
 print 'and submit the form again.</p> </body></html>';
}
#!/usr/local/bin/perl --
#  join.cgi--Perl script for
#            sending email to the member 
use CGI qw(:standard);        ## cgi perl module
var $err_msg = "", $club="ic.sunysb.edu";
var $subject = "New Member club.com";
var $email = param('email');  ## form data 
var $myEmail = "YOUR_SPARKY_USERNAME\@ic.sunysb.edu";
var $cmd="/bin/mail $myEmail";  
var $name = param('name');  
var $xhtml_front ='<?xml version="1.0" encoding="UTF-8" ?>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN"
   "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">
<html xmlns="http://www.w3.org/1999/xhtml"
      xml:lang="en" lang="en">';
if ( ! $name )  ## $name is empty
{  $err_msg .= "<p>Name must be specified.</p>";
}
if ( ! $email ) ## $email is empty
{  $err_msg .= "<p>Email must be specified.</p>";
}
if ( $err_msg )
{  &error();        ## function call
   exit;            ## terminate program
} 
## mail notice to manager
open(MAIL, "| $cmd, $email"); 
print MAIL "To: $email\n";  ## should be same as address above
print MAIL "From: Name of sender\@from.com\n";
print MAIL "Sender: The Sender\@sender.com\n";
print MAIL "Subject: $subject\n";
print MAIL "\nName: $name\n";	
print MAIL "Email: $email\n";   
print MAIL "to join $club *****\n\n";
print MAIL "Browser: $ENV{'HTTP_USER_AGENT'}\n\n"; 
print MAIL "IP Address: $ENV{'REMOTE_ADDR'}\n\n"; 
print MAIL "Host: $ENV{'REMOTE_HOST'}\n\n";  
close(MAIL);
## Send response to standard output
print "Content-type: text/html\r\n\r\n";
print <<END;
$xhtml_front
<head><title>Thanks for Joining</title></head>
<body style="background-color: white">
<h3>Thank you $name.</h3>
<p>Welcome to club.com.  Your membership will
be processed shortly.</p>
<p>We will email you at <code>$email</code> about
your new membership at $club.</p>
</body></html>
END
#######################################
sub error() 
{  print "Content-type: text/html\r\n\r\n";
    print "$xhtml_front\r\n";
    print '<head><title>Error</title></head>';
    print '<body style="background-color: white">';
    print '<h3>Data Missing</h3>';
    print "<p>$err_msg Please go BACK, make corrections, ";
 print 'and submit the form again.</p> </body></html>';
}
