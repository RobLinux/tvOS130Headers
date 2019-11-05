/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:23 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUIThemeRendition.h>

@interface _CUIThemePDFRendition : CUIThemeRendition {

	CGPDFDocumentRef _pdfDocument;

}
-(void)dealloc;
-(id)metrics;
-(int)pixelFormat;
-(id)_initWithCSIHeader:(const csiheader*)arg1 ;
-(id)initWithCSIData:(id)arg1 forKey:(const renditionkeytoken*)arg2 artworkStatus:(long long)arg3 ;
-(CGPDFDocumentRef)pdfDocument;
-(CGImageRef)createImageFromPDFRenditionWithScale:(double)arg1 ;
@end
