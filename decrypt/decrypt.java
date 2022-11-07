import java.nio.charset.StandardCharsets;
import java.util.Base64;
public class decrypt{
 public static void main(String[] args)
{
    String str = "vJqfip28ioydips="; //string encrpytion
    byte [] decode = str.getBytes(); //convert into bytes for easy decryption 
    byte [] decoded = Base64.getDecoder().decode(decode); //decode the bytes as per base64 encoding
    for (int i = 0; i < decoded.length; i++) {          //algorithim as per challenge in code 
        
        decoded[i] = (byte) ((~decoded[i]) & 255); //for decoding last step first in encryption and , xor 
        decoded[i] = (byte) (decoded[i] ^ 16);
    }
    String st = new String(decoded, StandardCharsets.UTF_8); //convert decoded bytes to string readable format 

    System.out.println(st);
   
}





   


}

