import rsa

publickey,privatekey=rsa.newkeys(500)

print("give some txt here:")
msg=input()

encmsg=rsa.encrypt(msg.encode(),publickey)

print("real txt:",msg)

print("encrypted msg:",encmsg)


decmsg=rsa.decrypt(encmsg,privatekey).decode()

print("decryption:",decmsg)
