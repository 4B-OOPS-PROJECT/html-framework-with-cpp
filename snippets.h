#include <iostream>
#include <fstream>
#include <string>
#include <sstream>



using namespace std;

std::string replaceFirstOccurrence(
    std::string& s,
    const std::string& toReplace,
    const std::string& replaceWith)
{
    std::size_t pos = s.find(toReplace);
    if (pos == std::string::npos) return s;
    return s.replace(pos, toReplace.length(), replaceWith);
}

class start
{

public:
	start(string title){
		std::ofstream ofs;
ofs.open("index.html", std::ofstream::out | std::ofstream::trunc);
ofs.close();

		std::ifstream file("./snippets/start");
		std::string str;
		while (std::getline(file, str)) {
	  // process string ...


			string replacewith = "<title>";
			replacewith = replacewith + title;
			string output=replaceFirstOccurrence(str,"<title>",replacewith);

			ofstream file;

		file.open("index.html",std::ios_base::app);
		file << output <<endl;



		}
		cout<<"started creating..."<<endl;

	};


};

class margin{
protected:
	int _marginTop = 0;
	int _marginBottom = 0;
	int _marginLeft = 0;
	int _marginRight = 0;
	int _margin = 0;

public:

	void setMargintop(int marginTop){
		_marginTop = marginTop;
	}

	void setMarginbottom(int marginBottom){
		_marginBottom = marginBottom;
	}

	void setMarginright(int marginRight){
		_marginRight = marginRight;
	}

	void setMarginleft(int marginLeft){
		_marginLeft = marginLeft;
	}

	void setMargin(int margin){
		_margin = margin;
	}

};


class padding{
protected:
	int _paddingTop = 0;
	int _paddingBottom = 0;
	int _paddingLeft = 0;
	int _paddingRight = 0;
	int _padding = 0;

public:

	void setPaddingtop(int paddingTop){
		_paddingTop = paddingTop;
	}

	void setPaddingbottom(int paddingBottom){
		_paddingBottom = paddingBottom;
	}

	void setPaddingright(int paddingRight){
		_paddingRight = paddingRight;
	}

	void setPaddingleft(int paddingLeft){
		_paddingLeft = paddingLeft;
	}

	void setPadding(int padding){
		_padding = padding;
	}

};

class position{
protected:
	int _left = 0;
	int _right = 0;
	int _top = 0;
	int _bottom = 0;
	string _position = "none";

public:

	void setTop(int top){
		_position = "absolute";
		_top = top;
	}

	void setBottom(int bottom){
		_position = "absolute";
		_bottom = bottom;
	}

	void setLeft(int left){
		_position = "absolute";
		_left = left;
	}

	void setRight(int right){
		_position = "absolute";
		_right = right;
	}

	void setPosition(string position){
		_position = position;
	}

};




class heading: public margin,public padding,public position{
	string _text;
	int _fontsize=20;
	string _color;


public:
	void setText(string text){
		_text = text;
	}

	void setFontsize(int fontsize){
		_fontsize = fontsize;
	}

	void setColor(string color){
		_color = color;
	}

	heading(){

	}

	heading(string text){
		_text = text;
	}
	heading(string text,int font){
		_text = text;
		_fontsize = font;
	}

	heading(string text,string color){
		_text = text;
		_color = color;
	}


	string getHeading(){
		stringstream out;
		std::ifstream file("./snippets/heading");
		std::string str;
		while (std::getline(file, str)) {

			stringstream fontstream;
			fontstream<<_fontsize;
			stringstream marginstream;
			if (_margin!=0)
			{
				/* code */
				marginstream<<_margin;
			}

			else{
				marginstream<<"none";
			}

			stringstream marginleftstream;
			if (_marginLeft!=0)
			{
				/* code */
				marginleftstream<<_marginLeft;
			}

			else{
				marginleftstream<<"none";
			}
			stringstream marginrightstream;
			if (_marginRight!=0)
			{
				/* code */
				marginrightstream<<_marginRight;
			}
			else{
				marginrightstream<<"none";
			}
			stringstream margintopstream;
			if (_marginTop!=0)
			{
				/* code */
				margintopstream<<_marginTop;
			}
			else{
				margintopstream<<"none";
			}
			stringstream marginbottomstream;
			if (_marginBottom!=0)
			{
				/* code */
				marginbottomstream<<_marginBottom;
			}
			else{
				marginbottomstream<<"none";
			}

			stringstream paddingtopstream;
			if (_paddingTop!=0)
			{
				/* code */
				paddingtopstream<<_paddingTop;
			}
			else{
				paddingtopstream<<"none";
			}
			stringstream paddingbottomstream;
			if (_paddingBottom!=0)
			{
				/* code */
				paddingbottomstream<<_paddingBottom;
			}
			else{
				paddingbottomstream<<"none";
			}
			stringstream paddingrightstream;
			if (_paddingRight!=0)
			{
				/* code */
				paddingrightstream<<_paddingRight;
			}
			else{
				paddingrightstream<<"none";
			}
			stringstream paddingleftstream;
			if (_paddingLeft!=0)
			{
				/* code */
				paddingleftstream<<_paddingLeft;
			}
			else{
				paddingleftstream<<"none";
			}
			stringstream paddingstream;
			if (_padding!=0)
			{
				/* code */
				paddingstream<<_padding;
			}
			else{
				paddingstream<<"none";
			}


			stringstream leftstream,rightstream,bottomstream,topstream;
			if (_left!=0)
			{
				/* code */

				leftstream<<_left;
			}
			else{
				leftstream<<"none";
			}
			if (_right!=0)
			{
				/* code */

				rightstream<<_right;
			}
			else{
				rightstream<<"none";
			}
			if (_top!=0)
			{
				/* code */

				topstream<<_top;
			}
			else{
				topstream<<"none";
			}
			if (_bottom!=0)
			{
				/* code */

				bottomstream<<_bottom;
			}
			else{
				bottomstream<<"none";
			}

			string output=replaceFirstOccurrence(str,"_color",_color);
			output = replaceFirstOccurrence(str,"_fontsize",fontstream.str());
			output = replaceFirstOccurrence(str,"_text",_text);
			output = replaceFirstOccurrence(str,"__margin",marginstream.str());
			output = replaceFirstOccurrence(str,"_left",leftstream.str());
			output = replaceFirstOccurrence(str,"_right",rightstream.str());
			output = replaceFirstOccurrence(str,"_top",topstream.str());
			output = replaceFirstOccurrence(str,"_bottom",bottomstream.str());
			output = replaceFirstOccurrence(str,"_position",_position);
			output = replaceFirstOccurrence(str,"_margintop",margintopstream.str());
			output = replaceFirstOccurrence(str,"_marginbottom",marginbottomstream.str());
			output = replaceFirstOccurrence(str,"_marginright",marginrightstream.str());
			output = replaceFirstOccurrence(str,"_marginleft",marginleftstream.str());
			output = replaceFirstOccurrence(str,"_paddingtop",paddingtopstream.str());
			output = replaceFirstOccurrence(str,"_paddingbottom",paddingbottomstream.str());
			output = replaceFirstOccurrence(str,"_paddingright",paddingrightstream.str());
			output = replaceFirstOccurrence(str,"_paddingleft",paddingleftstream.str());
			output = replaceFirstOccurrence(str,"__padding",paddingstream.str());

			out<<output;
		// ofstream file;


		// file.open("index.html",std::ios_base::app);
		// file << output <<endl;

		}
		return out.str();
	}


};

