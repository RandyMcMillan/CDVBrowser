CDVBrowser
===

Cordova (iOS) Xcode Plugin Template
---

Updated 07/31/2013 for Cordova iOS 3.0.0

For the template installer [cdv-ios-plugin-templates](https://github.com/RandyMcMillan/cdv-ios-plugin-templates)

    git clone https://github.com/RandyMcMillan/cdv-ios-plugin-templates.git

###Installation:
    $ cd ~/Library/Developer/Xcode/Templates/File\ Templates
    $ git clone https://github.com/RandyMcMillan/CDVBrowser.git

![image](https://raw.github.com/RandyMcMillan/CDVBrowser/master/ScreenShot.png)

###Usage:
####Open your Cordova (iOS) Xcode Project

* Press `<COMMAND+n>`    

    ![image](https://raw.github.com/RandyMcMillan/CDVBrowser/master/ScreenShot2.png)  


    ![image](https://raw.github.com/RandyMcMillan/CDVBrowser/master/ScreenShot3.png) 

* Copy the CDVBrowser.js file to your /www folder

    ![image](https://raw.github.com/RandyMcMillan/CDVBrowser/master/ScreenShot4.png)
    
[Sample index.html is included in the generated plugin](https://raw.github.com/RandyMcMillan/CDVBrowser/master/CDVBrowser.xctemplate/index.html)

####Add to www/index.html

`<script type="text/javascript" charset="utf-8" src="CDVBrowser.js"></script>`


![image](https://raw.github.com/RandyMcMillan/CDVBrowser/master/CDVBrowser.xctemplate/ScreenShot1.png)

#### *Option 

Link or Copy into the Xcode project


![image](https://raw.github.com/RandyMcMillan/CDVBrowser/master/CDVBrowser.xctemplate/ScreenShot2.png)
<br>

[Sample index.html is included in the generated plugin](https://raw.github.com/RandyMcMillan/CDVBrowser/master/CDVBrowser.xctemplate/index.html)



####Add to www/index.html

`<script type="text/javascript" charset="utf-8" src="CDVBrowser.js"></script>`

A sample index.html is included in the plugin repository

####Cordova (iOS) 3.0+

#####add to your config.xml 

    <feature name="CDVBrowser">
        <param name="ios-package" value="CDVBrowser"/>
    </feature>


![image](https://raw.github.com/RandyMcMillan/CDVBrowser/master/AddFilesToProject.png)
![image](https://raw.github.com/RandyMcMillan/CDVBrowser/master/AddProjectsToProject2.png)
###Add files to the project

![image](https://raw.github.com/RandyMcMillan/CDVBrowser/master/CopyJSToWWW.png)
![image](https://raw.github.com/RandyMcMillan/CDVBrowser/master/CopyJSToWWW2.png)
###Copy CDVPDFReader.js to your project's WWW folder
![image](https://raw.github.com/RandyMcMillan/CDVBrowser/master/EditConfigXML.png)
###Edit the config.xml file

    <feature name="CDVBrowser">
        <param name="ios-package" value="CDVBrowser"/>
    </feature>


![image](https://raw.github.com/RandyMcMillan/CDVBrowser/master/IndexHTML.png)
Sample [index.html](https://raw.github.com/RandyMcMillan/CDVBrowser/master/index.html)
![image](https://raw.github.com/RandyMcMillan/CDVBrowser/master/MessageUI.png)
<br><br>
Add MessageUI.framework to your project.



This new version offers a new UI based on original source code here: [https://github.com/vfr/Reader](https://github.com/vfr/Reader)
<br>Reference for additional usage

![image](https://raw.github.com/RandyMcMillan/CDVBrowser/master/viewportrait.png)
![image](https://raw.github.com/RandyMcMillan/CDVBrowser/master/viewportrait2.png)
![image](https://raw.github.com/RandyMcMillan/CDVBrowser/master/ipadlandscapeview.png)
![image](https://raw.github.com/RandyMcMillan/CDVBrowser/master/ipadlandscapeview2.png)
![image](https://raw.github.com/RandyMcMillan/CDVBrowser/master/ipadlandscapeview3.png)
![image](https://raw.github.com/RandyMcMillan/CDVBrowser/master/ipadlandscapeview4.png)
![image](https://raw.github.com/RandyMcMillan/CDVBrowser/master/ipadlandscapeview5.png)







<br><br>

 Licensed to the Apache Software Foundation (ASF) under one
 or more contributor license agreements.  See the NOTICE file
 distributed with this work for additional information
 regarding copyright ownership.  The ASF licenses this file
 to you under the Apache License, Version 2.0 (the
 "License"); you may not use this file except in compliance
 with the License.  You may obtain a copy of the License at
 
 http://www.apache.org/licenses/LICENSE-2.0
 
 Unless required by applicable law or agreed to in writing,
 software distributed under the License is distributed on an
 "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 KIND, either express or implied.  See the License for the
 specific language governing permissions and limitations
 under the License.
 
 
 or 
 
 
 The MIT License

 Copyright (c) 2012 Randy McMillan

 Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

 The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
