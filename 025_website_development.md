## Website Development

A website consists of webpages containing information of what you wish to display or to keep as reference.  For this module, you will create a website that
* keeps a record of what you have done in this module.
* shows your progress (success and failures)
* shows readers how to replicate your results (should he/she wish to)
* acts a reference (or how-to) for future projects.

What is **important** is that we (the accessors) are more interested in the content than how "beautiful" or "interactive" your site is.

Here are the 4 ways in which you can develop your site together with the advantages and disadvantages it incurs.  You are free to choose any method (or none at all) to develop your website.

* **HTML & CSS**   
    You start with HTML and write your content, stylise it with CSS to give a consistent look and feel.
    * Advantages
        1. Simple to start, can be very basic.
        2. Design is completely yours to play around with, you have full control
    * Disadvantages
        1. Gets complicated when more pages are added
        2. Difficult to maintain consistency
        3. Difficult to get a consistent design look and feel
    * How-to
        1. Make a simple HTML file with links to your pages.
        2. Use a CSS file to format the layout
        3. [How-to use HTML & CSS to create a basic website](website_HTML_CSS.md)

* **Borrow A Design That Works** using HTML & CSS   
    You start with a design that works (e.g. Jake Wright: Learn CSS in 12 minutes).  Modify and add whatever you want in HTML (content) and tweak its looks using CSS (Layout).
    * Advantages
        1. Design is professionally looking, just add content.
        2. Don't need to do much in terms of modification
    * Disadvantages
        1. Need to understand how site is designed to add content.
        2. May need to make changes to maintain consistency
        3. Need knowledge of HTML and CSS
    * How-to
        1. Search the internet for a HTML/CSS template site that you like
        2. Copy the template to index.html as the starting page
        3. Populate and expand your website.
        4. [Hot to use Jake Wright's Template](website_JakeWright.html)

* **Markdown** (Pure Markdown)
    Markdown is a light-weight Mark-Up editing language that is good for displaying information.  It is ideal for making fast notes, while still maintaining the document very "text-like".  Most documentation sites offer a markdown hosting option.   
    Markdown text is first processed by a program (usually python/javascript) into HTML.  The HTML is then hosted by the webserver.  This process is usually transparent to the user.
    * Advantages
        1. Very text-like, easy to make notes and add information
        2. Can supplement/substitute with HTML if you need more control
        3. github allows direct editing on the server.
    * Disadvantages
        1. Need a hosting service that serves markdown (alternative: MkDocs)
        2. Need to learn Markdown
        3. Website looks very "bare", "no-frills", even with themes.
    * How-to
        1. This site is an **example** of a pure Markdown site.
        2. Surf to the github site for this repository (https://github.com/rdorville/EP1000)
        3. Use the github *code* tab to examine the contents
        4. Create a new repo on your github account and enable github pages.
        5. Start with the file "index.md" as the root of your website.

*  **Jekyll** themed site (Using Markdown)
    Jekyll is a [static site generator](https://www.staticgen.com/) which converts Markdown together with other instructions to HTML which is then hosted by the server.   
    Mr Chew has kindly provided a template (https://skeatz.github.io/web-pk/) which allows you to create a very professional-like site for your project.
    * Advantages
        1.  Information is added using Markdown or HTML, easy to edit.
        2.  Processing by Jekyll is transparent to the user.
        3.  Very professional can change themes.
    * Disadvantages
        1.  Need to be hosted on github or a site which can execute Jekyll.
        2.  Need to understand how each part of the site is created, like solving a puzzle
    * How-to
        1. I would suggest that you complete the **git** section (next week) before you attempt this as you need to upload a number of folders and files to your repository (unless you want to do it one at a time)
        2. Download or clone the repository at (https://github.com/skeatz/web-pk) to a new folder.
        3. [How-to use web-pk for your website](website_webpk.md)

### Assignment 2

In this assignment, you will select a method to create your website.  Start by populating the first two/thress sections of your site.  You do not need to be complete at this stage.  This is a starting point for you to view and correct any mistakes that you may have made.

In the later weeks, you will only be adding content to the site i.e. new pages, so it is good to spend more time cleaning up your website here.

I have provided approximate timings for you so that you do **NOT** spend all your time (doing something you like and neglecting other modules!)

| Time   | Task |
|--------|:------------------------------------------------|
|30 min  | Select one of the methods above and go through the how-to |
|30 min  | Create the root page `index.html` or `index.md` |
|45 min  | Add the first 3 pages/sections to your site |
|15 min  | Host your site on github |

Here is a quick guide:

1. Select one of the methods above (to create a website) and go through the how-to.
2. Understand how other pages are created and added into the site.
3. Upload your site to github, host it as a webpage and test it.
4. Enter your URL into the spreadsheet (https://drive.google.com/open?id=1X9X7FhpFlZU25ybGc4Znd4XozB-3NqZJ)

**Specifications**

Your website must, at a miniumum, have the following:

* Use one of the methods listed above (show which method you use)
* If you are using HTML, you need to use a CSS.  Template and Markdown sites automatically have a CSS associated with it.
* Have at least **TWO** sections (Safety, Web-site development or hosting) written up and hosted as two different pages.
* Add at least some images/screen-shots/hero-shots, properly formatted and scaled.
* Be hosted on github-pages.


You will be required to present your work to the class as the next session.


**May 2020**