class icon:public padding,public margin,public position{
	string _image;
	int _size=2;

public:
	icon(){

	}

	icon(string image){
		_image = image;
	}

	icon(string image,int size){
		_image = image;
		_size = size;
	}




	void setImagename(string image){
		_image = image;
	}


	void setSize(int size){
		_size = size;
	}



	string getIcon(){
		stringstream out;
		std::ifstream file("./snippets/thumbnail");
		std::string str;
		while (std::getline(file, str)) {

			stringstream sizestream;
			sizestream<<_size;
			stringstream marginstream;
			if (_margin!=0)
			{
				/* code */
				marginstream<<_margin;
			}

			else{
				marginstream<<"none";
			}

			stringstream marginleftstream;
			if (_marginLeft!=0)
			{
				/* code */
				marginleftstream<<_marginLeft;
			}

			else{
				marginleftstream<<"none";
			}
			stringstream marginrightstream;
			if (_marginRight!=0)
			{
				/* code */
				marginrightstream<<_marginRight;
			}
			else{
				marginrightstream<<"none";
			}
			stringstream margintopstream;
			if (_marginTop!=0)
			{
				/* code */
				margintopstream<<_marginTop;
			}
			else{
				margintopstream<<"none";
			}
			stringstream marginbottomstream;
			if (_marginBottom!=0)
			{
				/* code */
				marginbottomstream<<_marginBottom;
			}
			else{
				marginbottomstream<<"none";
			}

			stringstream paddingtopstream;
			if (_paddingTop!=0)
			{
				/* code */
				paddingtopstream<<_paddingTop;
			}
			else{
				paddingtopstream<<"none";
			}
			stringstream paddingbottomstream;
			if (_paddingBottom!=0)
			{
				/* code */
				paddingbottomstream<<_paddingBottom;
			}
			else{
				paddingbottomstream<<"none";
			}
			stringstream paddingrightstream;
			if (_paddingRight!=0)
			{
				/* code */
				paddingrightstream<<_paddingRight;
			}
			else{
				paddingrightstream<<"none";
			}
			stringstream paddingleftstream;
			if (_paddingLeft!=0)
			{
				/* code */
				paddingleftstream<<_paddingLeft;
			}
			else{
				paddingleftstream<<"none";
			}
			stringstream paddingstream;
			if (_padding!=0)
			{
				/* code */
				paddingstream<<_padding;
			}
			else{
				paddingstream<<"none";
			}


			stringstream leftstream,rightstream,bottomstream,topstream;
			if (_left!=0)
			{
				/* code */

				leftstream<<_left;
			}
			else{
				leftstream<<"none";
			}
			if (_right!=0)
			{
				/* code */

				rightstream<<_right;
			}
			else{
				rightstream<<"none";
			}
			if (_top!=0)
			{
				/* code */

				topstream<<_top;
			}
			else{
				topstream<<"none";
			}
			if (_bottom!=0)
			{
				/* code */

				bottomstream<<_bottom;
			}
			else{
				bottomstream<<"none";
			}


			string output=replaceFirstOccurrence(str,"_height",sizestream.str());
			output = replaceFirstOccurrence(str,"_imagename",_image);
			output = replaceFirstOccurrence(str,"__margin",marginstream.str());
			output = replaceFirstOccurrence(str,"_left",leftstream.str());
			output = replaceFirstOccurrence(str,"_right",rightstream.str());
			output = replaceFirstOccurrence(str,"_top",topstream.str());
			output = replaceFirstOccurrence(str,"_bottom",bottomstream.str());
			output = replaceFirstOccurrence(str,"_position",_position);
			output = replaceFirstOccurrence(str,"_margintop",margintopstream.str());
			output = replaceFirstOccurrence(str,"_marginbottom",marginbottomstream.str());
			output = replaceFirstOccurrence(str,"_marginright",marginrightstream.str());
			output = replaceFirstOccurrence(str,"_marginleft",marginleftstream.str());
			output = replaceFirstOccurrence(str,"_paddingtop",paddingtopstream.str());
			output = replaceFirstOccurrence(str,"_paddingbottom",paddingbottomstream.str());
			output = replaceFirstOccurrence(str,"_paddingright",paddingrightstream.str());
			output = replaceFirstOccurrence(str,"_paddingleft",paddingleftstream.str());
			output = replaceFirstOccurrence(str,"__padding",paddingstream.str());



			out<<output;
		// ofstream file;


		// file.open("index.html",std::ios_base::app);
		// file << output <<endl;

		}
		return out.str();

	}

};

class button:public position,public margin,public padding
{
	string _backgroundcolor;
	string _textcolor;
	int _fontsize= 20;
	string _text;




public:
	button(){

	}



	button(string text){
		_text = text;
	}

	void setText(string text){
		_text = text;
	}

	void setBackgroundcolor(string backgroundcolor){
		_backgroundcolor = backgroundcolor;
	}

	void setTextcolor(string textcolor){
		_textcolor = textcolor;
	}

	void setFontsize(int fontsize){
		_fontsize = fontsize;
	}

