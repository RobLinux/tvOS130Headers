/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:01 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKitLegacy/DOMHTMLElement.h>

@class WebFrame, NSString, DOMDocument, DOMAbstractView;

@interface DOMHTMLFrameElement : DOMHTMLElement

@property (nonatomic,readonly) WebFrame * contentFrame; 
@property (copy) NSString * frameBorder; 
@property (copy) NSString * longDesc; 
@property (copy) NSString * marginHeight; 
@property (copy) NSString * marginWidth; 
@property (copy) NSString * name; 
@property (assign) BOOL noResize; 
@property (copy) NSString * scrolling; 
@property (copy) NSString * src; 
@property (readonly) DOMDocument * contentDocument; 
@property (readonly) DOMAbstractView * contentWindow; 
@property (copy) NSString * location; 
@property (readonly) int width; 
@property (readonly) int height; 
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(int)width;
-(int)height;
-(NSString *)location;
-(NSString *)marginWidth;
-(void)setMarginWidth:(NSString *)arg1 ;
-(WebFrame *)contentFrame;
-(void)setLocation:(NSString *)arg1 ;
-(NSString *)src;
-(void)setSrc:(NSString *)arg1 ;
-(NSString *)frameBorder;
-(void)setFrameBorder:(NSString *)arg1 ;
-(NSString *)longDesc;
-(void)setLongDesc:(NSString *)arg1 ;
-(NSString *)marginHeight;
-(void)setMarginHeight:(NSString *)arg1 ;
-(BOOL)noResize;
-(void)setNoResize:(BOOL)arg1 ;
-(NSString *)scrolling;
-(void)setScrolling:(NSString *)arg1 ;
-(DOMDocument *)contentDocument;
-(DOMAbstractView *)contentWindow;
-(int)structuralComplexityContribution;
@end

