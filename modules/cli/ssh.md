# SSH

SSH is a secure protocol used as the primary means of connecting to servers remotely. It provides a text-based interface by spawning a remote shell. After connecting, all commands you type in your local terminal are sent to the remote server and executed there.

The SSH connection is implemented using a client-server model. This means that for an SSH connection to be established, the remote machine must be running an SSH server.

The `ssh` command is the SSH client that is used to connect to the remote machine.
```
$ ssh 192.168.1.7
Password:
```

SSH PKI Key-based authentication can be used to replace password based authentication. This can be useful in saving time typing in a password everytime you login to the server or send files to/from the server. This can also be useful when running a script that uses `ssh`, that the script does not stall due to the password prompt.

## Generate SSH Keys
```
ssh-keygen
```
This command generates a public/private key pair that can be used to authenticate to remote hosts. There is an option to add a password to the private key. This will require a password prompt before the key is used in a shell session. The default locations for these files are in your home directory under the `.ssh` directory, although that can be changed during the `ssh-keygen` prompt.

```
~/.ssh/id_rsa  # private key
~/.ssh/id_rsa.pub  # public key
```

In order to login to a remote host using SSH key-based authentication, the public key (`~/.ssh/id_rsa.pub`) contents must be appended to the `~/.ssh/authorized_keys` file in the user's home directory on the remote server. If the file does not exist, create it and add the contents of the private key file. This can be done manually.

To print the contents of your public key
```
cat ~/.ssh/id_rsa.pub
```

Copying your public key to a remote server can be conveniently done using the `ssh-copy-id` tool. Like this:
```
$ ssh-copy-id -i ~/.ssh/tatu-key-ecdsa user@host
```

Once the public key has been configured on the server, the server will allow any connecting user that has the private key to log in. During the login process, the client proves possession of the private key by digitally signing the key exchange.

Note: *Your private key should never be shared. It is used along with your private key as a pair to verify your device's authenticity.*

A `~/.ssh/known_hosts` file is appended for each new server that you connect to. You will recieve a prompt like the following for new SSH server that you attempt to connect to

```
$ ssh 192.168.1.7
The authenticity of host '192.168.1.7' can't be established.
ECDSA key fingerprint is SHA256:Rx0Eqe3CIFxtJgSQkap/k0iaje898z9MTjZtxLP6dHo.
Are you sure you want to continue connecting (yes/no/[fingerprint])? yes
Warning: Permanently added '192.168.1.7' (ECDSA) to the list of known hosts.
```

If you enter `yes`, an entry like the following will be added to `~/.ssh/known_hosts`
```
192.168.1.7 ecdsa-sha2-nistp256 AAAAE2VjZHNhLXNoYTItbmlzdHAyNTYAAAAIbmlzdHAyNTYAAABBBPn2IsNoIwFtcU1kEet0G9eNF2KtVJ41i/EAKWzmTD9gHX0GMT/9wWtRsHtgLo/B70Q3lfC96Ak3aRqekcQEN1Q=
```
As long as that entry remains in `~/.ssh/known_hosts`, the authenticity prompt above will not appear when attempting to make an SSH connection.

Recommended file permissions.
- The public key (. pub file) should be 644 (-rw-r--r--).
- The private key (id_rsa) on the client host  hould be 600 (-rw-------)
- The authorized_keys file on the server should be 600 (-rw-------)
- The known_hosts file should be 644 (-rw-r--r--)

The default key type is rsa, but other formats are supported
```
$ ssh-keygen -t dsa
$ ssh-keygen -t ecdsa
$ ssh-keygen -t ed25519
$ ssh-keygen -t rsa
```

## Generate an SSH Key Pair with a Larger Number of Bits

SSH keys are 2048 bits by default. This is generally considered to be good enough for security, but you can specify a greater number of bits for a more hardened key.

To do this, include the `-b` argument with the number of bits you would like. Most servers support keys with a length of at least 4096 bits.

```
$ ssh-keygen -b 4096
```

Change private key password.
```
$ ssh-keygen -p
```

Each SSH key pair share a single cryptographic “fingerprint” which can be used to uniquely identify the keys.
```
$ ssh-keygen -l
Enter file in which the key is (/Users/username/.ssh/id_rsa):
3072 SHA256:+aoLQ+9co6EBL29SbP+CogCrHxEZ0y4dEkMxtlguDbk audoeyop@Users-MacBook-Pro.local (RSA)
```


# References
https://www.digitalocean.com/community/tutorials/ssh-essentials-working-with-ssh-servers-clients-and-keys