	string getButton(){

		stringstream out;
		std::ifstream file("./snippets/button");
		std::string str;
		while (std::getline(file, str)) {





			stringstream _fontstream;
			_fontstream<<_fontsize;
			stringstream marginstream;
			if (_margin!=0)
			{
				/* code */
				marginstream<<_margin;
			}

			else{
				marginstream<<"none";
			}

			stringstream marginleftstream;
			if (_marginLeft!=0)
			{
				/* code */
				marginleftstream<<_marginLeft;
			}

			else{
				marginleftstream<<"none";
			}
			stringstream marginrightstream;
			if (_marginRight!=0)
			{
				/* code */
				marginrightstream<<_marginRight;
			}
			else{
				marginrightstream<<"none";
			}
			stringstream margintopstream;
			if (_marginTop!=0)
			{
				/* code */
				margintopstream<<_marginTop;
			}
			else{
				margintopstream<<"none";
			}
			stringstream marginbottomstream;
			if (_marginBottom!=0)
			{
				/* code */
				marginbottomstream<<_marginBottom;
			}
			else{
				marginbottomstream<<"none";
			}

			stringstream paddingtopstream;
			if (_paddingTop!=0)
			{
				/* code */
				paddingtopstream<<_paddingTop;
			}
			else{
				paddingtopstream<<"none";
			}
			stringstream paddingbottomstream;
			if (_paddingBottom!=0)
			{
				/* code */
				paddingbottomstream<<_paddingBottom;
			}
			else{
				paddingbottomstream<<"none";
			}
			stringstream paddingrightstream;
			if (_paddingRight!=0)
			{
				/* code */
				paddingrightstream<<_paddingRight;
			}
			else{
				paddingrightstream<<"none";
			}
			stringstream paddingleftstream;
			if (_paddingLeft!=0)
			{
				/* code */
				paddingleftstream<<_paddingLeft;
			}
			else{
				paddingleftstream<<"none";
			}
			stringstream paddingstream;
			if (_padding!=0)
			{
				/* code */
				paddingstream<<_padding;
			}
			else{
				paddingstream<<"none";
			}


			stringstream leftstream,rightstream,bottomstream,topstream;
			if (_left!=0)
			{
				/* code */

				leftstream<<_left;
			}
			else{
				leftstream<<"none";
			}
			if (_right!=0)
			{
				/* code */

				rightstream<<_right;
			}
			else{
				rightstream<<"none";
			}
			if (_top!=0)
			{
				/* code */

				topstream<<_top;
			}
			else{
				topstream<<"none";
			}
			if (_bottom!=0)
			{
				/* code */

				bottomstream<<_bottom;
			}
			else{
				bottomstream<<"none";
			}




			string output=replaceFirstOccurrence(str,"_backgroundcolor",_backgroundcolor);
			output = replaceFirstOccurrence(str,"_textcolor",_textcolor);
			output = replaceFirstOccurrence(str,"_fontsize",_fontstream.str());
			output = replaceFirstOccurrence(str,"_text",_text);
			output = replaceFirstOccurrence(str,"__margin",marginstream.str());
			output = replaceFirstOccurrence(str,"_left",leftstream.str());
			output = replaceFirstOccurrence(str,"_right",rightstream.str());
			output = replaceFirstOccurrence(str,"_top",topstream.str());
			output = replaceFirstOccurrence(str,"_bottom",bottomstream.str());
			output = replaceFirstOccurrence(str,"_position",_position);
			output = replaceFirstOccurrence(str,"_margintop",margintopstream.str());
			output = replaceFirstOccurrence(str,"_marginbottom",marginbottomstream.str());
			output = replaceFirstOccurrence(str,"_marginright",marginrightstream.str());
			output = replaceFirstOccurrence(str,"_marginleft",marginleftstream.str());
			output = replaceFirstOccurrence(str,"_paddingtop",paddingtopstream.str());
			output = replaceFirstOccurrence(str,"_paddingbottom",paddingbottomstream.str());
			output = replaceFirstOccurrence(str,"_paddingright",paddingrightstream.str());
			output = replaceFirstOccurrence(str,"_paddingleft",paddingleftstream.str());
			output = replaceFirstOccurrence(str,"__padding",paddingstream.str());





			out<<output;
		// ofstream file;


		// file.open("index.html",std::ios_base::app);
		// file << output <<endl;

		}
		return out.str();


	}

};

class searchbar:public padding,public margin,public position{
	string _placeholder;
	int _width;

public:
	searchbar(){

	}

	searchbar(string placeholder){
		_placeholder = placeholder;
	}

	void setWidth(int width){
		_width = width;
	}


	string getSearchbar(){

		stringstream out;
		std::ifstream file("./snippets/searchbar");
		std::string str;
		while (std::getline(file, str)) {

			stringstream _widthstream;
			_widthstream<<_width;
			stringstream marginstream;
			if (_margin!=0)
			{
				/* code */
				marginstream<<_margin;
			}

			else{
				marginstream<<"none";
			}

			stringstream marginleftstream;
			if (_marginLeft!=0)
			{
				/* code */
				marginleftstream<<_marginLeft;
			}

			else{
				marginleftstream<<"none";
			}
			stringstream marginrightstream;
			if (_marginRight!=0)
			{
				/* code */
				marginrightstream<<_marginRight;
			}
			else{
				marginrightstream<<"none";
			}
			stringstream margintopstream;
			if (_marginTop!=0)
			{
				/* code */
				margintopstream<<_marginTop;
			}
			else{
				margintopstream<<"none";
			}
			stringstream marginbottomstream;
			if (_marginBottom!=0)
			{
				/* code */
				marginbottomstream<<_marginBottom;
			}
			else{
				marginbottomstream<<"none";
			}

			stringstream paddingtopstream;
			if (_paddingTop!=0)
			{
				/* code */
				paddingtopstream<<_paddingTop;
			}
			else{
				paddingtopstream<<"none";
			}
			stringstream paddingbottomstream;
			if (_paddingBottom!=0)
			{
				/* code */
				paddingbottomstream<<_paddingBottom;
			}
			else{
				paddingbottomstream<<"none";
			}
			stringstream paddingrightstream;
			if (_paddingRight!=0)
			{
				/* code */
				paddingrightstream<<_paddingRight;
			}
			else{
				paddingrightstream<<"none";
			}
			stringstream paddingleftstream;
			if (_paddingLeft!=0)
			{
				/* code */
				paddingleftstream<<_paddingLeft;
			}
			else{
				paddingleftstream<<"none";
			}
			stringstream paddingstream;
			if (_padding!=0)
			{
				/* code */
				paddingstream<<_padding;
			}
			else{
				paddingstream<<"none";
			}


			stringstream leftstream,rightstream,bottomstream,topstream;
			if (_left!=0)
			{
				/* code */

				leftstream<<_left;
			}
			else{
				leftstream<<"none";
			}
			if (_right!=0)
			{
				/* code */

				rightstream<<_right;
			}
			else{
				rightstream<<"none";
			}
			if (_top!=0)
			{
				/* code */

				topstream<<_top;
			}
			else{
				topstream<<"none";
			}
			if (_bottom!=0)
			{
				/* code */

				bottomstream<<_bottom;
			}
			else{
				bottomstream<<"none";
			}

			string output=replaceFirstOccurrence(str,"_placeholder",_placeholder);
			output = replaceFirstOccurrence(str,"_width",_widthstream.str());

			output = replaceFirstOccurrence(str,"__margin",marginstream.str());
			output = replaceFirstOccurrence(str,"_left",leftstream.str());
			output = replaceFirstOccurrence(str,"_right",rightstream.str());
			output = replaceFirstOccurrence(str,"_top",topstream.str());
			output = replaceFirstOccurrence(str,"_bottom",bottomstream.str());
			output = replaceFirstOccurrence(str,"_position",_position);
			output = replaceFirstOccurrence(str,"_margintop",margintopstream.str());
			output = replaceFirstOccurrence(str,"_marginbottom",marginbottomstream.str());
			output = replaceFirstOccurrence(str,"_marginright",marginrightstream.str());
			output = replaceFirstOccurrence(str,"_marginleft",marginleftstream.str());
			output = replaceFirstOccurrence(str,"_paddingtop",paddingtopstream.str());
			output = replaceFirstOccurrence(str,"_paddingbottom",paddingbottomstream.str());
			output = replaceFirstOccurrence(str,"_paddingright",paddingrightstream.str());
			output = replaceFirstOccurrence(str,"_paddingleft",paddingleftstream.str());
			output = replaceFirstOccurrence(str,"__padding",paddingstream.str());

			out<<output;
		// ofstream file;


		// file.open("index.html",std::ios_base::app);
		// file << output <<endl;

		}
		return out.str();

	}

};

class inputfield:public position,public margin,public padding{
	string _placeholder;
	int _width=400;


public:
	inputfield(){

	}

	inputfield(string placeholder){
		_placeholder = placeholder;
	}
	inputfield(string placeholder,int width){
		_placeholder = placeholder;
		_width = width;
	}


