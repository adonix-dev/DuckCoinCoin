package blockchain;

import com.google.gson.*;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.io.Reader;

public class Json {

    public static Blockchain BCJsonReader(String filename) {

        Gson gson = new Gson();

        try (Reader reader = new FileReader(filename)) {

	// Convert JSON to Java Object
            Blockchain bc = gson.fromJson(reader, Blockchain.class);
            //System.out.println(bc);
            return bc;

			// Convert JSON to JsonElement, and later to String
            /*JsonElement json = gson.fromJson(reader, JsonElement.class);
            String jsonInString = gson.toJson(json);
            System.out.println(jsonInString);*/

        } catch (IOException e) {
            e.printStackTrace();
        }
        return null;
    }
    
    public static void BCJsonWriter(Blockchain BlockC, String filename){
        // JSON Parser
        //1. Convert object to JSON string
        Gson gson = new Gson();
        String json = gson.toJson(BlockC);
        System.out.println(json);

        //2. Convert object to JSON string and save into a file directly
        try (FileWriter writer = new FileWriter(filename)) {

            gson.toJson(BlockC, writer);

        } catch (IOException e) {
            e.printStackTrace();
        }
        
    }

}