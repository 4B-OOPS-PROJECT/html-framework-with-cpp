#include <iostream>
using namespace std;
#include "snippets.h"

int main(int argc, char const *argv[])
{

	start("snapchat");
	navlink n("adverts");
	icon i("snapchat.png");
	navbar nBar;
	i.setMarginleft(170);
	nBar.addItem(i);
	nBar.addItem(n);
	n.setText("Spectacles");
	nBar.addItem(n);
	n.setText("Filters & Lenses");
	nBar.addItem(n);
	n.setText("Store");
	nBar.addItem(n);
	n.setText("Stories");
	nBar.addItem(n);
	n.setText("Map");
	nBar.addItem(n);
	n.setText("Lens Studio");
	nBar.addItem(n);
	n.setText("Kit");
	nBar.addItem(n);
	n.setText("Snapcodes");
	nBar.addItem(n);
	nBar.generate();


	heading h1("sign up",30);

	containerfluid cf;

	icon friends1("friends1.png",40);
	icon friends2("friends2.png",40);

	container c1;
	container c2;
	container c3;
	c1.addItem(friends1);
	c2.addItem(friends2);
	c1.setLeft(0);
	c2.setLeft(470);
	cf.addItem(c1);
	cf.addItem(c2);

	inputfield firstname("enter first name",180);
	inputfield lastname("enter last name",180);
	inputfield email("enter email",370);
	inputfield password("enter password",370);
	inputfield reenterpassword("re-enter your password",370);
	inputfield phonenumber("enter your mobile number",370);

	container inputContainer;

	inputContainer.setBackgroundcolor("white");
	inputContainer.setHeight(600);
	inputContainer.setWidth(400);
	inputContainer.setLeft(1000);
	inputContainer.setTop(100);
	heading signup("Sign Up Here",30);
	signup.setTop(30);
	signup.setLeft(90);
	inputContainer.addItem(signup);
	firstname.setTop(100);
	lastname.setTop(100);
	lastname.setLeft(200);

	inputContainer.addItem(firstname);
	inputContainer.addItem(lastname);
	email.setTop(150);
	password.setTop(200);
	inputContainer.addItem(email);
	inputContainer.addItem(password);
	reenterpassword.setTop(250);
	inputContainer.addItem(reenterpassword);
	phonenumber.setTop(300);
	inputContainer.addItem(phonenumber);

	button b("sign up");
	b.setFontsize(20);
	b.setBackgroundcolor("yellow");
	b.setTop(350);
	b.setLeft(150);
	inputContainer.addItem(b);

	navlink havingtrouble("having trouble ?","red");
	havingtrouble.setTop(390);
	havingtrouble.setLeft(110);
	inputContainer.addItem(havingtrouble);
	cf.addItem(inputContainer);
	cf.setBackgroundimage("background.png");
	cf.generate();
	containerfluid footer;
	footer.setHeight(400);
	container footercontainer1;
	container footercontainer2;
	container footercontainer3;
	container footercontainer4;
	footercontainer4.setWidth(300);
	navlink blacklink("company","black");
	navlink greylink("Snap Inc.","grey");
	footercontainer1.addItem(blacklink);
	footercontainer1.addItem(greylink);
	greylink.setText("Careers");
	footercontainer1.addItem(greylink);
	greylink.setText("News");
	footercontainer1.addItem(greylink);
	blacklink.setText("Community");
	footercontainer2.addItem(blacklink);
	greylink.setText("Support");
	footercontainer2.addItem(greylink);
	greylink.setText("Community guidelines");
	footercontainer2.addItem(greylink);
	greylink.setText("Safety Centre");
	footercontainer2.addItem(greylink);
	blacklink.setText("Advertising");
	footercontainer3.addItem(blacklink);
	greylink.setText("Advertising Policies");

	footercontainer3.addItem(greylink);
	greylink.setText("Political Ads Library");
	footercontainer3.addItem(greylink);
	greylink.setText("Brand Guidelines");
	footercontainer3.addItem(greylink);
	greylink.setText("Promotion Rules");
	footercontainer3.addItem(greylink);
	blacklink.setText("Legal");
	footercontainer4.addItem(blacklink);
	greylink.setText("Privacy Centre");
	footercontainer4.addItem(greylink);
	greylink.setText("Cookie Policy");
	footercontainer4.addItem(greylink);
	greylink.setText("Report Infringement");
	footercontainer4.addItem(greylink);
	greylink.setText("Custom Creative Tools");
	footercontainer4.addItem(greylink);
	greylink.setText("Community Geofilter Terms");
	footercontainer4.addItem(greylink);
	greylink.setText("Lens Studio Terms");
	footercontainer4.addItem(greylink);

	footercontainer1.setTop(50);
	footercontainer2.setTop(50);
	footercontainer3.setTop(50);
	footercontainer4.setTop(50);
	col cols;
	row rows;
	cols.addItem(footercontainer1);
	cols.addItem(footercontainer2);
	cols.addItem(footercontainer3);
	cols.addItem(footercontainer4);
	rows.addItem(cols);
	footer.addItem(rows);
	footer.generate();
	containerfluid endingbar;
	endingbar.setBackgroundcolor("grey");
	endingbar.setHeight(50);
	navlink termsofservice("terms of service","white");
	navlink privacypolicy("privacy policy","white");
	termsofservice.setLeft(300);
	privacypolicy.setLeft(100);
	endingbar.addItem(privacypolicy);
	endingbar.addItem(termsofservice);
	endingbar.generate();	
	deadend();
	return 0;
}