	string getSearchbar(){

		stringstream out;
		std::ifstream file("./snippets/searchbar");
		std::string str;
		while (std::getline(file, str)) {

			stringstream marginstream;
			if (_margin!=0)
			{
				/* code */
				marginstream<<_margin;
			}

			else{
				marginstream<<"none";
			}

			stringstream marginleftstream;
			if (_marginLeft!=0)
			{
				/* code */
				marginleftstream<<_marginLeft;
			}

			else{
				marginleftstream<<"none";
			}
			stringstream marginrightstream;
			if (_marginRight!=0)
			{
				/* code */
				marginrightstream<<_marginRight;
			}
			else{
				marginrightstream<<"none";
			}
			stringstream margintopstream;
			if (_marginTop!=0)
			{
				/* code */
				margintopstream<<_marginTop;
			}
			else{
				margintopstream<<"none";
			}
			stringstream marginbottomstream;
			if (_marginBottom!=0)
			{
				/* code */
				marginbottomstream<<_marginBottom;
			}
			else{
				marginbottomstream<<"none";
			}

			stringstream paddingtopstream;
			if (_paddingTop!=0)
			{
				/* code */
				paddingtopstream<<_paddingTop;
			}
			else{
				paddingtopstream<<"none";
			}
			stringstream paddingbottomstream;
			if (_paddingBottom!=0)
			{
				/* code */
				paddingbottomstream<<_paddingBottom;
			}
			else{
				paddingbottomstream<<"none";
			}
			stringstream paddingrightstream;
			if (_paddingRight!=0)
			{
				/* code */
				paddingrightstream<<_paddingRight;
			}
			else{
				paddingrightstream<<"none";
			}
			stringstream paddingleftstream;
			if (_paddingLeft!=0)
			{
				/* code */
				paddingleftstream<<_paddingLeft;
			}
			else{
				paddingleftstream<<"none";
			}
			stringstream paddingstream;
			if (_padding!=0)
			{
				/* code */
				paddingstream<<_padding;
			}
			else{
				paddingstream<<"none";
			}


			stringstream leftstream,rightstream,bottomstream,topstream;
			if (_left!=0)
			{
				/* code */

				leftstream<<_left;
			}
			else{
				leftstream<<"none";
			}
			if (_right!=0)
			{
				/* code */

				rightstream<<_right;
			}
			else{
				rightstream<<"none";
			}
			if (_top!=0)
			{
				/* code */

				topstream<<_top;
			}
			else{
				topstream<<"none";
			}
			if (_bottom!=0)
			{
				/* code */

				bottomstream<<_bottom;
			}
			else{
				bottomstream<<"none";
			}

			stringstream _widthstream;
			_widthstream<<_width;

			string output=replaceFirstOccurrence(str,"_placeholder",_placeholder);
			output = replaceFirstOccurrence(str,"_width",_widthstream.str());
			output = replaceFirstOccurrence(str,"__margin",marginstream.str());
			output = replaceFirstOccurrence(str,"_left",leftstream.str());
			output = replaceFirstOccurrence(str,"_right",rightstream.str());
			output = replaceFirstOccurrence(str,"_top",topstream.str());
			output = replaceFirstOccurrence(str,"_bottom",bottomstream.str());
			output = replaceFirstOccurrence(str,"_position",_position);
			output = replaceFirstOccurrence(str,"_margintop",margintopstream.str());
			output = replaceFirstOccurrence(str,"_marginbottom",marginbottomstream.str());
			output = replaceFirstOccurrence(str,"_marginright",marginrightstream.str());
			output = replaceFirstOccurrence(str,"_marginleft",marginleftstream.str());
			output = replaceFirstOccurrence(str,"_paddingtop",paddingtopstream.str());
			output = replaceFirstOccurrence(str,"_paddingbottom",paddingbottomstream.str());
			output = replaceFirstOccurrence(str,"_paddingright",paddingrightstream.str());
			output = replaceFirstOccurrence(str,"_paddingleft",paddingleftstream.str());
			output = replaceFirstOccurrence(str,"__padding",paddingstream.str());

			out<<output;
		// ofstream file;


		// file.open("index.html",std::ios_base::app);
		// file << output <<endl;

		}
		return out.str();

	}

};




class navlink:public position,public margin,public padding{
	string _color = "black";
	int _fontsize = 20;
	string _text = "";


public:
	navlink(){

	}



	navlink(string text,int font,string color){
		_text = text;
		_fontsize = font;
		_color = color;
	}
	navlink(string text,string color,int font){
		_text = text;
		_fontsize = font;
		_color = color;
	}

	navlink(string text){
		_text = text;
	}
	navlink(string text,string color){
		_text = text;
		_color = color;
	}
	void setcolor(string color){
		_color = color;
	}

	void setFontsize(int fontsize){
		_fontsize = fontsize;
	}
	void setText(string text){
		_text = text;
	}

	string getNavlink(){
		stringstream out;
		std::ifstream file("./snippets/navlink");
		std::string str;
		while (std::getline(file, str)) {

			string _fontsizestring;
			stringstream ss;
			ss<<_fontsize;
			_fontsizestring = ss.str();

			stringstream marginstream;
			if (_margin!=0)
			{
				/* code */
				marginstream<<_margin;
			}

			else{
				marginstream<<"none";
			}

			stringstream marginleftstream;
			if (_marginLeft!=0)
			{
				/* code */
				marginleftstream<<_marginLeft;
			}

			else{
				marginleftstream<<"none";
			}
			stringstream marginrightstream;
			if (_marginRight!=0)
			{
				/* code */
				marginrightstream<<_marginRight;
			}
			else{
				marginrightstream<<"none";
			}
			stringstream margintopstream;
			if (_marginTop!=0)
			{
				/* code */
				margintopstream<<_marginTop;
			}
			else{
				margintopstream<<"none";
			}
			stringstream marginbottomstream;
			if (_marginBottom!=0)
			{
				/* code */
				marginbottomstream<<_marginBottom;
			}
			else{
				marginbottomstream<<"none";
			}

			stringstream paddingtopstream;
			if (_paddingTop!=0)
			{
				/* code */
				paddingtopstream<<_paddingTop;
			}
			else{
				paddingtopstream<<"none";
			}
			stringstream paddingbottomstream;
			if (_paddingBottom!=0)
			{
				/* code */
				paddingbottomstream<<_paddingBottom;
			}
			else{
				paddingbottomstream<<"none";
			}
			stringstream paddingrightstream;
			if (_paddingRight!=0)
			{
				/* code */
				paddingrightstream<<_paddingRight;
			}
			else{
				paddingrightstream<<"none";
			}
			stringstream paddingleftstream;
			if (_paddingLeft!=0)
			{
				/* code */
				paddingleftstream<<_paddingLeft;
			}
			else{
				paddingleftstream<<"none";
			}
			stringstream paddingstream;
			if (_padding!=0)
			{
				/* code */
				paddingstream<<_padding;
			}
			else{
				paddingstream<<"none";
			}


			stringstream leftstream,rightstream,bottomstream,topstream;
			if (_left!=0)
			{
				/* code */

				leftstream<<_left;
			}
			else{
				leftstream<<"none";
			}
			if (_right!=0)
			{
				/* code */

				rightstream<<_right;
			}
			else{
				rightstream<<"none";
			}
			if (_top!=0)
			{
				/* code */

				topstream<<_top;
			}
			else{
				topstream<<"none";
			}
			if (_bottom!=0)
			{
				/* code */

				bottomstream<<_bottom;
			}
			else{
				bottomstream<<"none";
			}


			string output=replaceFirstOccurrence(str,"_color",_color);
			output = replaceFirstOccurrence(str,"_fontsize",_fontsizestring);
			output = replaceFirstOccurrence(str,"_text",_text);
			output = replaceFirstOccurrence(str,"__margin",marginstream.str());
			output = replaceFirstOccurrence(str,"_left",leftstream.str());
			output = replaceFirstOccurrence(str,"_right",rightstream.str());
			output = replaceFirstOccurrence(str,"_top",topstream.str());
			output = replaceFirstOccurrence(str,"_bottom",bottomstream.str());
			output = replaceFirstOccurrence(str,"_position",_position);
			output = replaceFirstOccurrence(str,"_margintop",margintopstream.str());
			output = replaceFirstOccurrence(str,"_marginbottom",marginbottomstream.str());
			output = replaceFirstOccurrence(str,"_marginright",marginrightstream.str());
			output = replaceFirstOccurrence(str,"_marginleft",marginleftstream.str());
			output = replaceFirstOccurrence(str,"_paddingtop",paddingtopstream.str());
			output = replaceFirstOccurrence(str,"_paddingbottom",paddingbottomstream.str());
			output = replaceFirstOccurrence(str,"_paddingright",paddingrightstream.str());
			output = replaceFirstOccurrence(str,"_paddingleft",paddingleftstream.str());
			output = replaceFirstOccurrence(str,"__padding",paddingstream.str());

			out<<output;
		// ofstream file;


		// file.open("index.html",std::ios_base::app);
		// file << output <<endl;

		}
		return out.str();

	}

