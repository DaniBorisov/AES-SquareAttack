#include <stdio.h>
#include "AES.h"
#include "SquareAttack.h"

int main() {
  word key[4] = {0x00010203, 0x04050607, 0x08090a0b, 0x0c0d0e0f};
//    word key[4] = {0x54686174 , 0x73206D79 , 0x204B756E , 0x67204675};





  AES* aes = create_aes_instance(key, 4);

  block message = {0x544F4E20, 0x776E6954, 0x6F656E77, 0x2020656F};
    block Origmessage = {0x544F4E20, 0x776E6954, 0x6F656E77, 0x2020656F};
//    block message = {0x00112233, 0x44556677, 0x8899aabb, 0xccddeeff};

  printf("Original message:\n  ");
  printf("%08x", message[0]);
  printf("%08x", message[1]);
  printf("%08x", message[2]);
  printf("%08x", message[3]);
  printf("\n");

  encrypt(aes, message);

  printf("Encrypted message:\n  ");
  printf("%08x", message[0]);
  printf("%08x", message[1]);
  printf("%08x", message[2]);
  printf("%08x", message[3]);
  printf("\n");



//  retDecrypt(aes,message);

//  printf("Original message:\n  ");
//  printf("%08x", Origmessage[0]);
//  printf("%08x", Origmessage[1]);
//  printf("%08x", Origmessage[2]);
//  printf("%08x", Origmessage[3]);
//  printf("\n");

    roundKeyByteGuess(aes,message);


//  decrypt(aes, message);
//
//  printf("Decrypted message:\n  ");
//  printf("%08x", message[0]);
//  printf("%08x", message[1]);
//  printf("%08x", message[2]);
//  printf("%08x", message[3]);
//  printf("\n");
//

  delete_aes_instance(aes);

  return 0;
}