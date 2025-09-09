<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet version="1.0"
    xmlns:xsl="http://www.w3.org/1999/XSL/Transform">

  <!-- Output as HTML -->
  <xsl:output method="html" indent="yes"/>

  <xsl:template match="/">
    <html>
      <head>
        <title>Student Records</title>
        <style>
          table 
          {
            border-collapse: collapse;
            width: 60%;
            margin: 20px auto;
            font-family: Arial, sans-serif;
          }
          th, td 
          {
            border: 1px solid #333;
            padding: 8px 12px;
            text-align: center;
          }
          th 
          {
            background-color: #f2f2f2;
          }
          h2 
          {
            text-align: center;
            font-family: Arial, sans-serif;
          }
        </style>
      </head>
      <body>
        <h2>Student Records</h2>
        <table>
          <tr>
            <th>Roll</th>
            <th>Name</th>
            <th>Batch</th>
          </tr>
          <xsl:for-each select="cse/students/student">
            <tr>
              <td><xsl:value-of select="roll"/></td>
              <td><xsl:value-of select="name"/></td>
              <td><xsl:value-of select="batch"/></td>
            </tr>
          </xsl:for-each>
        </table>
      </body>
    </html>
  </xsl:template>
</xsl:stylesheet>