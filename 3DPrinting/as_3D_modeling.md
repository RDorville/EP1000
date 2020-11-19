##  Assignment: 3D Modelling

In this assignment, you will complete 2 designs for 3D objects using the techniques (or combination of) in this topic. The objects created will later be used for 3D printing in the practicals.

I have provided approximate timings for you so that you do **NOT** spend all your time (doing something you like and neglecting other modules!)

| Time   | Task |
|--------|:------------------------------------------------|
|45 min  | Go through one or two of the video Tutorials listed below. |
|30 min  | Design an object using revolution, loft, sculpting  |
|60 min  | Design a knight piece and display it on your webpage |

Here is a quick guide:

1.  These are the video tutorials you should watch:
    * Desktop Makes: [Press Pull vs Extrusion in Fusion 360](https://youtu.be/elQ648fVpwA)
    * Lars Christensen: [How to Model Anything Round](https://youtu.be/zYMf6qncgwc)
    * Mufasa CAD [Fusion 360 How To Loft Object, Point And Rails](https://youtu.be/-Z9ioh2NfwY)
    * Fusion Essentials [Using the Loft Tool](https://youtu.be/TcbhyPq65dk)
    * Product Design Online: Sculpting for Plastic Parts in Fusion 360
        + [Part 1](https://youtu.be/Vrg6h5h_vWs)
        + [Part 2](https://youtu.be/FIbmiTTEo_8)
2.  Here are a few examples in which you can make for your object of revolution:
    * a bowl, vase, bottle.
    * Specifications (Max):
        - Width: 50 mm
        - Thickness: 3 mm
        - Height: 50 mm
    + If you made a simple bowl of those dimensions, it would take you roughly XX hours to create on a 3D printer!
3.  This is an example of a chess piece (Rook, Knight) - [Images by Google Search](https://duckduckgo.com/?q=image%3A+knight+chess+piece&t=canonical&iar=images&iax=images&ia=images)
    * Select one
    * Model it using Fusion 360
    * Specifications (Max):
        - Height: 50 mm
        - Base width: 30 mm
        - Thickness: 4 mm

**Instruction Sheets**

1. [3D Objects using Revolution](3D_Objects_using_Revolution.pdf)

**Specifications**

* Document your work as you go, remember to attach
    * short notes on how you created the design
    * the exported Fusion 360 design file (.f3d)
    * screen shots of your finished product. 
    * highlight any tips that you would want your classmates to know if they were to complete the same projects.
+ Update your blog with the work done.
* **Extra Credit**
    - Model your 3D image in your webpage.  There are a number of Javascipt codes that allow you to model a 3D image (usually STL file) on a webpage
    - See [Thingiverse](https://www.thingiverse.com/) for examples

&nbsp;

### How to embed a Fusion 360 file in your web page

Reference: Fusion 360 [How to embed a viewer of a Fusion 360 design into a website](https://knowledge.autodesk.com/support/fusion-360/troubleshooting/caas/sfdcarticles/sfdcarticles/How-to-embed-a-viewer-of-a-Fusion-360-design-into-a-website.html)

*Example*

<iframe src="https://myhub.autodesk360.com/ue2dff438/shares/public/SH56a43QTfd62c1cd968a8254af243cf0912?mode=embed" width="800" height="600" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>

&nbsp;

### How-to display a 3D Model (.STL) in a HTML file

Reference: Javascript plugin [JSC3D](https://code.google.com/archive/p/jsc3d/)

1.  Read the reference documents and examples from the Site above.
2.  Download the repository, extract the following `.jsc3d` files and place in a location with your HTML files (e.g. folder `jsc3d`)
    * jsc3d.js
    * jsc3d.webgl.js
    * jsc3d.touch.js<br>
    You need to load these files in with your HTML.
3.  Load the JavaScript plugin code in the header area

    ```html
    <head>
        <script type="text/javascript" src="jsc3d/jsc3d.js"></script>
        <script type="text/javascript" src="jsc3d/jsc3d.webgl.js"></script>
        <script type="text/javascript" src="jsc3d/jsc3d.touch.js"></script>
    </head>
    ```

4.  Use the following code to load the STL file and display it:

    ```html
    <canvas id="cv" width=640 height=480>
        It seems you are using an outdated browser that does not support canvas :-(
    </canvas>
    <script type="text/javascript">
        var canvas = document.getElementById('cv');
        var viewer = new JSC3D.Viewer(canvas);
        viewer.setParameter('SceneUrl','knight.stl');
        viewer.setParameter('ModelColor','#CAA618');
        viewer.setParameter('BackgroundColor1','#E5D7BA');
        viewer.setParameter('BackgroundColor2','#383840');
        viewer.setParameter('RenderMode','flat');
        viewer.setParameter('MipMapping','on');
        viewer.setParameter('Definition','high');
        viewer.setParameter('Renderer','webgl');
        viewer.init();
        viewer.update();
    </script>
    ```

5.  Change this line to point to your .STL file

    ```html

     viewer.setParameter('SceneUrl','knight.stl');

    ```

Example: [3D model of a Knight Chess Piece](STLmodel.html)


&nbsp;

**May 2020**
