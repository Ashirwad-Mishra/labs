import java.io.File;
import javax.xml.parsers.DocumentBuilder;
import javax.xml.parsers.DocumentBuilderFactory;

import org.w3c.dom.Document;
import org.xml.sax.SAXException;

public class XMLValidation 
{
    public static void main(String[] args) 
    {
        try 
        {
            File xmlFile = new File("student.xml");
            DocumentBuilderFactory factory = DocumentBuilderFactory.newInstance();
            factory.setValidating(true); // Enable DTD validation
            DocumentBuilder builder = factory.newDocumentBuilder();

            builder.setErrorHandler(new org.xml.sax.helpers.DefaultHandler());
            Document doc = builder.parse(xmlFile);

            System.out.println("XML is valid!");
        } 
        catch (SAXException e) 
        {
            System.out.println("XML is not valid: " + e.getMessage());
        } 
        catch (Exception e) 
        {
            e.printStackTrace();
        }
    }
}