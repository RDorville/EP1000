
## 3D Modelling

### Recap of Fusion 360

By now, you should be familiar with the following in Fusion 360

![Fusion360_interface](images/0501_f260interface.jpg)

* [Fusion 360 interface](https://productdesignonline.com/fusion-360-tutorials/learn-the-fusion-360-user-interface/)
    1. Application Bar
    2. Data Panel
        * Houses all your design files, Allows creation of new preojects.
    3. Profile & Help
        * Allows settings of Preferences
        * Ensure that you have the Z-axis pointing up
        * All measurements to be done in mm
    4. Toolbar
        * Essential command set in each area that you are working on
    5. Browser
        * Lists objects in your design
        * Creation of object: Object - Component - Sketch
        * Controls visibility
    6. ViewCube
        * Home view
        * Orientation of object
    7. Canvas & Marking menu
    8. Navigation Bar & Display Settings
    9. Timeline
        * Shows order of operations
        * Allows editing and manipulation of features

### Workflow

In the creation of any new design, a good workflow plan would be:

1.  Sketch, on paper, how your overall design would look like
    * decide on profiles
    * 2D and 3D layouts
2.  Obtain any dimensions that you may need to draw your object accurately
    * Measure and estimate
    * Obtain a canvas, to map the drawing
3.  Create the object
    * Create the component, components help to break down the object
    * Create sketch of the profile of the object
    * From sketch, create a 3D model
4.  Inpect and make corrections, adjustments.


### Creating 3D Models

1.  Extrusion
    * Extrusion is the easiest method of creating a 3D model
        * Create a 2D closed profile in one of the planes (e.g. XY)
        * Extrude the profile in the third axis (e.g. Z)
    + 3-types of extrusion are provided:
        * New Body - creates a new body
        * Join - joins extruded body with the existing body
        * Cut - uses the extrusion to remove unwanted parts
    + Can use Extrude or Press-Pull in Fusion 360
        * Desktop Makes: [Press Pull vs Extrusion in Fusion 360](https://youtu.be/elQ648fVpwA)
> Image here would be good
    * Only good if you have a profile(s) to work with*
2.  Revolution
    * Creates a 3D model based on a profile and an axis to revolve upon.
        - Draw a 2D closed profile on one of the planes (e.g. XY)
        - Revolve the object about the third axis (e.g. Z)
        - Revolution can be
            + Partial, based on angle, or limits
            + Full 360
        - Lars Christensen: [How to Model Anything Round](https://youtu.be/zYMf6qncgwc)
    * Good for creating globes, sectors, cylinders, profiles.
> Image for revolution

3.  Lofting
    * Create closed profiles in the plane outlining your shape
    * Need to understand - Planes and Offset planes
    * Use loft to create the 3D object by extrapolating the outlines from one profile to another.  The extrapolation can be
        - regular, formed from the contours of the profiles
            + Mufasa CAD [Fusion 360 How To Loft Object, Point And Rails](https://youtu.be/-Z9ioh2NfwY)
        - center-line rail, formed by a line/arc perpendicular to the profiles
            + [Example from AutoDesk](https://forums.autodesk.com/t5/fusion-360-design-validate/introduction-to-loft-using-rail-curves-in-fusion/td-p/7296238)
        - Good for creating ducts, continous 3D models
> Image for lofting

4.  Sculpting
    * Creating an object using a basic 3D shape, breaking up the shape into sections and then manipulating the shape to what you want.
    * Like playing with plastercine, ideal for the creative-minded.
    * Good tutorials on sculpting
        - Product Design Online: [How to Sculpt an Earbud in Fusion 360](https://youtu.be/dbJcnxWHneo)
        - Product Design Online: Sculpting for Plastic Parts in Fusion 360
            + [Part 1](https://youtu.be/Vrg6h5h_vWs)
            + [Part 2](https://youtu.be/FIbmiTTEo_8)
    * Good for creating objects without fixed profiles or need to be shaped
        - Can be very time-consuming
        - Has great effects
> image for sculpting

### Preparation for 3D printing

Once we have an object that we have modelled (digitally) we can then send the object for 3D Printing, which is our next topic in our module.  3D printing offers a great way of prototyping your design fast (in terms of hours).  Once with the prototype, you can then view and make changes to the final design before sending for manufacture.

The digital 3D model, can be used to create molds, or to instruct NC (Numerically Controlled) machines to create the object.  3D printing was never intended for large-scale manufacturing mainly because of the time taken to create the object using additive-manufacturing techniques.

&nbsp;

### Assignment 6

In this assignment, you will complete 2 designs for 3D objects using the techniques (or combination of) in this topic. The objects created will later be used for 3D printing in the practicals.

I have provided approximate timings for you so that you do **NOT** spend all your time (doing something you like and neglecting other modules!)

| Time   | Task |
|--------|:------------------------------------------------|
|45 min  | Go through the video Tutorials listed above. |
|30 min  | Design an object using revolution, loft, sculpting  |
|60 min  | Design a knight piece and display it on your webpage |

Here is a quick guide:

1.  These are the video tutorials you should watch:
    * Desktop Makes: [Press Pull vs Extrusion in Fusion 360](https://youtu.be/elQ648fVpwA)
    * Lars Christensen: [How to Model Anything Round](https://youtu.be/zYMf6qncgwc)
    * Mufasa CAD [Fusion 360 How To Loft Object, Point And Rails](https://youtu.be/-Z9ioh2NfwY)
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

1. [Nametag](worksheets/f360_keytag.md)
2. [Fidget Spinner](worksheets/f360_fidgetspinner.md)

**Specifications**

* Document your work as you go, remember to attach
    * short notes on how you created the design
    * the exported Fusion 360 design file (.f3d)
    * screen shots of your finished product. 
    * highlight any tips that you would want your classmates to know if they were to complete the same projects.
+ Update your blog with the work done.

&nbsp;

**May 2020**
