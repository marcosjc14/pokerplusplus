# pokerplusplus
Spring 2020 Software Engineering Group Project

First, make sure you're in the directory you want to clone the folder into in command line.

Then type:
```git clone https://github.com/kymberlicodes/pokerplusplus.git```

Finally, change into the pokerplusplus folder, and open your editor there.

```cd pokerplusplus```

Code editor suggestion: Visual Studio Code (VSCode)
If you are running a mac you'll need to install the shortcut, but on PC, you should be able to just type

```code .```

in the pokerplusplus folder and it will open up the entire project folder in VS Code.

***IMPORTANT: When working on a new feature, make sure to ```git checkout -b name-of-new-branch```, this way you're not pushing to the master branch until we have all tested your changes and then we can merge it with the master branch. You only have to do this whenever you start working on a new feature. I recommend pushing your changes when they do work successfully because then if anything messes up, you can always go back to that last save point.***

When you successfully complete a change:

1. Add changes to your branch:
```git add -A```

2. Commit changes, and add a message. Make the message brief but concise so you remember what it does.
```git commit -m "Here is your message explaining what the changes are."

3. Push your changes to your branch.
```git push origin name-of-new-branch```

4. If new changes were made from teammates and merged into master, you can retrieve them by:
```git pull origin name-of-new-branch```

***Be careful about working on the same features as other people to avoid merge conflicts. If you have one, make sure to review it so you don't override anyone else's work. Work on your own branches that you create.***
