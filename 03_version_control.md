
## Version Control

Version control is the management of changes to documents, software, web sites and other collections of information. In usual practise, the change of such documentation is done by labelling the filename or document with a number or letter code e.g. v1.01, v4a.

**[Reasons for version control](https://stackoverflow.com/questions/1408450/why-should-i-use-version-control)**

Assuming you are writing an essay/paper/code for an assignment that has to be submitted online, have you ever:

* Made a change to the work, realised it was a mistake and wanted to revert
back?
* Lost work or had a backup that was too old?
* Had to maintain multiple versions of the assignment ?
* Wanted to see the difference between two (or more) versions of your work?
* Wanted to prove that a particular change broke orfixed a section of your work?
* Wanted to review the history of some work, to see what you deleted? * Wanted to submit a change to someone else's work, in collaboration with yours?
* Wanted to share your work, or let other people help work on your assignment? * Wanted to see how much work is being done, and where when and by whom?
* Wanted to experiment with a new feature without interfering with the current working assignment?

If you answered **YES** to any of the above questions, then you need a *version control system*.

## git

[Git](https://git-scm.com/) is a free and open-source distributed version control system.  It is very easy to learn and provides good support for all projects regardless of size.  It is also available for different Operating Systems (OS).

git usually works from the CLI (command-line interface), however there are GUI (Graphic User Interfaces) available, which are easier for the beginner.

A summary of the git commands are given in the table, it provides a reference of what we usually use.

Before we use git, we usually need to identify ourselves to git and to the repository

```bash
git config --global user.name "John Doe"
git config --global user.emal "jdoe1234@example.com"
```

You would usually log-in or provide your credentials to the remote repository so that you can access your account.

|git command         | Purpose                                         |
|:-------------------|:-------------------------------------------------|
| *Initialise*         | Usually done only once to start the repository  |
| git clone <repo>   | Clones/Copies and downloads a repository to your folder.<br>It is a fast way of making a copy of an existing work.  There are <br>Two methods of cloning: SSH and HTTPS.  We shall use HTTPS |
| git init           | Initialises a local folder for git |
| git pull           | Brings down a current version of the repository.<br> Works only when the repository already exists.<br> Should always be the first command, before you start any work. |
| *Repeated*           |      |
| git add *          | Add any files to the staging area.<br>This will pick up any files which have been updated/added/removeid.|
| git status         | Shows the files in staging area|
| git commit -m <br>"info on what is done" | Moves the files from the staging area to the local repo |
| git push           | Copies the files from the local pc to the remote repo |

There are other commands, however, we will leave them for now until you are fully acquinted with the git process.  The following diagram illustrates what usually happens:

![Common git commands](03_1_git_commands.jpg)

&nbsp;

## Tutorials for git

There are many tutorials for git (shows you how important git is) and we recommend that you watch at least one Youtube video and walk through one git tutorial.

### Youtube videos on git

*  Colt Steel [Learn git in 15 minutes]https://www.youtube.com/watch?v=USjZcfj8yxE)
*  The Net Ninja [Git & GitHub Tutorial for Beginners](https://www.youtube.com/playlist?list=PL4cUxeGkcC9goXbgTDQ0n_4TBzOO0ocPR)
*  Cory Schafer [Git Tutorial for Beginners: Command-Line Fundamentals](https://www.youtube.com/watch?v=HVsySz-h9r4)
*  Others [using Google Search](https://www.youtube.com/results?search_query=git+tutorial+for+beginners)

### Git Online Tutorials

* [Got 15 minutes and want to learn Git](https://try.github.io/)
* Better Explained [A Visual Guide To Version Control](https://betterexplained.com/articles/a-visual-guide-to-version-control/)
* [git the simple guide](http://rogerdudler.github.io/git-guide/)
* Tower [Learn Version Control with Git](https://www.git-tower.com/learn/git/ebook/en/command-line/introduction#start)

### References

* [git](https://git-scm.com/) and [documentation](https://git-scm.com/doc)
* [Pro Git, v2, Scott Chancon & Ben Straub](https://git-scm.com/book/en/v2)

&nbsp;

## git for Windows 10

As most of you are working with Microsoft Windows 10, there are a number of versions of git that you can use:

* [git for windows](https://gitforwindows.org/)   
    install git BASH (CLI) and git GUI (GUI version).  Usually users would go fof the git BASH version in this installation as it is the closest to the Linux versions.
* [Github Desktop](https://desktop.github.com/)   
    which is a collaboration of git and Github.  If you are using git with the GitHub repository, then this is the solution for you.  It is the easiest to use and provides the necessary collaboration with the git commands.  We **recommend** that you use this for your repo.

### Github Desktop

I've already written a guide here for staring a repo using Mr Steven Chew's [web-pk](https://github.com/skeatz/web-pk), you can follow the guide [here](web-pk/web-pk.md).

Quick links:

*  [Github Desktop](https://desktop.github.com/) for Windows
*  Mr. Steven Chew's [web-pk](https://github.com/skeatz/web-pk) repository
*  Youtube: Dr. Rafeeq [Learn how to use Github Desktop 2019](https://youtu.be/FckOKBrdsBg)

&nbsp;

### Assignment 3

In this assignment, you will install **git**.  If you are working on a Microsoft Windows 10 system, then I would strongly install **Github Desktop**, as we are more interested in the process of version control.  You will then put your blog into a "version control" system using git.

I have provided approximate timings for you so that you do **NOT** spend all your time (doing something you like and neglecting other modules!)

| Time   | Task |
|--------|:------------------------------------------------|
|10 min  | Install git/Github Desktop |
|20 min  | Watch *one* Youtube video on "git for beginners" |
|20 min  | Work through one online tutorial on git |
|40 min  | Convert your blog site to use git<br>Write-up the process of converting and implementing a version control<br>system on your blog |
|40 min  | Demonstrate how you would recover an error using git<br>Use your blog as the example, and show how you would recover a deleted paragraph.<br>**document it** in your blog.

Here is a quick guide on how to do the last part:

1. Familiarize yourself with git/Github Desktop (remember you can create new repositories on Github and remove them when you are finishted)
2. Write a paragraph of text, save your work on the remote repo (remember to put a meaningful comment)
3. Delete the paragraph and replace it with another paragraph, or make stupid changes to the paragraph.  Push the changes to the repository.
4. Examine the repository and extract/recover the lost data.
5. Remember to document as you go and clean up your documentation after you have done it.

One **LUCKY** person will present his/her work to the class as the next session.


&nbsp;

**May 2020**