	string getNavlink(string text,int fontsize,string color){
		_text = text;
		_fontsize = fontsize;
		_color = color;
		stringstream out;
		std::ifstream file("./snippets/navlink");
		std::string str;
		while (std::getline(file, str)) {

			string _fontsizestring;
			stringstream ss;
			ss<<_fontsize;
			_fontsizestring = ss.str();

			stringstream marginstream;
			if (_margin!=0)
			{
				/* code */
				marginstream<<_margin;
			}

			else{
				marginstream<<"none";
			}

			stringstream marginleftstream;
			if (_marginLeft!=0)
			{
				/* code */
				marginleftstream<<_marginLeft;
			}

			else{
				marginleftstream<<"none";
			}
			stringstream marginrightstream;
			if (_marginRight!=0)
			{
				/* code */
				marginrightstream<<_marginRight;
			}
			else{
				marginrightstream<<"none";
			}
			stringstream margintopstream;
			if (_marginTop!=0)
			{
				/* code */
				margintopstream<<_marginTop;
			}
			else{
				margintopstream<<"none";
			}
			stringstream marginbottomstream;
			if (_marginBottom!=0)
			{
				/* code */
				marginbottomstream<<_marginBottom;
			}
			else{
				marginbottomstream<<"none";
			}

			stringstream paddingtopstream;
			if (_paddingTop!=0)
			{
				/* code */
				paddingtopstream<<_paddingTop;
			}
			else{
				paddingtopstream<<"none";
			}
			stringstream paddingbottomstream;
			if (_paddingBottom!=0)
			{
				/* code */
				paddingbottomstream<<_paddingBottom;
			}
			else{
				paddingbottomstream<<"none";
			}
			stringstream paddingrightstream;
			if (_paddingRight!=0)
			{
				/* code */
				paddingrightstream<<_paddingRight;
			}
			else{
				paddingrightstream<<"none";
			}
			stringstream paddingleftstream;
			if (_paddingLeft!=0)
			{
				/* code */
				paddingleftstream<<_paddingLeft;
			}
			else{
				paddingleftstream<<"none";
			}
			stringstream paddingstream;
			if (_padding!=0)
			{
				/* code */
				paddingstream<<_padding;
			}
			else{
				paddingstream<<"none";
			}


			stringstream leftstream,rightstream,bottomstream,topstream;
			if (_left!=0)
			{
				/* code */

				leftstream<<_left;
			}
			else{
				leftstream<<"none";
			}
			if (_right!=0)
			{
				/* code */

				rightstream<<_right;
			}
			else{
				rightstream<<"none";
			}
			if (_top!=0)
			{
				/* code */

				topstream<<_top;
			}
			else{
				topstream<<"none";
			}
			if (_bottom!=0)
			{
				/* code */

				bottomstream<<_bottom;
			}
			else{
				bottomstream<<"none";
			}


			string output=replaceFirstOccurrence(str,"_color",_color);
			output = replaceFirstOccurrence(str,"_fontsize",_fontsizestring);
			output = replaceFirstOccurrence(str,"_text",_text);
			output = replaceFirstOccurrence(str,"__margin",marginstream.str());
			output = replaceFirstOccurrence(str,"_left",leftstream.str());
			output = replaceFirstOccurrence(str,"_right",rightstream.str());
			output = replaceFirstOccurrence(str,"_top",topstream.str());
			output = replaceFirstOccurrence(str,"_bottom",bottomstream.str());
			output = replaceFirstOccurrence(str,"_position",_position);
			output = replaceFirstOccurrence(str,"_margintop",margintopstream.str());
			output = replaceFirstOccurrence(str,"_marginbottom",marginbottomstream.str());
			output = replaceFirstOccurrence(str,"_marginright",marginrightstream.str());
			output = replaceFirstOccurrence(str,"_marginleft",marginleftstream.str());
			output = replaceFirstOccurrence(str,"_paddingtop",paddingtopstream.str());
			output = replaceFirstOccurrence(str,"_paddingbottom",paddingbottomstream.str());
			output = replaceFirstOccurrence(str,"_paddingright",paddingrightstream.str());
			output = replaceFirstOccurrence(str,"_paddingleft",paddingleftstream.str());
			output = replaceFirstOccurrence(str,"__padding",paddingstream.str());

			out<<output;
		// ofstream file;


		// file.open("index.html",std::ios_base::app);
		// file << output <<endl;

		}
		return out.str();

	}


};



class dropdownitem{
	string _text;
	int _fontsize=20;
public:
	dropdownitem(){

	}
	dropdownitem(string text,int font){
		_text = text;
		_fontsize = font;
	}
	dropdownitem(string text){
		_text = text;

	}

	void setText(string text){
		_text = text;
	}
	void setFontsize(int font){
		_fontsize = font;
	}

	string getDropdownitem(){

		std::ifstream file("./snippets/dropdownitem");
		std::string str;
		stringstream out;
		while (std::getline(file, str)) {

			string _fontsizestring;
			stringstream ss;
			ss<<_fontsize;
			_fontsizestring = ss.str();

			string output = replaceFirstOccurrence(str,"_fontsize",_fontsizestring);
			output = replaceFirstOccurrence(str,"_text",_text);
			out<<output<<endl;
		// ofstream file;


		// file.open("index.html",std::ios_base::app);
		// file << output <<endl;

		}
		return out.str();


	}

};

class dropdown:public position,public margin,public padding{
	string _color = "";
	int _fontsize = -1;
	string _dropdownlink = "";
	dropdownitem dDownitem[10];
	int dropdownitemiterator = 0;
	string dropdownItems="";



public:

