/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:03 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CGRenderer.h>

@interface PDFRenderer : CGRenderer {

	CFDictionaryRef info;
	CFDataRef data;
	CGDataConsumerRef dataConsumer;

}
-(id)init;
-(void)dealloc;
-(void)setFileURL:(id)arg1 ;
-(BOOL)setCanvasWidth:(unsigned)arg1 height:(unsigned)arg2 ;
-(void)setFileTitle:(id)arg1 ;
-(void)flushRender;
-(const CFDataRef)pdfdata;
@end

