# SSL Certificate

Confused about different SSL formats? Here's what to know about the most common certificate file extensions
-----------------------------------------------------------------------------------------------------------

There's no doubt that the world of [SSL certificates](https://comodosslstore.com/ssl-certificates) can be highly confusing for someone who is new to the industry. One of the reasons behind this is the different formats in which SSL certificates are issued. Yes, you read that right: SSL certificates can be issued in various formats such as CER, CRT, DER, PEM, P7B, P7S, PFX, P12, etc. That's because SSL certificates are issued with different certificate file extensions or in different file formats --- such as a PKCS7 certificate or a DER certificate --- based on their encoding and the information they store.

While this may not seem like a big deal, the thing that makes it complicated is that:

-   different certificate authorities issue certificates in different formats; and
-   at the same time, different servers require certificates in different formats.

So, if you have an SSL certificate in one certificate file extension format and your server requires it to be in another, you must [convert the certificate](https://comodosslstore.com/ssltools/ssl-converter.php) to the format that your server needs. For example, if you have a PKCS7 file but need it to be a PEM file certificate, you'll need to convert it before you can use it.

But before you can do that, you must understand each certificate file extension or format to deal with them. So, let's get more familiar with each of these formats by looking at each certificate file format individually.

PEM File Certificate Format
---------------------------

PEM, which stands for privacy-enhanced mail, is the most popular container format used by certificate authorities (CAs) to issue SSL certificates. For example, Apache and other similar servers require SSL certificates to be in this format.

PEM files contain ASCII (or Base64) encoding data and the certificate files can be in .pem, .crt, .cer, or .key formats. A PEM certificate file may consist of the server certificate, the intermediate certificate and the private key in a single file. It might also be possible that the server certificate and intermediate certificate are in a separate .crt or .cer file and the private key is in a .key file.

Each certificate in the PEM file is enclosed between the ---- BEGIN CERTIFICATE---- and ----END CERTIFICATE---- statements. For example:

-   The private key is contained between the ---- BEGIN RSA PRIVATE KEY----- and -----END RSA PRIVATE KEY----- statements.
-   The CSR is contained between the -----BEGIN CERTIFICATE REQUEST----- and -----END CERTIFICATE REQUEST----- statements.

P7B/PKCS#7 Format
-----------------

Certificates in P7B/PKCS#7 formats are encoded in Base64 ASCII encoding and they usually have .p7b or .p7c as the file extension. The thing that separates PKCS#7 formatted certificates is that only certificates can be stored in this format, not private keys. In other words, a P7B file will only consist of certificates and chain certificates.

The certificates having P7B/PKCS#7 format are contained between the "-----BEGIN PKCS7-----" and "-----END PKCS7-----" statements. Microsoft Windows and Java Tomcat are the most common platforms using this format for SSL certificates.

DER Format
----------

The DER certificate format, which stands for "distinguished encoding rules, is a binary form of PEM-formatted certificates. DER format can include certificates and private keys of all types, however, they mostly use .cer and .der extensions. The DER certificate format is most commonly used in Java-based platforms.

PFX/P12/PKCS#12 Format
----------------------

The PFX/P12/PKCS#12 format --- all of which refer to a personal information exchange format --- is the binary format that stores the server certificate, the intermediate certificate and the private key in a single password-protected pfx or .p12 file. These files are typically used on Windows platforms i to allow you to import and export certificates and private keys.


# Openssl

If your server/device requires a different certificate format other than Base64 encoded X.509, a third party tool such as OpenSSL can be used to convert the certificates into the appropriate format.

For information on OpenSSL please visit: [www.openssl.org](http://www.openssl.org/)

**Note:** OpenSSL is an open source tool that is not provided or supported by Thawte

Some common conversion commands are listed below:

**Note:** The PEM format is the most common format used for certificates. Extensions used for PEM certificates are cer, crt, and pem. They are Base64 encoded ASCII files. The DER format is the binary form of the certificate. DER formatted certificates do not contain the "BEGIN CERTIFICATE/END CERTIFICATE" statements. DER formatted certificates most often use the '.der' extension.\
**Convert x509 to PEM**

openssl x509 -in certificatename.cer -outform PEM -out certificatename.pem

**Convert PEM to DER**

openssl x509 -outform der -in certificatename.pem -out certificatename.der

**Convert DER to PEM**

openssl x509 -inform der -in certificatename.der -out certificatename.pem

**Convert PEM to P7B**

**Note:** The PKCS#7 or P7B format is stored in Base64 ASCII format and has a file extension of .p7b or .p7c.\
A P7B file only contains certificates and chain certificates (Intermediate CAs), not the private key. The most common platforms that support P7B files are Microsoft Windows and Java Tomcat.

openssl crl2pkcs7 -nocrl -certfile certificatename.pem -out certificatename.p7b -certfile CACert.cer

**Convert PKCS7 to PEM**

openssl pkcs7 -print_certs -in certificatename.p7b -out certificatename.pem

**Convert pfx to PEM**

**Note:** The PKCS#12 or PFX format is a binary format for storing the server certificate, intermediate certificates, and the private key in one encryptable file. PFX files usually have extensions such as .pfx and .p12. PFX files are typically used on Windows machines to import and export certificates and private keys.

openssl pkcs12 -in certificatename.pfx -out certificatename.pem

**Convert PFX to PKCS#8**\
**Note:** This requires 2 commands

**STEP 1:** **Convert PFX to PEM**

openssl pkcs12 -in certificatename.pfx -nocerts -nodes -out certificatename.pem

**STEP 2:** **Convert PEM to PKCS8**

openSSL pkcs8 -in certificatename.pem -topk8 -nocrypt -out certificatename.pk8

**Convert P7B to PFX**\
**Note:** This requires 2 commands

**STEP 1: Convert P7B to CER**

openssl pkcs7 -print_certs -in certificatename.p7b -out certificatename.cer

**STEP 2: Convert CER and Private Key to PFX**

openssl pkcs12 -export -in certificatename.cer -inkey privateKey.key -out certificatename.pfx -certfile  cacert.cer