	void addItem(dropdownitem d){
	    try
		{
            if (dropdownitemiterator+1 < 10)
            {
                dDownitem[dropdownitemiterator++] = d;
                dropdownItems = dropdownItems + d.getDropdownitem();
            }
            else
            {
                throw "limit reached!cannot add item";
            }
        }
        catch (const char* msg)
        {
            cerr << msg << endl;
        }


	}




	dropdown(){


	}




	dropdown(string dropdownlink,int font,string color){
		_dropdownlink = dropdownlink;
		_fontsize = font;
		_color = color;
	}

	dropdown(string dropdownlink,int font){
		_dropdownlink = dropdownlink;
		_fontsize = font;

	}

	void setColor(string color){
		_color = color;
	}

	void setFontsize(int fontsize){
		_fontsize = fontsize;
	}
	void setDropdownlink(string dropdownlink){
		_dropdownlink = dropdownlink;
	}

	string getDropdown(){
		stringstream out;
		std::ifstream file("./snippets/dropdown");
		std::string str;
		while (std::getline(file, str)) {

			string _fontsizestring;
			stringstream ss;
			ss<<_fontsize;
			_fontsizestring = ss.str();
			stringstream marginstream;
			if (_margin!=0)
			{
				/* code */
				marginstream<<_margin;
			}

			else{
				marginstream<<"none";
			}

			stringstream marginleftstream;
			if (_marginLeft!=0)
			{
				/* code */
				marginleftstream<<_marginLeft;
			}

			else{
				marginleftstream<<"none";
			}
			stringstream marginrightstream;
			if (_marginRight!=0)
			{
				/* code */
				marginrightstream<<_marginRight;
			}
			else{
				marginrightstream<<"none";
			}
			stringstream margintopstream;
			if (_marginTop!=0)
			{
				/* code */
				margintopstream<<_marginTop;
			}
			else{
				margintopstream<<"none";
			}
			stringstream marginbottomstream;
			if (_marginBottom!=0)
			{
				/* code */
				marginbottomstream<<_marginBottom;
			}
			else{
				marginbottomstream<<"none";
			}

			stringstream paddingtopstream;
			if (_paddingTop!=0)
			{
				/* code */
				paddingtopstream<<_paddingTop;
			}
			else{
				paddingtopstream<<"none";
			}
			stringstream paddingbottomstream;
			if (_paddingBottom!=0)
			{
				/* code */
				paddingbottomstream<<_paddingBottom;
			}
			else{
				paddingbottomstream<<"none";
			}
			stringstream paddingrightstream;
			if (_paddingRight!=0)
			{
				/* code */
				paddingrightstream<<_paddingRight;
			}
			else{
				paddingrightstream<<"none";
			}
			stringstream paddingleftstream;
			if (_paddingLeft!=0)
			{
				/* code */
				paddingleftstream<<_paddingLeft;
			}
			else{
				paddingleftstream<<"none";
			}
			stringstream paddingstream;
			if (_padding!=0)
			{
				/* code */
				paddingstream<<_padding;
			}
			else{
				paddingstream<<"none";
			}


			stringstream leftstream,rightstream,bottomstream,topstream;
			if (_left!=0)
			{
				/* code */

				leftstream<<_left;
			}
			else{
				leftstream<<"none";
			}
			if (_right!=0)
			{
				/* code */

				rightstream<<_right;
			}
			else{
				rightstream<<"none";
			}
			if (_top!=0)
			{
				/* code */

				topstream<<_top;
			}
			else{
				topstream<<"none";
			}
			if (_bottom!=0)
			{
				/* code */

				bottomstream<<_bottom;
			}
			else{
				bottomstream<<"none";
			}

			string output=replaceFirstOccurrence(str,"_color",_color);
			output = replaceFirstOccurrence(str,"_fontsize",_fontsizestring);
			output = replaceFirstOccurrence(str,"_dropdownlink",_dropdownlink);
			output = replaceFirstOccurrence(str,"_dropdownitems",dropdownItems);
			output = replaceFirstOccurrence(str,"__margin",marginstream.str());
			output = replaceFirstOccurrence(str,"_left",leftstream.str());
			output = replaceFirstOccurrence(str,"_right",rightstream.str());
			output = replaceFirstOccurrence(str,"_top",topstream.str());
			output = replaceFirstOccurrence(str,"_bottom",bottomstream.str());
			output = replaceFirstOccurrence(str,"_position",_position);
			output = replaceFirstOccurrence(str,"_margintop",margintopstream.str());
			output = replaceFirstOccurrence(str,"_marginbottom",marginbottomstream.str());
			output = replaceFirstOccurrence(str,"_marginright",marginrightstream.str());
			output = replaceFirstOccurrence(str,"_marginleft",marginleftstream.str());
			output = replaceFirstOccurrence(str,"_paddingtop",paddingtopstream.str());
			output = replaceFirstOccurrence(str,"_paddingbottom",paddingbottomstream.str());
			output = replaceFirstOccurrence(str,"_paddingright",paddingrightstream.str());
			output = replaceFirstOccurrence(str,"_paddingleft",paddingleftstream.str());
			output = replaceFirstOccurrence(str,"__padding",paddingstream.str());


			out<<output;
		// ofstream file;


		// file.open("index.html",std::ios_base::app);
		// file << output <<endl;

		}
		return out.str();

	}




};


class navbar{
	string _background;
	navlink nLink[10];
	dropdown dDown[10];
	searchbar sBar[10];
	button btn[10];
	icon iCon[10];
	int iconiterator = 0;
	int buttoniterator = 0;
	int searchbariterator = 0;
	int nLinkiterator = 0;
	int dDowniterator = 0;
	stringstream snippetstream;
public:


	navbar(){

	}

	void addItem(icon i){
		try
		{
            if (iconiterator+1 < 10)
            {
                iCon[iconiterator++] = i;
                snippetstream<<endl<<i.getIcon()<<endl;
            }
            else
            {
                throw "limit reached!cannot add icon";
            }
        }
        catch (const char* msg)
        {
            cerr << msg << endl;
        }
}

	void addItem(button b){
	    try
		{
            if (buttoniterator+1 < 10)
            {
                btn[buttoniterator++]=b;
                snippetstream<<endl<<b.getButton()<<endl;
            }
            else
            {
                throw "limit reached!cannot add button";
            }
        }
        catch (const char* msg)
        {
            cerr << msg << endl;
        }
	}

	void addItem(searchbar s){
	    try
		{
            if (searchbariterator+1 < 10)
            {
                sBar[searchbariterator++] = s;
            snippetstream<<endl<<s.getSearchbar()<<endl;
            }
            else
            {
                throw "limit reached!cannot add search bar";
            }
        }
        catch (const char* msg)
        {
            cerr << msg << endl;
        }


	}

	void addItem(navlink navLink){


		try
		{
            if (nLinkiterator < 10)
            {
                nLink[nLinkiterator] = navLink;
                snippetstream<<endl<<navLink.getNavlink()<<endl;
                nLinkiterator++;
            }
            else
            {
                throw "limit reached!cannot add item";
            }
        }
        catch (const char* msg)
        {
            cerr << msg << endl;
        }

	}

	void addItem(dropdown dropDown){
	    try
		{
            if (dDowniterator < 10)
            {
                dDown[dDowniterator] = dropDown;
                snippetstream<<endl<<dropDown.getDropdown()<<endl;
                dDowniterator++;
            }
            else
            {
                throw "limit reached!cannot add item";
            }
        }
        catch (const char* msg)
        {
            cerr << msg << endl;
        }

	}





