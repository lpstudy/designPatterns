#include "Graphic.h"
#include "log.h"
#include "Line.h"
#include "Rectangle.h"
#include "Text.h"
#include "Picture.h"

int main()
{
	Graphic* line1 = new Line;
	Graphic* line2 = new Line;
	Graphic* line3 = new Line;
	
	Graphic* rec1  = new Rectangle;
	Graphic* rec2  = new Rectangle;
	Graphic* rec3  = new Rectangle;

	Graphic* text1 = new Text;
	Graphic* text2 = new Text;
	Graphic* text3 = new Text;

	Graphic* pic1 = new Picture;
	Graphic* pic2 = new Picture;
	Graphic* pic3 = new Picture;

	pic1->Add(line1);
	pic1->Add(line2);
	pic1->Add(line3);
	pic1->Add(rec1);
	pic1->Add(rec2);
	pic1->Add(text3);

	pic2->Add(rec1);
	pic2->Add(rec3);
	pic2->Add(text1);
	pic2->Add(pic1);

	pic3->Add(pic1);
	pic3->Add(pic2);
	pic3->Add(text1);
	pic3->Add(line1);
	TRACE_FUCTION_AND_LINE("\n\n\n\n......................................");
	pic1->Draw();
	TRACE_FUCTION_AND_LINE("\n\n\n\n......................................");
	pic2->Draw();
	TRACE_FUCTION_AND_LINE("\n\n\n\n......................................");
	pic3->Draw();
	return 0;
}