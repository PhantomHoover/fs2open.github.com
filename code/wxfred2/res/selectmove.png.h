#ifndef SELECTMOVE_PNG_H
#define SELECTMOVE_PNG_H

#include <wx/mstream.h>
#include <wx/image.h>
#include <wx/bitmap.h>

static const unsigned char selectmove_png[] = 
{
	0x89, 0x50, 0x4E, 0x47, 0x0D, 0x0A, 0x1A, 0x0A, 0x00, 0x00, 
	0x00, 0x0D, 0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x17, 
	0x00, 0x00, 0x00, 0x17, 0x08, 0x02, 0x00, 0x00, 0x00, 0x6F, 
	0x48, 0x43, 0xF7, 0x00, 0x00, 0x00, 0x01, 0x73, 0x52, 0x47, 
	0x42, 0x00, 0xAE, 0xCE, 0x1C, 0xE9, 0x00, 0x00, 0x00, 0x04, 
	0x67, 0x41, 0x4D, 0x41, 0x00, 0x00, 0xB1, 0x8F, 0x0B, 0xFC, 
	0x61, 0x05, 0x00, 0x00, 0x00, 0x20, 0x63, 0x48, 0x52, 0x4D, 
	0x00, 0x00, 0x7A, 0x26, 0x00, 0x00, 0x80, 0x84, 0x00, 0x00, 
	0xFA, 0x00, 0x00, 0x00, 0x80, 0xE8, 0x00, 0x00, 0x75, 0x30, 
	0x00, 0x00, 0xEA, 0x60, 0x00, 0x00, 0x3A, 0x98, 0x00, 0x00, 
	0x17, 0x70, 0x9C, 0xBA, 0x51, 0x3C, 0x00, 0x00, 0x00, 0x1A, 
	0x74, 0x45, 0x58, 0x74, 0x53, 0x6F, 0x66, 0x74, 0x77, 0x61, 
	0x72, 0x65, 0x00, 0x50, 0x61, 0x69, 0x6E, 0x74, 0x2E, 0x4E, 
	0x45, 0x54, 0x20, 0x76, 0x33, 0x2E, 0x35, 0x2E, 0x31, 0x30, 
	0x30, 0xF4, 0x72, 0xA1, 0x00, 0x00, 0x00, 0x94, 0x49, 0x44, 
	0x41, 0x54, 0x38, 0x4F, 0xCD, 0x93, 0x61, 0x0E, 0x80, 0x20, 
	0x08, 0x85, 0xE9, 0xE6, 0x1E, 0xCD, 0xA3, 0x05, 0x32, 0x9D, 
	0x91, 0xF2, 0xDA, 0xA0, 0x16, 0xF3, 0x47, 0xC3, 0xF5, 0x09, 
	0xEF, 0xC1, 0x51, 0x6B, 0xA5, 0x78, 0x30, 0x25, 0x1E, 0x14, 
	0x47, 0x48, 0x37, 0x1F, 0x51, 0x88, 0x0A, 0x7C, 0x09, 0xD4, 
	0xC2, 0x08, 0x3D, 0x3E, 0xC8, 0xA3, 0x18, 0xEB, 0x1C, 0x90, 
	0x47, 0x29, 0x45, 0x4A, 0xD0, 0x42, 0xF4, 0x7B, 0x17, 0x58, 
	0x5D, 0xD8, 0xCE, 0xDA, 0x23, 0x6E, 0x64, 0x7E, 0x79, 0xA6, 
	0x70, 0x9E, 0x6F, 0xEF, 0x15, 0xD9, 0x54, 0xD3, 0x12, 0x8A, 
	0x65, 0xBB, 0xBB, 0xFC, 0xD0, 0x1D, 0x91, 0x6A, 0x8C, 0x35, 
	0x23, 0xD3, 0x24, 0xB7, 0xAE, 0xBD, 0x50, 0x8B, 0x36, 0x9C, 
	0xA0, 0xCB, 0x42, 0x39, 0x34, 0x72, 0x6B, 0x8F, 0x06, 0x28, 
	0x67, 0x5E, 0x72, 0x66, 0x57, 0x07, 0x37, 0xBA, 0x47, 0x5D, 
	0x6C, 0xB0, 0x8A, 0x40, 0x17, 0x67, 0x71, 0xCC, 0x15, 0xDE, 
	0xA3, 0x27, 0xAC, 0x3F, 0x51, 0x4E, 0xC8, 0xA0, 0x10, 0xFE, 
	0x38, 0x4B, 0xD5, 0x95, 0x00, 0x00, 0x00, 0x00, 0x49, 0x45, 
	0x4E, 0x44, 0xAE, 0x42, 0x60, 0x82, 
};

wxBitmap& selectmove_png_to_wx_bitmap()
{
	static wxMemoryInputStream memIStream( selectmove_png, sizeof( selectmove_png ) );
	static wxImage image( memIStream, wxBITMAP_TYPE_PNG );
	static wxBitmap bmp( image );
	return bmp;
};


#endif //SELECTMOVE_PNG_H