	void generate(){

		std::ifstream file("./snippets/navbar");
		std::string str;
		while (std::getline(file, str)) {

			string output = replaceFirstOccurrence(str,"_background",_background);
			output = replaceFirstOccurrence(str,"_backgroundimage",_background);
			output = replaceFirstOccurrence(str,"_navitems",snippetstream.str());

		ofstream file;

		file.open("index.html",std::ios_base::app);
		file <<endl <<output<<endl <<endl;

		}


	}



	void setBackground(string background){
		_background = background;
	};





};

class container:public position,public padding,public margin{


	string _backgroundcolor;
	string _backgroundimage;
	string _content = "";
	int _width=0;
	int _height=0;

	dropdown dDown[10];
	button btn[10];
	searchbar sBar[10];
	inputfield iField[10];
	icon _icon[10];
	heading hDing[10];
	navlink nLink[10];

	int dropdownIterator = 0;
	int buttonIterator = 0;
	int searchbarIterator = 0;
	int iconIterator = 0;
	int headingIterator = 0;
	int navlinkIterator = 0;
	int inputfieldIterator = 0;



public:
	void clear(){
		_content = "";
	}


	void setHeight(int height){
		_height = height;
	}

	void setBackgroundcolor(string backgroundcolor){
		_backgroundcolor = backgroundcolor;
	}
	void setBackgroundimage(string backgroundimage){
		_backgroundimage = backgroundimage;
	}


	void addItem(inputfield i){
		iField[inputfieldIterator++] = i;
		_content = _content + i.getSearchbar() + "\n";

	}

	void addItem(navlink n){
		nLink[navlinkIterator++] = n;
		_content = _content + n.getNavlink() + "\n";
	}

	void addItem(button b){
		btn[buttonIterator++] = b;
		_content = _content + b.getButton() + "\n";
	}

	void addItem(icon iCon){
		_icon[iconIterator++] = iCon;
		_content = _content + iCon.getIcon() + "\n";
	}

	void addItem(container c){
		_content = _content + c.getContainer() + "\n";


	}

	void addItem(dropdown d){
		dDown[dropdownIterator++] = d;
		_content = _content + d.getDropdown() + "\n";
	}

	void addItem(heading h){
		hDing[headingIterator++] = h;
		_content = _content + h.getHeading() + "\n";
	}

	void setWidth(int width){
		_width = width;
	}


	string getContainer(){
		string output;
		string out="";
		std::ifstream file("./snippets/container");
		std::string str;
		while (std::getline(file, str)) {
			stringstream s6,s7;
			if (_width!=0){
				s6<<_width;
			}
			else{
				s6<<"none";
			}
			{
				/* code */
			}

			stringstream marginstream;
			if (_margin!=0)
			{
				/* code */
				marginstream<<_margin;
			}

			else{
				marginstream<<"none";
			}

			stringstream marginleftstream;
			if (_marginLeft!=0)
			{
				/* code */
				marginleftstream<<_marginLeft;
			}

			else{
				marginleftstream<<"none";
			}
			stringstream marginrightstream;
			if (_marginRight!=0)
			{
				/* code */
				marginrightstream<<_marginRight;
			}
			else{
				marginrightstream<<"none";
			}
			stringstream margintopstream;
			if (_marginTop!=0)
			{
				/* code */
				margintopstream<<_marginTop;
			}
			else{
				margintopstream<<"none";
			}
			stringstream marginbottomstream;
			if (_marginBottom!=0)
			{
				/* code */
				marginbottomstream<<_marginBottom;
			}
			else{
				marginbottomstream<<"none";
			}

			stringstream paddingtopstream;
			if (_paddingTop!=0)
			{
				/* code */
				paddingtopstream<<_paddingTop;
			}
			else{
				paddingtopstream<<"none";
			}
			stringstream paddingbottomstream;
			if (_paddingBottom!=0)
			{
				/* code */
				paddingbottomstream<<_paddingBottom;
			}
			else{
				paddingbottomstream<<"none";
			}
			stringstream paddingrightstream;
			if (_paddingRight!=0)
			{
				/* code */
				paddingrightstream<<_paddingRight;
			}
			else{
				paddingrightstream<<"none";
			}
			stringstream paddingleftstream;
			if (_paddingLeft!=0)
			{
				/* code */
				paddingleftstream<<_paddingLeft;
			}
			else{
				paddingleftstream<<"none";
			}
			stringstream paddingstream;
			if (_padding!=0)
			{
				/* code */
				paddingstream<<_padding;
			}
			else{
				paddingstream<<"none";
			}


			stringstream leftstream,rightstream,bottomstream,topstream;
			if (_left!=0)
			{
				/* code */

				leftstream<<_left;
			}
			else{
				leftstream<<"none";
			}
			if (_right!=0)
			{
				/* code */

				rightstream<<_right;
			}
			else{
				rightstream<<"none";
			}
			if (_top!=0)
			{
				/* code */

				topstream<<_top;
			}
			else{
				topstream<<"none";
			}
			if (_bottom!=0)
			{
				/* code */

				bottomstream<<_bottom;
			}
			else{
				bottomstream<<"none";
			}



			if (_height!=0)
			{
				/* code */
				s7<<_height;
			}
			else{
				s7<<"none";
			}

			 output = replaceFirstOccurrence(str,"_content",_content);
			 output = replaceFirstOccurrence(str,"_backgroundcolor",_backgroundcolor);
			 output = replaceFirstOccurrence(str,"_backgroundimage",_backgroundimage);
			 output = replaceFirstOccurrence(str,"_width",s6.str());
			 output = replaceFirstOccurrence(str,"_height",s7.str());
			 output = replaceFirstOccurrence(str,"__margin",marginstream.str());
			output = replaceFirstOccurrence(str,"_left",leftstream.str());
			output = replaceFirstOccurrence(str,"_right",rightstream.str());
			output = replaceFirstOccurrence(str,"_top",topstream.str());
			output = replaceFirstOccurrence(str,"_bottom",bottomstream.str());
			output = replaceFirstOccurrence(str,"_position",_position);
			output = replaceFirstOccurrence(str,"_margintop",margintopstream.str());
			output = replaceFirstOccurrence(str,"_marginbottom",marginbottomstream.str());
			output = replaceFirstOccurrence(str,"_marginright",marginrightstream.str());
			output = replaceFirstOccurrence(str,"_marginleft",marginleftstream.str());
			output = replaceFirstOccurrence(str,"_paddingtop",paddingtopstream.str());
			output = replaceFirstOccurrence(str,"_paddingbottom",paddingbottomstream.str());
			output = replaceFirstOccurrence(str,"_paddingright",paddingrightstream.str());
			output = replaceFirstOccurrence(str,"_paddingleft",paddingleftstream.str());
			output = replaceFirstOccurrence(str,"__padding",paddingstream.str());
			 out = out + output + "\n";

		}

		return out;
	}


};







class col:public container{
	string _item="";
public:

	void addItem(button b){
		string output;
		std::ifstream file("./snippets/col");
		std::string str;
		while (std::getline(file, str)) {

			 output = replaceFirstOccurrence(str,"_colitem",b.getButton());
			 _item = _item +"\n"+ output + "\n";
		}


	}

