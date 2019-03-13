cmd_crypto/rsa_generic.o := arm-poky-linux-gnueabi-ld -EL    -r -o crypto/rsa_generic.o crypto/rsapubkey-asn1.o crypto/rsaprivkey-asn1.o crypto/rsa.o crypto/rsa_helper.o crypto/rsa-pkcs1pad.o 
