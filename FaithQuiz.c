//FaithQuiz

#include <stdio.h>
#include <stdlib.h>

void press1(void);

int main(void)
{
	//Declare variables for user's responses
	char x;
	int y;
	
	//Start of the quiz
	printf("This is a simple quiz that asks big questions. \n");
	press1();
	
	
	//Question 1
	printf("Question 1 \n");
	printf("Do you believe that there is a universal right and wrong? \n\n");
	
	do
	{
		printf("Enter y for yes and n for no: ");
		scanf(" %c", &x);
	} while(x != 'y' && x != 'n');
	
	
	if (x == 'y')
	{
		printf("Great! Then there should be a God who establishes the universal right and wrong. \n");
	}
	else
	{
		printf("It seems like you do not agree. However, how can we know that the world is not perfect? \n");
		printf("Why can we all agree that something is good or bad? \n");
		printf("There must be a universal standard of right and wrong and what behaviors are good and evil, \n");
		printf("so there should be a God who establishes the universal right. \n");
	}
	
	press1();
	
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	
	//Question 2
	
	printf("Question 2 \n");
	printf("Do you believe in a God who created and is the Lord of the whole universe? \n\n");
	
	do
	{
		printf("Enter y for yes and n for no: ");
		scanf(" %c", &x);
	} while(x != 'y' && x != 'n');
	
	if (x == 'y')
	{
		printf("Great, there is a lot of substantial evidence and arguments for believing that God must exist, \n");
		printf("so you can be very confident that God exists. \n");
	}
	else
	{	
		printf("There is a lot of substantial evidence for believing that God must exist. \n");
		printf("If you believe that God created a right/good and a wrong/evil that we universally are aware of \n");
		printf("and in a complex and huge universe, it makes much more sense to believe that God exists. \n");
		printf("There are many arguments for God's existence, which you can learn more about. \n");
		printf("if you are interested, such as the Cosmological Argument and the Moral Argument. \n");
	}
	
	press1();
	
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	
	//Question 3
	
	printf("Question 3 \n");
	printf("Do you believe that human sin is the biggest problem humans have? \n\n");
	
	do
	{
		printf("Enter y for yes and n for no: ");
		scanf(" %c", &x);
	} while(x != 'y' && x != 'n');
	
	if (x == 'y')
	{
		printf("Great! Human sin, especially pride, is the root of the problems in the world today. \n");
		printf("It has caused us to value ourselves too much and seperated us from God \n");
		printf("Fundamentally, we have inherited a sinful nature as human beings, and we must accept our identity as sinners. \n");
		printf("Our sin is a offense directly against God that deserves death. \n");
		printf("But God's love for us was so great that he sent Jesus his only son, who ultimately died for all the sins we personally have committed and still commit against God");
		printf("To accept this free gift of salvation, we must repent of our sins, which includes apologizing for our sins and defiance against God, \n");
		printf("completely turning around and surrendering, and starting to follow Jesus as your Lord, becoming more like Him, and pursue His agenda. \n");
	}
	else
	{
		printf("Human sin, especially pride, is the root of the problems in the world today. It is why there are always many problems in the imperfect and sinful world, which tries to run on other things besides God. \n");
		printf("It has caused us to value ourselves too much and seperated us from the perfect God, who created us and does not tolerate sin. \n");
		printf("Fundamentally, we have inherited a sinful nature as human beings, and we must accept our identity as sinners. Our sin is a offense directly against God that deserves death. \n");
		printf("But God's love for us was so great that he sent Jesus his only son, who ultimately died for all the sins we personally have committed and still commit against God. \n");
		printf("To accept this free gift of salvation, we must repent of our sins, which includes apologizing for our sins and defiance against God, completely turning around and surrendering, \n"); 
		printf("and starting to follow Jesus as your Lord, becoming more like Him, and pursue His agenda. \n");
	}
	
	press1();
	
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	
	//Question 4
	
	printf("Question 4 \n");
	
	printf("What do you value the most in life? \n\n");
	
	printf("1) Academic and career Success\n");
	printf("2) Gaining the approval of other people\n");
	printf("3) Money\n");
	printf("4) Power and being famous\n");
	printf("5) Friends\n");
	printf("6) The Gospel and what God has done for us\n");
	printf("7) Something else\n");
	
	do
	{
		printf("Enter a number between 1 and 7: ");		
		scanf("%d", &y);
	} while (y<1 || y>7);
	
	if (y == 6)
	{
		printf("Yes, we should ultimately value the most important and free gift in our lives, the reconciled relationship with God made possible solely by Jesus' death and resurrection. \n");
		
		printf("Having a relationship with God as your personal Lord and Savior who you have chosen to be at the center of all aspects of your life is greater than anything else in the world. \n");
	}
	else
	{
		printf("Our hearts are like \"idol factories\" that have placed other things as greater weight than God.");
		printf("When you are worshipping idols, you are replacing God with something that is lesser than Him.");
		printf("God is unchanging and is the only thing in the universe that will completely and permanently satisfy our desires.");
		printf("We should ultimately value the most important and free gift in our lives, the reconciled relationship with God made possible solely by Jesus' death and resurrection. \n");
		printf("Having a relationship with God as your personal Lord and Savior who you have chosen to be at the center of all aspects of your life is greater than anything else in the world. \n");
	}
	
	press1();
	
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	
	// Question 5
	
	printf("Question 5 \n");
	
	printf("What are your opinions about Jesus Christ and his claims? \n\n");
	
	printf("1) That He is Lord of the universe and my life and my personal Savior \n");
	printf("2) That He is a great teacher, but nothing more \n");
	printf("3) Something else \n");
	
	do
	{
		printf("Enter a number between 1 and 3: ");		
		scanf("%d", &y);
	} while (y<1 || y>3);

	if (y==1)
	{
		printf("Great, that is a good response to the Gospel. It is important to internalize the Gospel and constantly keep God at the center of your life! \n");
	}
	else if (y==2)
	{
		printf("That is something we should not say.");
		printf("Jesus Christ made radical claims that He is God. \n");
		printf("There is substantial evidence and credentials that back up His claim! \n");
		printf("He has changed so many lives throughout his life and made an unparalleled positive impact on the world. \n");
		printf("His death and resurrection have influenced, and still influence and will influence, countless lives today. \n");
		
		printf("Therefore, you must make the choice whether He is Lord, if you believe this claim, or that he is crazy/deluded or evil if his claims aren't true \n");
		printf("It is most reasonable to beliee that Jesus' claims are true, and his positive and life-changing impact, life, and demeanor allows us to have faith in Him and his claims to be God. \n");
		printf("It is important to internalize the Gospel and constantly keep God at the center of your life! \n");
	}
	else
	{
		printf("Jesus Christ made radical claims that He is God. \n");
		printf("There is substantial evidence and credentials that back up His claim! \n");
		printf("He has changed so many lives throughout his life and made an unparalleled positive impact on the world. \n");
		printf("His death and resurrection have influenced, and still influence and will influence, countless lives today. \n");
		
		printf("If he were mad or evil, his life and resurrection would have certainly been dubious, but He has the necessary evidence and credentials to support the life that He lived, his resurrection, and His claims that he is God. \n");
	
		printf("Therefore, you must make the choice whether He is Lord, if you believe this claim, or that he is crazy/deluded or evil if his claims aren't true \n");
		printf("It is most reasonable to beliee that Jesus' claims are true, and his positive and life-changing impact, life, and demeanor allows us to have faith in Him and his claims to be God. \n");
		printf("It is important to internalize the Gospel and constantly keep God at the center of your life! \n");
	}
	
	press1();
	
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	
	//End of the quiz, more resources
	
	printf("Thank you so much for taking this quiz! \n");
	printf("If you enjoyed this quiz, please feel free to share this quiz with anyone else you know! \n");
		
	printf("If you are interested in learning more about the gospel, here are some additional resources to continue your spriritual journey:\n");
	
	printf("A Christian fellowship at Pitt: https://pitt.makenewfellowship.org/ \n");
	printf("Course 101: https://www.course101.online/ \n");
	
	printf("Books that I recommend reading to learning more: \n");
	printf("Mere Christianity by C. S. Lewis \n");
	printf("Gospel by J.D. Grear \n");
	
	return 0;
}

void press1(void)
{
	int ans;
	do
	{
		printf("When you have finished reading, enter 1 to continue: ");
		scanf("%d", &ans);
	} while (ans != 1);
}
