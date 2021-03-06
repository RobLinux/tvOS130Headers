/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:02 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKitLegacy/DOMHTMLMediaElement.h>

@class NSString;

@interface DOMHTMLVideoElement : DOMHTMLMediaElement

@property (assign) unsigned width; 
@property (assign) unsigned height; 
@property (readonly) unsigned videoWidth; 
@property (readonly) unsigned videoHeight; 
@property (copy) NSString * poster; 
@property (assign) BOOL playsInline; 
@property (readonly) BOOL webkitSupportsFullscreen; 
@property (readonly) BOOL webkitDisplayingFullscreen; 
-(unsigned)width;
-(unsigned)height;
-(void)setWidth:(unsigned)arg1 ;
-(void)setHeight:(unsigned)arg1 ;
-(void)webkitEnterFullscreen;
-(void)webkitExitFullscreen;
-(unsigned)videoWidth;
-(unsigned)videoHeight;
-(NSString *)poster;
-(void)setPoster:(NSString *)arg1 ;
-(BOOL)playsInline;
-(void)setPlaysInline:(BOOL)arg1 ;
-(BOOL)webkitSupportsFullscreen;
-(BOOL)webkitDisplayingFullscreen;
-(void)webkitEnterFullScreen;
-(void)webkitExitFullScreen;
@end