	void addItem(container c){
		string output;
		std::ifstream file("./snippets/col");
		std::string str;
		while (std::getline(file, str)) {

			 output = replaceFirstOccurrence(str,"_colitem",c.getContainer());
			 _item = _item +"\n"+ output + "\n";
		}

	}

	void addItem(col c){
		string output;
		std::ifstream file("./snippets/col");
		std::string str;
		while (std::getline(file, str)) {

			 output = replaceFirstOccurrence(str,"_colitem",c.getCol());
			 _item = _item +"\n"+ output + "\n";
		}


	}


	void addItem(string s){

		string output;
		std::ifstream file("./snippets/col");
		std::string str;
		while (std::getline(file, str)) {

			 output = replaceFirstOccurrence(str,"_colitem",s);
			 _item = _item +"\n"+ output + "\n";
		}


	}

	void clear(){
		_item = "";
	}
	void addItem(inputfield ifield){
		string output;
		std::ifstream file("./snippets/col");
		std::string str;
		while (std::getline(file, str)) {

			 output = replaceFirstOccurrence(str,"_colitem",ifield.getSearchbar());
			 _item = _item +"\n"+ output + "\n";
		}


	}

	void addItem(navlink nl){
		string output;
		std::ifstream file("./snippets/col");
		std::string str;
		while (std::getline(file, str)) {

			 output = replaceFirstOccurrence(str,"_colitem",nl.getNavlink());
			 _item = _item +"\n"+ output + "\n";
		}


	}

	void addItem(icon iCon){
		string output;
		std::ifstream file("./snippets/col");
		std::string str;
		while (std::getline(file, str)) {

			 output = replaceFirstOccurrence(str,"_colitem",iCon.getIcon());
			 _item = _item +"\n"+ output + "\n";
		}

	}

	void addItem(heading h){
		string output;
		std::ifstream file("./snippets/col");
		std::string str;
		while (std::getline(file, str)) {

			 output = replaceFirstOccurrence(str,"_colitem",h.getHeading());
			 _item = _item +"\n"+ output + "\n";
		}

	}

	void addItem(dropdown dDown){
		string output;
		std::ifstream file("./snippets/col");
		std::string str;
		while (std::getline(file, str)) {

			 output = replaceFirstOccurrence(str,"_colitem",dDown.getDropdown());
			 _item = _item +"\n"+ output + "\n";
		}

	}

	string getCol(){
		return _item;

	}
};

class row:public container{
	string _item="";
public:
	void clear(){
		_item = "";
	}

	void br(){
		_item = _item+"<br>";
	}

	void addItem(col c){
		string output;
		std::ifstream file("./snippets/row");
		std::string str;
		while (std::getline(file, str)) {

			 output = replaceFirstOccurrence(str,"_rowitem",c.getCol());
			 _item = _item +"\n"+ output + "\n";
		}


	}

	void addItem(row r){
		string output;
		std::ifstream file("./snippets/row");
		std::string str;
		while (std::getline(file, str)) {

			 output = replaceFirstOccurrence(str,"_rowitem",r.getRow());
			 _item = _item +"\n"+ output + "\n";
		}


	}


	void addItem(string s){
		string output;
		std::ifstream file("./snippets/row");
		std::string str;
		while (std::getline(file, str)) {

			 output = replaceFirstOccurrence(str,"_rowitem",s);
			 _item = _item +"\n"+ output + "\n";
		}


	}


	void addItem(inputfield ifield){
		string output;
		std::ifstream file("./snippets/row");
		std::string str;
		while (std::getline(file, str)) {

			 output = replaceFirstOccurrence(str,"_rowitem",ifield.getSearchbar());
			 _item = _item +"\n"+ output + "\n";
		}

	}

	void addItem(button b){
		string output;
		std::ifstream file("./snippets/row");
		std::string str;
		while (std::getline(file, str)) {

			 output = replaceFirstOccurrence(str,"_rowitem",b.getButton());
			 _item = _item +"\n"+ output + "\n";
		}



	}

	void addItem(dropdown dDown){
		string output;
		std::ifstream file("./snippets/row");
		std::string str;
		while (std::getline(file, str)) {

			 output = replaceFirstOccurrence(str,"_rowitem",dDown.getDropdown());
			 _item = _item +"\n"+ output + "\n";
		}



	}


	void addItem(heading h){
		string output;
		std::ifstream file("./snippets/row");
		std::string str;
		while (std::getline(file, str)) {

			 output = replaceFirstOccurrence(str,"_rowitem",h.getHeading());
			 _item = _item +"\n"+ output + "\n";
		}



	}

	void addItem(icon iCon){
		string output;
		std::ifstream file("./snippets/row");
		std::string str;
		while (std::getline(file, str)) {

			 output = replaceFirstOccurrence(str,"_rowitem",iCon.getIcon());
			 _item = _item +"\n"+ output + "\n";
		}

	}


	string getRow(){
		return _item;

	}
};










class containerfluid{
	string _item = "";
	string _backgroundcolor;
	string _backgroundimage;
	int _padding = 0;
	int _height = 800;
public:


	void setBackgroundcolor(string backgroundcolor){
		_backgroundcolor=backgroundcolor;
	}
	void setHeight(int height){
		_height = height;
	}

	void setPadding(int padding){
		_padding = padding;
	}

	void setBackgroundimage(string backgroundimage){
		_backgroundimage = backgroundimage;
	}

	containerfluid(){

	}

	containerfluid(string backgroundcolor){
		_backgroundcolor = backgroundcolor;
		_backgroundimage = backgroundcolor;
	}


	void addItem(col c){
		_item = _item + c.getCol() + "\n";
	}

	void addItem(container c){
		_item = _item + c.getContainer() + "\n";
	}

	void addItem(navlink n){
		_item = _item + n.getNavlink() + "\n";
	}




	void addItem(row r){
		_item = _item + r.getRow() + "\n";

	}

	void addItem(icon iCon){
		_item = _item + iCon.getIcon() + "\n";

	}


	void generate(){


		std::ifstream file("./snippets/container-fluid");
		std::string str;
		while (std::getline(file, str)) {
			stringstream paddingstream;
			paddingstream<<_padding;
			stringstream heightstream;
			heightstream<<_height;
			string output=replaceFirstOccurrence(str,"_item",_item);
			output=replaceFirstOccurrence(str,"_backgroundcolor",_backgroundcolor);
			output=replaceFirstOccurrence(str,"_backgroundimage",_backgroundimage);
			output=replaceFirstOccurrence(str,"__padding",paddingstream.str());
			output=replaceFirstOccurrence(str,"_height",heightstream.str());


		ofstream file;


		file.open("index.html",std::ios_base::app);
		file << output <<endl;

		}

	}

};





class deadend{
public:
	deadend(){


		std::ifstream file("./snippets/end");
		std::string str;
		while (std::getline(file, str)) {
	  // process string ...



			string output=str;

			ofstream file;

		file.open("index.html",std::ios_base::app);
		file << output <<endl;



		}

		cout<<"website created. open index.html"<<endl;

		// system("open index.html");
		// system("open -a Sublime Text");

		// system("killall Terminal");
		// system("pkill Terminal");

	}
};
