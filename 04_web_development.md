# Website Development

## Documentation Techniques

The important function of documentation is to provide a "timely" source of
information, so that

* It is a log of the progress (success/failures) that you can refer to
* Your group members are kept up to date with the progress
* Provide a reference to future projects.

Hence a documentation tool should:

* Be easy to learn and use.
* Available
* Easily accessible (portable)

Traditional documentation techniques use paper notebooks or journals, however, in this age of sharing information, the portability is at issue.

A good and popular solution to this problem is to use **text** and create Internet website that can be hosted on the World-Wide-Web.


### Text Editors

The choice of using text instead of a proprietary word processor is that text is universal and can be used/edited/hosted/shared on multiple platforms without conversion or loss-of-data.

The characteristics of a good text editor should include

- Produces pure text files (avoids conversion)
- Available on multiple platforms (avoids re-learning, available everywhere)
- Simple to use (avoids a learning curve)
- Other features should include
    - WSIWYG - What-You-See-Is-What-You-Get (for easy editing)
    - Advanced editing features (increases productivity)
        - Unlimited edit size, multiple files, split screens
        - Unlimited undo/redo edits
        - Find/replace (with regex)
        - Auto-indentation, completion
        - Syntax highlighting to show tags/keywords, development aids
        - Auto correct, spell-check
        - Macros, quick editing

Here are some recommendations:

- [Sublime Text](https://www.sublimetext.com/3) a popular choice among programmers, not free but has unlimited use time.
    + Cory Schafer [Sublime Text Tutorials](https://www.youtube.com/playlist?list=PL-osiE80TeTtHH8BZngXEsLPGotQxZa6z)
    + LearnWebCode [Sublime Text Tutorials](https://www.youtube.com/playlist?list=PLpcSpRrAaOaqQMDlCzE_Y6IUUzaSfYocK)
    + LevelUpTuts [Sublime Text Tutorials](https://www.youtube.com/playlist?list=PLLnpHn493BHEYF4EX3sAhVG2rTqCvLnsP)
- [Atom](https://atom.io/) an open-source github project, fast becoming very popular for new users, giving the same functionality as SublimeText.
    + LevelUpTuts [Atom Editor Tutorials](https://youtu.be/WWwBQQOGllo)
- [Brackets](http://brackets.io/) an editor tailored for HTML and web production.
    + Web Craftie [Getting Started with a Code Editor: Brackets](https://youtu.be/GN0txxeT46A)
    + Kris DeBruine Media [Brackets: Setup Your Code Editor](https://youtu.be/lUf8WrBr_aM)
- [Visual Studio Code]() a free Microsoft product which is also used for developing Source code.
    + Codevluation [Visual Studio Code Tutorial](https://www.youtube.com/channel/UC80PWRj_ZU8Zu0HSMNVwKWw)
    + Academin [Visual Studio Code Tutorial for Beginners](https://youtu.be/VqCgcpAypFQ)


## Website development

A website consists of webpages containing information of what you wish to display or to keep as reference.  The advantages of documenting using a website are

- Data entry is in text with the added ability of sharing images and media.
- Available on multiple platforms
- Can be made private of public
- Instantly sharable, document as you go
- Possibility of hosting on a local PC, local site or remote site

For this module, you will create a website that

- keeps a record of what you have done in this module.
- shows your progress (success and failures)
- shows readers how to replicate your results (should he/she wish to)
- acts a reference (or how-to) for future projects.

What is **important** is that we should pay more attention to the content than how "beautiful", "interactive" or "aesthetic" your site looks.  We are not creating a website that markets a product/information but to share knowledge.

Here are the 4 ways in which you can develop your site together.  You are free to choose any method  to develop your website, however, you must remember that you need to update your site periodically (as and when) with new information

1. Pure **HTML & CSS**<br>
You start with HTML and write your content, stylise it with CSS to give a consistent look and feel.
    - Advantages
        1. Simple to start, can be very basic.
        2. Design is completely yours to play around with, you have full control
    - Disadvantages
        1. Gets complicated when more pages are added
        2. Difficult to maintain consistency
        3. Difficult to get a consistent design look and feel
    - How-to
        1. Make a simple HTML file with links to your pages.
        2. Use a CSS file to format the layout
        3. [Example of basic website](myfirstwebpage.html)
2. Borrow **A Design/Template That Works**<br>
You start with a design that works (e.g. Jake Wright: [Learn CSS in 12 minutes](https://www.youtube.com/watch?v=0afZj1G0BIE)).  Modify and add whatever you want in HTML (content) and tweak its looks using CSS (Layout).
    - Advantages
        1. Design is professionally looking, just add content.
        2. Don't need to do much in terms of modification
    - Disadvantages
        1. Need to understand how site is designed to add content.
        2. May need to make changes to maintain consistency
        3. Need knowledge of HTML and CSS
    - How-to
        1. Search the internet for a HTML/CSS template site that you like
        2. Copy the template to index.html as the starting page
        3. Populate and expand your website.
        4. [How to use Jake Wright's Template](JakeWright/jwhowto.md)
3.  Use **Markdown** (Pure Markdown)<br>
Markdown is a light-weight Mark-Up editing language that is good for displaying information.  It is ideal for making fast notes, while still maintaining the document very "text-like".  Most documentation sites offer a markdown hosting option.

    Markdown text is first processed by a program (usually python/javascript) into HTML.  The HTML is then hosted by the webserver.  This process is usually transparent to the user.

    - Advantages
        1. Very text-like, easy to make notes and add information
        2. Can supplement/substitute with HTML if you need more control
        3. github allows direct editing on the server.
    - Disadvantages
        1. Need a hosting service that serves markdown (alternative: MkDocs)
        2. Need to learn Markdown
        3. Website looks very "bare", "no-frills", even with themes.
    - How-to
        1. This site is an **example** of a pure Markdown site.
        2. Surf to the github site for this repository <https://github.com/rdorville/EP1000>
        3. Use the github *code* tab to examine the contents
        4. Create a new repo on your github account and enable github pages.
        5. Start with the file "index.md" as the root of your website.

4.  **Jekyll** themed site (Using Markdown)<br>
    Jekyll is a [static site generator](https://www.staticgen.com/) which converts Markdown together with other instructions to HTML which is then hosted by the server.

    Mr Chew has kindly provided a template <https://skeatz.github.io/web-pk/> which allows you to create a very professional-like site for your project.

    - Advantages
        1.  Information is added using Markdown or HTML, easy to edit.
        2.  Processing by Jekyll is transparent to the user.
        3.  Very professional can change themes.
    - Disadvantages
        1.  Need to be hosted on github or a site which can execute Jekyll.
        2.  Need to understand how each part of the site is created, like solving a puzzle
    - How-to
        1. I would suggest that you complete the **git** section (next week) before you attempt this as you need to upload a number of folders and files to your repository (unless you want to do it one at a time)
        2. Download or clone the repository at (https://github.com/skeatz/web-pk) to a new folder.
        3. [How-to use web-pk for your website](web-pk/web-pk.md)






&nbsp;

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
4. Enter your URL into the [Google spreadsheet](https://drive.google.com/file/d/1X9X7FhpFlZU25ybGc4Znd4XozB-3NqZJ/view?usp=sharing)

**Specifications**

Your website must, at a miniumum, have the following:

* Use one of the methods listed above (show which method you use)
* If you are using HTML, you need to use a CSS.  Template and Markdown sites automatically have a CSS associated with it.
* Have at least **TWO** sections (Safety, Web-site development or hosting) written up and hosted as two different pages.
* Add at least some images/screen-shots/hero-shots, properly formatted and scaled.
* Be hosted on github-pages.

You will be required to present your work to the class as the next session.


&nbsp;

**May 2020**

